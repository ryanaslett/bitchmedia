<?php
/**
 * @file
 * bitch_issues.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bitch_issues_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_digital_download';
  $strongarm->value = '';
  $export['uc_image_digital_download'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_issue';
  $strongarm->value = 'field_issue_cover';
  $export['uc_image_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_shippable_digital_download';
  $strongarm->value = 1;
  $export['uc_product_shippable_digital_download'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_shippable_issue';
  $strongarm->value = 1;
  $export['uc_product_shippable_issue'] = $strongarm;

  return $export;
}
