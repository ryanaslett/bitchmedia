<?php
/**
 * @file
 * bitch_bitchmart.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bitch_bitchmart_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bitch_bitchmart_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_uc_product_default_classes().
 */
function bitch_bitchmart_uc_product_default_classes() {
  $items = array(
    'donation' => array(
      'name' => t('Donation'),
      'base' => 'uc_product',
      'description' => t('A one time monetary donation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'membership' => array(
      'name' => t('Membership'),
      'base' => 'uc_product',
      'description' => t('A monthly recurring sustainer product'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'merchandise' => array(
      'name' => t('Merchandise'),
      'base' => 'uc_product',
      'description' => t('This represents Merchandise
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product' => array(
      'name' => t('Product'),
      'base' => 'uc_product',
      'description' => t('Use <em>products</em> to represent items for sale on the website, including all the unique information that can be attributed to a specific model number.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'subscription' => array(
      'name' => t('Subscription'),
      'base' => 'uc_product',
      'description' => t('A magazine subscription product'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
