<?php
/**
 * @file
 * bitch_content_frame.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bitch_content_frame_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "menu_block" && $api == "menu_block") {
    return array("version" => "1");
  }
}
