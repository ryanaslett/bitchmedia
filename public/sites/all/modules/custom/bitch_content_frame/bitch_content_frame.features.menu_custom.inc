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

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => 'The menu that has additional links at the bottom of the page.',
  );
  // Exported menu: menu-pitch-menu.
  $menus['menu-pitch-menu'] = array(
    'menu_name' => 'menu-pitch-menu',
    'title' => 'Support Menu',
    'description' => 'This is the menu button where we ask people to upgrade',
  );
  // Exported menu: menu-topics-menu.
  $menus['menu-topics-menu'] = array(
    'menu_name' => 'menu-topics-menu',
    'title' => 'Topics Menu',
    'description' => 'This is for the minor topics that show up under the main menu',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu');
  t('Main menu');
  t('Support Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('The menu that has additional links at the bottom of the page.');
  t('This is for the minor topics that show up under the main menu');
  t('This is the menu button where we ask people to upgrade');
  t('Topics Menu');
  t('User menu');


  return $menus;
}
