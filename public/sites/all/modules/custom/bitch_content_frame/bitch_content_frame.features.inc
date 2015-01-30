<?php
/**
 * @file
 * bitch_content_frame.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bitch_content_frame_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "menu_block" && $api == "menu_block") {
    return array("version" => "1");
  }
}
