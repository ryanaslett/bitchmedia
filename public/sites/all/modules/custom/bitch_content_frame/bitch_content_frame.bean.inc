<?php
/**
 * @file
 * bitch_content_frame.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function bitch_content_frame_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'rich_text_block';
  $bean_type->label = 'Rich Text Block';
  $bean_type->options = '';
  $bean_type->description = 'This is a block that is basically an editable text are that you can assign wherever you want.';
  $export['rich_text_block'] = $bean_type;

  return $export;
}
