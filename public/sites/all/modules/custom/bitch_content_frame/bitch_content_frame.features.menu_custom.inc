<?php
/**
 * @file
 * bitch_content_frame.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bitch_content_frame_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-topics-menu.
  $menus['menu-topics-menu'] = array(
    'menu_name' => 'menu-topics-menu',
    'title' => 'Topics Menu',
    'description' => 'This is for the minor topics that show up under the main menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('This is for the minor topics that show up under the main menu');
  t('Topics Menu');


  return $menus;
}
