<?php

/**
 * Implementation of hook_form_alter()
 *
 * Adds the list of Related Products to a node_product edit form.
 */
function uc_upsell_form_alter(&$form, $form_state, $form_id) {
  // Add form associations field to base - but only for users with given permissions.
  if (user_access('administer upsell settings')) {

    // reduce to form's node type
    $node_type = preg_replace('/_node_form$/i', '', $form_id);
    // get list of product types
    $product_types = array_keys(uc_product_node_info());
    $product_types[] = 'product_kit';

    // Get all currently associated products - besides this one...
    if (in_array($node_type, $product_types)) {
      $current_prods_array = db_select('uc_upsell_products', 'up')
        ->fields('up', array('related_products'))
        ->condition('nid', $form['nid']['#value'])
        ->execute()
        ->fetchField();
      $current_prods_array = unserialize($current_prods_array);
      $current_nids = array();

      if (is_array($current_prods_array)) {
        foreach ($current_prods_array AS $current_product) {
          $current_nids[] = $current_product;
        }
      }

      // Alphabetize the array (since there's no telling by nid)
      (is_array($current_nids)) ? $current_nids = asort($current_nids) : '' ;

      // Get product types
      $config = uc_upsell_get_config();
      $product_types = array_values($config['global']['types']);

      // Get all products
      $avail_products = array();
      $result = db_select('node', 'n')
        ->fields('n', array('title', 'nid'))
        ->condition('n.type', $product_types)
        ->condition('n.status', 1)
        ->condition('n.nid', intval(arg(1)), '<>')
        ->orderBy('n.title')
        ->execute();
      while ($file_products = $result->fetchObject()) {
        $avail_products[$file_products->nid] = $file_products->title;
      }

      $assoc_form = array(
        '#type' => 'select',
        '#multiple' => TRUE,
        '#title' => t('Related Products for Upsell'),
        '#weight' => 30,
        '#description' => t('Select related products to offer at checkout.'),
        '#options' => $avail_products,
        '#default_value' => $current_prods_array,
        '#id' => 'upsell',
        );

      $form['base']['relatedProducts'] = $assoc_form;
    }
  }
}

/**
 * Insert or update the db with related products for a particular node.
 * @param $node object Target product node object.
 */
function uc_upsell_add_related($node) {
  $config = uc_upsell_get_config();

  // Init the array of related products from our form for final insertion into dabase
  $products = array();
  // Get list of product types
  $product_types = array_keys(uc_product_node_info());
  // Include product kits also
  $product_types[] = 'product_kit';

  // Create an array of selected related products and add the current product to the related products lists for each of them
  if (in_array($node->type, $product_types) && is_array($node->relatedProducts)) {

    // Update reciprocal nodes first.
    if ($config['global']['reciprocal_behavior'] != 'none') {
      foreach ($node->relatedProducts as $product) {
        $ary = array();
        $ary[] = $node->nid;
        $products[] = $product;
  
        $related = _uc_upsell_get_related($product);

        if (empty($related)) {
          // Add a new row for this product
          uc_upsell_insert_nids($product, $ary);
        }
        else {
          if (is_array($ary)) {                  
            $ary = array_merge($ary, $related);
            $ary = array_unique($ary);          
          }
          // Update this product's related nodes (a row already exists)
          uc_upsell_update_nids($product, $ary);
        }

        switch ($config['global']['reciprocal_behavior']) {
          case 'many':
            // Loop through the array of associate nodes and update them with the whole array, if we're configured to do so.
            if (count($products > 0)) {
              foreach ($products AS $key => $nid) {
                $current_nids = _uc_upsell_get_related($nid);
                
                if (!empty($current_nids)) {
                  $merge = array_unique(array_merge($current_nids, $products));
                  $merge = array_diff($merge, (array)$nid); // Get rid of the current nid
                  uc_upsell_update_nids($nid, $merge);               
                }
              }
            }
            break;
          
          // If we're doing one-to-one, only update reciprocal nodes with main node.
          case 'one':
            if (count($products > 0)) {
              foreach ($products AS $key => $nid) {
                $current_nids = _uc_upsell_get_related($nid);
                
                // If we already have nids for this product, grab them and update with this master node.
                if (!empty($current_nids)) {

                  $merge = array_unique(array_merge($current_nids, (array)$nid));
                  $merge = array_diff($merge, (array)$nid); // Get rid of the current nid
                  uc_upsell_update_nids($nid, $merge); // What if there are not current nids already?                 
                }
                else {
                  uc_upsell_insert_nids($nid, (array)$node->nid);
                }
              }
            }
            break;
        }

        // Get the list of related products for the current product
        $current_nids = _uc_upsell_get_related($node->nid);

        if (!empty($current_nids)) {
          // Delete current product from the related products list for any products that are being removed
          foreach ($current_nids as $currentnid) {
            if (!in_array($currentnid, $node->relatedProducts)) {
              $nid_array = array();
              $nid_array[] = $node->nid;
              $update_nids = _uc_upsell_get_related($currentnid);
              
              if (!empty($update_nids)) {
                $update_nids = array_unique(array_diff($update_nids, $nid_array));
              }
             
              uc_upsell_update_nids($currentnid, $update_nids);
            }
          }
        }
      }
    }

    // Decide whether we are updating the related products entry or inserting a new one.
    if (!db_query("SELECT related_products FROM {uc_upsell_products} WHERE nid = :nid", array(':nid' => $node->nid))->fetchField()) {
      uc_upsell_insert_nids($node->nid, $node->relatedProducts);
    }
    else {
      uc_upsell_update_nids($node->nid, $node->relatedProducts);
    }
    drupal_set_message(t('Related products were updated.'));
  }
}


/**
 * Get a product's related nodes
 * @param $nid
 *   The nid of the node to retrieve associates from
 * @return array
 *   An array of nodes (or an empty array if nothing is found)
 */
function _uc_upsell_get_related($nid) {
  $current_nids = db_select('uc_upsell_products', 'up')
    ->fields('up', array('related_products'))
    ->condition('nid', $nid)
    ->execute()
    ->fetchField();

  // Only return an actual value if there are related products in the database.
  if (is_array(unserialize($current_nids)) && count(unserialize($current_nids)) > 0) {
    return unserialize($current_nids);
  }
  elseif (count(unserialize($current_nids)) == 0) {
    // If we got an empty array back, delete it.
    db_query("DELETE FROM {uc_upsell_products} WHERE nid = :nid", array(':nid' => $nid));
    return array();
  }
  else {
    return array();
  }
}

/**
 * @param $removed
 *   The nid of the node whose db table we are updating
 * @param $nid
 *   The nid of the product to remove from the array
 * @return Nothing
 */
function _uc_upsell_remove_related($nid, $removed) {
  $currentnids = _uc_upsell_get_related($nid);

  if (!empty($currentnids)) {
    // Get the array minus the nid to be removed and update the db
    $updatenids = array_diff((array)$currentnids, (array)$removed);
    db_query("UPDATE {uc_upsell_products} SET related_products = :products WHERE nid = :nid", array(':products' => serialize($updatenids), ':nid' => $nid));
  }
}


/**
 * Administer the related products area (associations browser).
 */
function upsell_products_admin() {
  $config = uc_upsell_get_config();
  
  // Let the administrator know that Override settings for Taxonomy handling will make the Associations Browser meaningless.
  if ($config['global']['taxonomy'] && $config['global']['taxonomy'] == 'override') {
    drupal_set_message(t('Your current !settings_link will override the assocations listed below. Currently set to: <strong>%current_setting</strong>',
      array('!settings_link' => l('Upsell taxonomy handling settings', 'admin/store/settings/upsell'), '%current_setting' => $config['global']['taxonomy'])), 'status'
    );
  }
  
  $header = array(
    array('data' => t('Product')),
    array('data' => t('Related nodes')),
    'data' => t('Action'),
  );

  $query = db_select('uc_products', 'p')->extend('PagerDefault');
  $query->leftJoin('node', 'n', 'n.nid = p.nid');
  $query->leftJoin('uc_upsell_products', 'up', 'up.nid = p.nid');
  $result = $query->fields('n', array('nid', 'title'))->fields('up', array('related_products'))
    ->condition('n.status', 1)
    ->condition('n.type', uc_product_uc_product_types())
    ->orderBy('n.title')
    ->limit(10)
    ->execute();

  $query = array('destination' => $_GET['q']);
  if (isset($_GET['page'])) {
    $query['page'] = $_GET['page'];
  }
  while ($product = $result->fetchObject()) {
    $related_products = unserialize($product->related_products);
    $titles = '';

    if (!empty($related_products)) {
      foreach ($related_products as $related) {
        if (!empty($titles)) $titles .= ', ';
        $title = db_query("SELECT title FROM {node} WHERE nid = :nid", array(':nid' => $related))->fetchField();
        $titles .= l($title, 'node/'. $related .'/edit', array('query' => $query, 'fragment' => 'upsell'));
      }
    }

    $rows[] = array(
      array('data' => $product->title, 'class' => 'description-row'),
      array('data' => $titles, 'class' => 'description-row'),
      array('data' => l(t('Edit'), 'node/'. $product->nid .'/edit', array('attributes' => array('class' => 'download-row'), 'query' => $query))),
    );
  }

  if (empty($rows)) {
    $rows[] = array(array('data' => t('No associations'), 'colspan' => 4));
  }

  $output = '';
  // Show admin link if allowed...
  if (user_access('administer upsell settings')) {
    $output .= '<div class="help"><p>'. l(t('Edit upsell module settings'), 'admin/store/settings/upsell') .'</p></div>';
  }

  $output .= theme('table', array('header' => $header, 'rows' => $rows));
  $output .= theme('pager');

  return $output;
}


/**
 * Settings for the Upsell products.
 */
function upsell_products_settings() {
  return drupal_get_form('uc_upsell_settings_form');
}


/**
 * Settings form.
 */
function uc_upsell_settings_form() {
  
  // Check to see if we have a cached array of related-by-taxonomy nids.
  $allterms = cache_get('uc_upsell_terms');
  if (!$allterms->data) {
    drupal_set_message(t('You need to !runcron to build a list of products related by taxonomy.', array('!runcron' => l('run cron', 'admin/reports/status/run-cron'))), 'notice');
  }
  
  $config = uc_upsell_get_config();

  $form['upsell_global'] = array(
    '#type' => 'fieldset',
    '#title' => t('Global Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['upsell_global']['upsell_loose_msg_req'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use default message when at least one upsell item is associated.'),
    '#default_value' => $config['global']['loose_msg_req'],
    '#description' => t('Check this option and the default message will be used, if at least one found product is associated with the target node (for product pages) or cart items (on the checkout page). <i>The "Upsell Items" block always uses the alternate message, when displayed with non-product pages.</i>'),
    '#required' => FALSE,
  );
  $form['upsell_global']['upsell_shuffle'] = array(
    '#type' => 'checkbox',
    '#title' => t('Shuffle related and supplemental nodes.'),
    '#default_value' => $config['global']['shuffle'],
    '#description' => t('Check this option and related nodes will be shuffled with any supplemental nodes, if any. <i>Note: Related and supplemental node groups are always randomized.</i>'),
    '#required' => FALSE,
  );
  $form['upsell_global']['exclude_purchased'] = array(
    '#type' => 'checkbox',
    '#title' => t('Exclude purchased products from upsell list.'),
    '#default_value' => $config['global']['exclude_purchased'],
    '#description' => t('If user has already bought some product, he will not see it in upsell block.'),
    '#required' => FALSE,
  );
  $form['upsell_global']['buy_now'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use a "Buy Now" button instead of Add to Cart form'),
    '#default_value' => $config['global']['buy_now'],
    '#description' => t('Checking this option will show a Buy Now button in the Upsell block instead of the normal themed Add to Cart button, which will not display any attributes for related products.'),
    '#required' => FALSE,
  );
  $form['upsell_global']['reciprocal_behavior'] = array(
      '#type' => 'select',
      '#title' => t('Reciprocal associations behavior'),
      '#default_value' => isset($config['global']['reciprocal_behavior']) ? $config['global']['reciprocal_behavior'] : 'one',
      '#options' => uc_upsell_get_reciprocal_presets(),
      '#description' => t('Choose the reciprocal assocation action to perform when saving nodes:
        <br/><strong>Do not associate reciprocals:</strong>: <em>Will associate the selected products with the current node only.</em>
        <br/><strong>One to one</strong>: <em>Node A -> Node B, Node B -> Node A</em>
        <br/><strong>One to many</strong>: <em>Node A -> Node B, Node C; Node B -> Node C, Node A (default)</em>'),
      '#required' => FALSE,
  );

  $form['upsell_global']['types'] = array(
    '#type' => 'fieldset',
    '#title' => t('Node types'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['upsell_global']['types']['upsell_types'] = array(
    '#type' => 'checkboxes',
    '#multiple' => TRUE,
    '#title' => t('Product types to allow associations with'),
    '#default_value' => $config['global']['types'],
    '#options' => uc_upsell_get_product_names(uc_product_node_info()),
    '#description' => t('Choose which product types can be selected in the Node Edit form.'),
    '#required' => FALSE,
  );
  $form['upsell_global']['taxonomy'] = array(
    '#type' => 'fieldset',
    '#title' => t('Taxonomy handling'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['upsell_global']['taxonomy']['upsell_taxonomy'] = array(
    '#type' => 'select',
    '#title' => t('Handle related products based on taxonomy'),
    '#default_value' => $config['global']['taxonomy'] ? $config['global']['taxonomy'] : 'ignore',
    '#description' => t('How should we deal with Products that are related by taxonomy terms? Use this feature for smarter Upselling.
      <br />- <strong>Ignore: </strong> <em>Default</em>. Displays products specified in the Node Edit form, plus any configured randoms.
      <br />- <strong>Override: </strong> Displays products related by taxonomy first, ignoring products specified in Node Edit Form.
      <br />- <strong>Add: </strong> Displays products specified by Node Edit Form, plus nodes related by taxonomy, then randoms if needed.'),
    '#options' => array(
      'ignore' => t('Ignore them (do nothing)'),
      'override' => t('Override them'),
      'add' => t('Add them'),
    ),
  );
  
  $cache = cache_get('uc_upsell_terms');  
  if ($cache) {
    $term_list = array();
    $term_list[0] = 'Do not restrict by terms';
    $terms = unserialize($cache->data);
    foreach($terms AS $tid) {
      $term_list[$tid] = db_query("SELECT name FROM {term_data} WHERE tid = :tid", array(':tid' => $tid))->fetchField();
    }
   $form['upsell_global']['taxonomy']['restrict_terms'] = array(
      '#type' => 'select',
      '#title' => t('Restrict related-by-taxonomy products by specific terms'),
      '#default_value' => $config['global']['restrict_terms'] ? $config['global']['restrict_terms'] : 0,
      '#description' => t('If you wish to restrict related-by-taxonomy nodes to a specific terms, select them here.'),
      '#options' => $term_list,
      '#multiple' => TRUE,
    );
  }
  $form['submit'] = array('#type' => 'submit',
    '#value' => t('Save Settings'),
    '#weight' => 10,
  );
  $form['upsell_block_link'] = array(
    '#prefix' => '<div><p>',
    '#suffix' => '</p></div>',
    '#value' => t('You may also !configure.', array('!configure' => l('configure the "Upsell Items" block', 'admin/build/block/configure/uc_upsell/'))),
    '#weight' => 11
  );

  return $form;
}

/**
 * Submit the settings form.
 */
function uc_upsell_settings_form_submit($form, &$form_state) {
  $config = uc_upsell_get_config();
  $config['global']['loose_msg_req'] = $form_state['values']['upsell_loose_msg_req'];
  $config['global']['shuffle'] = $form_state['values']['upsell_shuffle'];
  $config['global']['exclude_purchased'] = $form_state['values']['exclude_purchased'];
  $config['global']['buy_now'] = $form_state['values']['buy_now'];
  $config['global']['reciprocal_behavior'] = $form_state['values']['reciprocal_behavior'];
  $config['global']['types'] = $form_state['values']['upsell_types'];
  $config['global']['restrict_terms'] = $form_state['values']['restrict_terms'];
  $config['global']['taxonomy'] = $form_state['values']['upsell_taxonomy'];
  uc_upsell_set_config($config);
  drupal_set_message(t('Upsell configuration was updated.'));
}

/**
 * Get variables.
 */
function uc_upsell_get_config() {
  $config = variable_get('uc_upsell_config', uc_upsell_get_config_defaults());
  return $config;
}

/**
 * Return the config defaults.
 */
function uc_upsell_get_config_defaults() {
  $uc_upsell_config_defaults = array(
    'global' => array(
      'loose_msg_req' => FALSE,
      'exclude_purchased' => FALSE,
      'shuffle' => TRUE,
      'reciprocal_behavior' => 'many',
      'buy_now' => FALSE,
      'types' => array('product' => 'Product'),
      'thumbnail_preset' => array('uc_thumbnail'),
      'taxonomy' => FALSE,
    ),
    'block' => array(
      'use_default' => FALSE,
      'max' => 5,
      'enable' => 0,
      'product' => array(
        'use_cart' => TRUE,
        'use_random' => TRUE,
        'msg_related' => 'Related products',
        'msg_mixed' => 'Also available',
      ),
      'node' => array(
        'req_cart' => FALSE,
        'source' => 1,
        'msg_related' => 'Compliment your order with...',
        'msg_mixed' => 'Must see products',
      ),
    ),
  );
  return $uc_upsell_config_defaults;
}

/**
 * Return an array of reciprocal behaviors for config.
 */
function uc_upsell_get_reciprocal_presets() {
  return array('none' => 'Do not associate reciprocals', 'one' => 'One to one', 'many' => 'One to many');
}

/**
 * Save uc_upsell config to drupal variable.
 */
function uc_upsell_set_config($config) {
  variable_set('uc_upsell_config', $config);
}

/**
 * Revert parts of upsell variable's root keys.
 */
function uc_upsell_reset_config($delkeys = array()) {

  if (!is_array($delkeys)) {
    $delkeys = array($delkeys);
  }

  $config = uc_upsell_get_config();
  $original = uc_upsell_get_config_defaults();

  // If no specific keys to delete...
  if (empty($delkeys)) {
    $config = $original;
  }
  else { // Otherwise, only replace targeted keys...
    foreach ($delkeys as $key) {
      if (array_key_exists($key, $original)) {
        $config[$key] = $original[$key];
      }
    }
  }
  uc_upsell_set_config($config);
  drupal_set_message(t('Upsell configuration was reset to defaults.'));
}

/**
 * Implementation of hook_product_class().
 *
 * When a new product class is created, remind the user they need to visit UC Upsell config again.
 */
function uc_upsell_product_class($pcid, $op) {
  switch ($op) {
    case 'insert':
      drupal_set_message(t('You need to !config if you wish to include the %class product class in Upsell blocks!',
        array('%class' => $pcid, '!config' => l('configure Upsell', 'admin/store/settings/upsell'))));  
      break;
  }
}

/**
 * Insert nids into the db.
 */
function uc_upsell_insert_nids($nid, $nids) {
  db_query("INSERT INTO {uc_upsell_products} (nid, related_products) VALUES (:nid, :products)", array(':nid' => $nid, ':products' => serialize($nids)));
}

/**
 * Update nids in the db.
 */
function uc_upsell_update_nids($nid, $nids) {
  db_query("UPDATE {uc_upsell_products} SET related_products = :products WHERE nid = :nid", array(':products' => serialize($nids), ':nid' => $nid));
}
