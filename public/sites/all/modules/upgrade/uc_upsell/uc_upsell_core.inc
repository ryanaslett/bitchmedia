<?php

/**
 * Get related items from the database and show them at the cart screen.
 * - If there aren't enough related products assigned in the admin, show a random selection.
 * - set's msg to the string to in the uc_upsell variable
 *
 * @param string $msg
 *   A message to override the default with
 * @return array
 *   Fully loaded array of related nodes
 */
function uc_upsell_resolve_associates(&$msg = '') {
  $config = uc_upsell_get_config();
  $dpath = $_GET['q'];

  // If this is the cart...
  if ($dpath == 'cart') {
    $context = 'pane';
    $is_block = FALSE;
  }
  else {
    $is_block = TRUE;
    $node = node_load(arg(1));
    if (uc_product_is_product($node)) {
      $product_nid = $node->nid;
      $context = 'product';
    }
    else {
      $context = 'node';
    }
  }

  // If can't be enabled for this context, exit function
  if ($context != 'pane' && (($config['block']['enable'] == 1 && $context == 'product' && intval(arg(1)) == 0)
    || ($config['block']['enable'] == 0 && $context == 'node')  // Can't enable for node
    || ($context == 'product' && arg(0) == 'catalog') // Don't want to show on Catalog pages
    || ($context == 'product' && arg(2) == 'edit') // Don't enable it on edit pages
    )) {
    return array();
  }

  // set vars to use when getting related items, based on the type of page being shown
  $vars = array(
    'max' => ($is_block) ? $config['block']['max'] : $config['pane']['max'],
    'use_random' => ($is_block) ? $config['block'][$context][(($context == 'node') ? 'source' : 'use_random')] : $config['pane']['use_random'],
  );

  $primary = 0; // Flag whether primary source is in result
  $sources = 0; // Flag

  // If source is a product node, begin with nodes related to this product that are not in cart or itself
  if (isset($product_nid)) {
    // Start list with nids related to the product node
    $related = uc_upsell_get_associate_nids(array(arg(1)), intval($vars['max']), array(arg(1)), $vars);

    // Get/add nids related to the cart
    if ($config['block']['product']['use_cart'] == TRUE) {
      $related = array_unique(array_merge($related, uc_upsell_get_associate_nids(uc_upsell_get_cart_nids(), $vars['max'] - count($related), arg(1), $vars)));
    }

    // If related is not empty...
    if (!empty($related)) {
      $primary = 1;
      $sources += 1;
    }
  }
  else {
    // We are on the cart, so we need to use $cart_nids as the source, as well as filter.
    $cartnids = uc_upsell_get_cart_nids();

    $related = uc_upsell_get_associate_nids($cartnids, intval($vars['max']), $cartnids, $vars);
    if (!empty($related)) {
      $primary = 1;
      $sources += 1;
    }
  }

  // If nothing is related, exit function
  if (empty($related)) {
    return array();
  }

  // Set msg based on strict flag and number of sources...
  $msg = ($primary && ($sources == 1 || $config['global']['loose_msg_req'])) ? (($context == 'pane') ? $config['pane']['msg_related'] : $config['block'][$context]['msg_related']) : (($context == 'pane') ? $config['pane']['msg_mixed'] : $config['block'][$context]['msg_mixed']);

  // If this is a form submission, the contents of the upsell products
  // must stay fixed; otherwise the form we are posting to may not exist.
  if (isset($_POST['form_id'])) {
    if (strpos($_POST['form_id'], 'uc_product_add_to_cart_form_') === 0 ||
      strpos($_POST['form_id'], 'uc_catalog_buy_it_now_form_') === 0) {
      if (isset($_SESSION['uc_upsell_related'][$dpath])) {
        $products = array_map('node_load', $_SESSION['uc_upsell_related'][$dpath]);
        return $products;
      }
    }
  }

  // Shuffle the products
  if ($config['global']['shuffle']) {
    shuffle($related);
  }
  $related = array_slice($related, 0, $vars['max']);

  // Store the product list in the session, it's needed later if one of the forms gets submitted.
  if (!isset($_SESSION['uc_upsell_related'])) {
    $_SESSION['uc_upsell_related'] = array();
  }
  $_SESSION['uc_upsell_related'][$dpath] = $related;

  $products = array_map('node_load', $related);
  return $products;
}

/**
 * Find the associate nids!
 *
 * @param $source
 *   An array of source nodes, which will be the basis for our search
 * @param int $max
 *   The maximum number of nids to return (required)
 * @param array $filter
 *   An array (if given) to use as a filter against the returned array (optional)
 * @param array $vars
 *   An array of extra variables (optional)
 * @return array
 *   An array of nids to be resolved by uc_upsell_resolve_associates()
 */
function uc_upsell_get_associate_nids($source, $max = 0, $filter = array(), $vars = array()) {
  // Process args (a bit more robust here, since developers will likely use it)
  $config = uc_upsell_get_config();
  // Ensure source an array
  if (!is_array($source) && (is_numeric($source) || (is_object($source) && $source->nid))) {
    $source = array((is_numeric($source)) ? $source : $source->nid);
  }
  // Ensure filter an array
  if (!is_array($filter) && (is_numeric($filter) || (is_object($filter) && $filter->nid))) {
    $filter = array((is_numeric($filter)) ? $filter : $filter->nid);
  }
  // Ensure max is an integer
  if (!is_int($max) && is_numeric($max)) {
    $max = abs(round($max));
  }
  // If source or filter is not an array, or max is not an integer, exit function
  if (empty($source) || !is_array($source) || !is_array($filter) || !is_int($max)) {
    return array();
  }

  $sought = array(); // Capture found nid
  $related = array(); // Final related array
  $related_by_term = array(); // Any nodes related by taxonomy we happen to find.
  
  foreach ($source as $nid) {
    if ((is_object($nid) && $nid->nid) || (is_array($nid) && $nid['nid'])) {
      $nid = (is_object($nid)) ? $nid->nid : $nid['nid'];
    }

    if (is_numeric($nid)) {
      $sought[] = $nid;
      $related = db_query("SELECT related_products FROM {uc_upsell_products} WHERE nid = :nid", array(':nid' => $nid))->fetchField();

      // If we found an array of related products specified in the node form, let's initialize them.
      if ($related && is_array(unserialize($related))) {
        $related = unserialize($related);
      }
      else {
        $related = array();
      }

      // Depending on our taxonomy settings, manipulate the array
      switch($config['global']['taxonomy']) {
        case 'ignore':
          break;
        case 'override':
          $node = node_load($nid);
          $related = uc_upsell_get_tids_for_intersect($node);
          break;
        case 'add':
          $node = node_load($nid);
          $related_by_term = uc_upsell_get_tids_for_intersect($node);
          $related_by_term = array_unique(array_merge((array)$related, (array)$related_by_term));
          break;
      }
    }
  }

  // First, if we are including related-by-taxonomy nodes, and an array exists, only include as many as needed.
  if (!empty($related_by_term) && count($related) < $max) {
  
    $needed = $max - count($related); // How many do we need?

    if ($needed > 0) {
      // Filter out the nodes already in our list
      $related_by_term = array_diff(array_values($related_by_term), array_values($related));
      $related = array_unique(array_merge((array)$related, (array)$related_by_term));
    }
  }

  $filter_list = array_merge($filter, $sought, uc_upsell_get_cart_nids());
  if ($config['global']['exclude_purchased']) {
    $filter_list = array_merge($filter_list, uc_upsell_get_bought_products_nids());
  }
  $filter_list = array_unique($filter_list);

  // Remove found nids with filter and already sought nids, make them unique
  $upsell_list = uc_upsell_filter_types($related);
  $upsell_list = array_unique(array_diff(array_keys($upsell_list), $filter_list));

  // If count of related nodes doesn't meet threshold and can include random nodes, add them.
  
  // Notes: This code should be moved into its own method, since it's "context agnostic."
  // - Should find a way to honor the product types settings (it currently does not)
  if (count($upsell_list) < $max && $vars['use_random']) {

    $result = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('n.status', 1)
      ->condition('n.type', $config['global']['types'])
      ->condition('n.nid', $filter_list, 'NOT IN')
      ->orderBy('RAND()')
      ->execute();

    $random_nids = $result->fetchCol();
    $upsell_list = array_unique(array_merge($upsell_list, array_slice($random_nids, 0, $max - count($upsell_list))));
  }
  
  // Allow other modules to alter associate array
  drupal_alter('uc_upsell_related', $upsell_list);

  // Shuffle related nodes
  shuffle($upsell_list);

  // If max is valid, slice array to only show our configured maximum
  if ($max > 0) $upsell_list = array_slice($upsell_list, 0, $max);
  return $upsell_list;
}


/**
 * Compute the taxonomy terms and store them as an array (calculated at first run, and during cron)
 */
function uc_upsell_compute_terms() {
  $query = db_select('taxonomy_term_data', 'td');
  $query->innerJoin('taxonomy_index', 'ti', 'td.tid = ti.tid');
  $query->innerJoin('node', 'n', 'ti.nid = n.nid');
  $query->addExpression('count(td.tid)', 'count');
  $result = $query->fields('td', array('name', 'tid'))
    ->condition('n.type', uc_product_uc_product_types())
    ->condition('n.status', 1)
    ->groupBy('ti.tid')
    ->orderBy('count', 'DESC')
    ->execute();

  while ($term = $result->fetchObject()) {
    if ($term->count > 1) {
      $store[] = intval($term->tid);
    }
  }

  cache_set('uc_upsell_terms', serialize($store), 'cache', CACHE_TEMPORARY);
}

/**
 * Get related nids based on term ids (calculated at first run, and during cron)
 */
function uc_upsell_nids_by_term($intersect, $exclude_nid) {
  $query = db_select('node', 'n');
  $query->innerJoin('taxonomy_index', 't', 'n.nid = t.nid');
  $nids = $query->fields('n', array('nid'))
    ->condition('t.tid', $intersect)
    ->condition('n.type', uc_product_uc_product_types())
    ->condition('n.nid', $exclude_nid, '<>')
    ->condition('n.status', 1)
    ->groupBy('n.title')
    ->orderBy('n.title')
    ->execute()
    ->fetchCol();
  return $nids;
}

/**
 * Get intersecting term ids
 *
 * @param $node
 *   The node object to examine
 * @return
 *   An array of nodes related by taxonomy term
 */
function uc_upsell_get_tids_for_intersect($node) {
  // Load the terms for the node in question
  $terms = uc_upsell_taxonomy_node_get_terms($node);
  $config = uc_upsell_get_config();
  $node_tids = array();

  foreach ($terms AS $term) {
    // If we are restricting by term id, only add the node to the array if the term exists in config.
    if ($config['global']['restrict_terms'] && $config['global']['restrict_terms'][0] != 0) {
      if (in_array($term->tid, $config['global']['restrict_terms'])) {
        $node_tids[] = $term->tid;
      }
    }
    else {
      $node_tids[] = $term->tid;
    }
  }

  $related_by_term = array();
  $all_terms = cache_get('uc_upsell_terms');
  if (!empty($all_terms)) {
    $intersect = array_intersect($node_tids, unserialize($all_terms->data));
    $related_by_term = uc_upsell_nids_by_term($intersect, $node->nid);
  }
  return $related_by_term;
}

/**
 * Helper function go get cart nids.
 *
 * @return array
 *   An array of cart nids (just the 'nid' element)
 */
function uc_upsell_get_cart_nids() {
  // Get cart nids, as a base filter
  $cart_nids = array();
  $user_cart = uc_cart_get_contents();

  foreach ($user_cart as $cart) {
    $cart_nids[$cart->nid] = $cart->nid;
  }
  return $cart_nids;
}

/**
 * Helper function go get purchased products nids.
 *
 * @return array
 *   An array of purchased nids (just the 'nid' element)
 */
function uc_upsell_get_bought_products_nids() {
  global $user;
  $nids = array();
  if ($user->uid > 0) {
    $query = db_select('uc_orders', 'o');
    $query->join('uc_order_products', 'op', 'o.order_id = op.order_id');
    $query->fields('op', array('nid'));
    $query->condition("o.order_status", "completed");
    $query->condition("o.uid", $user->uid);
    $nids = $query->execute()->fetchCol();
  }
  return $nids;
}

/**
 * Helper function go get all terms of the node.
 */
function uc_upsell_taxonomy_node_get_terms($node, $key = 'tid') {
  static $terms;
  if (!isset($terms[$node->vid][$key])) {
    $query = db_select('taxonomy_index', 'r');
    $query->join('taxonomy_term_data', 't', 'r.tid = t.tid');
    $query->join('taxonomy_vocabulary', 'v', 't.vid = v.vid');
    $query->fields('t');
    $query->condition("r.nid", $node->nid);
    $result = $query->execute();
    $terms[$node->vid][$key] = array();
    foreach ($result as $term) {
      $terms[$node->vid][$key][$term->$key] = $term;
    }
  }
  return $terms[$node->vid][$key];
}