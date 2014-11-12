<?php
/**
 * @file
 * bitch_content_frame.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bitch_content_frame_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-topics-menu:taxonomy/term/54
  $menu_links['menu-topics-menu:taxonomy/term/54'] = array(
    'menu_name' => 'menu-topics-menu',
    'link_path' => 'taxonomy/term/54',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Vampires',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-topics-menu:taxonomy/term/822
  $menu_links['menu-topics-menu:taxonomy/term/822'] = array(
    'menu_name' => 'menu-topics-menu',
    'link_path' => 'taxonomy/term/822',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Orange is the New Black',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-topics-menu:taxonomy/term/87
  $menu_links['menu-topics-menu:taxonomy/term/87'] = array(
    'menu_name' => 'menu-topics-menu',
    'link_path' => 'taxonomy/term/87',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Riot Grrl',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Orange is the New Black');
  t('Riot Grrl');
  t('Vampires');


  return $menu_links;
}
