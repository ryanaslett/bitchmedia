<?php
/**
 * @file
 * bitch_social_media.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function bitch_social_media_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'site_social_media_block';
  $bean_type->label = 'Site Social Media Block';
  $bean_type->options = '';
  $bean_type->description = 'This is a social media block - there should probably only be one.
';
  $export['site_social_media_block'] = $bean_type;

  return $export;
}
