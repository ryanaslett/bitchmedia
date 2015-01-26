<?php
/**
 * @file
 * bitch_social_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bitch_social_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
