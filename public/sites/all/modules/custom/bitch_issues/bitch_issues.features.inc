<?php
/**
 * @file
 * bitch_issues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bitch_issues_ctools_plugin_api($module = NULL, $api = NULL) {
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
function bitch_issues_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_uc_product_default_classes().
 */
function bitch_issues_uc_product_default_classes() {
  $items = array(
    'digital_download' => array(
      'name' => t('Digital Download'),
      'base' => 'uc_product',
      'description' => t('Digital files and digital issues.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'issue' => array(
      'name' => t('Issue'),
      'base' => 'uc_product',
      'description' => t('A magazine Issue'),
      'has_title' => '1',
      'title_label' => t('Issue Name'),
      'help' => '',
    ),
  );
  return $items;
}
