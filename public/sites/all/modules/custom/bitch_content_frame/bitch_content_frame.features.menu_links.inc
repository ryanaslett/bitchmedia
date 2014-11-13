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

  // Exported menu link: main-menu:feminist-magazine-back-issues
  $menu_links['main-menu:feminist-magazine-back-issues'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'feminist-magazine-back-issues',
    'router_path' => 'feminist-magazine-back-issues',
    'link_title' => 'Magazine',
    'options' => array(
      'attributes' => array(
        'title' => 'Placeholder menu link to the back issue page',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: main-menu:feminist-podcasts
  $menu_links['main-menu:feminist-podcasts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'feminist-podcasts',
    'router_path' => 'feminist-podcasts',
    'link_title' => 'Podcast',
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
    'weight' => -41,
  );
  // Exported menu link: main-menu:genres/activism
  $menu_links['main-menu:genres/activism'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/activism',
    'router_path' => 'genres',
    'link_title' => 'Activism',
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
    'weight' => -49,
  );
  // Exported menu link: main-menu:genres/art-&-design
  $menu_links['main-menu:genres/art-&-design'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/art-&-design',
    'router_path' => 'genres',
    'link_title' => 'Art & Design',
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
    'weight' => -48,
  );
  // Exported menu link: main-menu:genres/books
  $menu_links['main-menu:genres/books'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/books',
    'router_path' => 'genres',
    'link_title' => 'Books',
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
    'weight' => -47,
  );
  // Exported menu link: main-menu:genres/culture
  $menu_links['main-menu:genres/culture'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/culture',
    'router_path' => 'genres',
    'link_title' => 'Culture',
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
    'weight' => -46,
  );
  // Exported menu link: main-menu:genres/media
  $menu_links['main-menu:genres/media'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/media',
    'router_path' => 'genres',
    'link_title' => 'Media',
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
    'weight' => -45,
  );
  // Exported menu link: main-menu:genres/music
  $menu_links['main-menu:genres/music'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/music',
    'router_path' => 'genres',
    'link_title' => 'Music',
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
    'weight' => -44,
  );
  // Exported menu link: main-menu:genres/politics
  $menu_links['main-menu:genres/politics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/politics',
    'router_path' => 'genres',
    'link_title' => 'Politics',
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
    'weight' => -43,
  );
  // Exported menu link: main-menu:genres/screen
  $menu_links['main-menu:genres/screen'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/screen',
    'router_path' => 'genres',
    'link_title' => 'Screen',
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
    'weight' => -42,
  );
  // Exported menu link: main-menu:support-feminist-media
  $menu_links['main-menu:support-feminist-media'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'support-feminist-media',
    'router_path' => 'support-feminist-media',
    'link_title' => 'Bitchmart',
    'options' => array(
      'attributes' => array(
        'title' => 'Bitchmart view',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
  );
  // Exported menu link: menu-footer-menu:feminist-magazine-back-issues
  $menu_links['menu-footer-menu:feminist-magazine-back-issues'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'feminist-magazine-back-issues',
    'router_path' => 'feminist-magazine-back-issues',
    'link_title' => 'Back Issues',
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
    'weight' => -45,
  );
  // Exported menu link: menu-footer-menu:node/1434
  $menu_links['menu-footer-menu:node/1434'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1434',
    'router_path' => 'node/%',
    'link_title' => 'Donate',
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
    'weight' => -43,
  );
  // Exported menu link: menu-footer-menu:node/1499
  $menu_links['menu-footer-menu:node/1499'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1499',
    'router_path' => 'node/%',
    'link_title' => 'Ads and Sponsorship',
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
    'weight' => -47,
  );
  // Exported menu link: menu-footer-menu:node/1509
  $menu_links['menu-footer-menu:node/1509'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1509',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
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
    'weight' => -49,
  );
  // Exported menu link: menu-footer-menu:node/1514
  $menu_links['menu-footer-menu:node/1514'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1514',
    'router_path' => 'node/%',
    'link_title' => 'Events',
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
    'weight' => -41,
  );
  // Exported menu link: menu-footer-menu:node/1516
  $menu_links['menu-footer-menu:node/1516'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1516',
    'router_path' => 'node/%',
    'link_title' => 'Internships',
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
    'weight' => -42,
  );
  // Exported menu link: menu-footer-menu:node/1517
  $menu_links['menu-footer-menu:node/1517'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1517',
    'router_path' => 'node/%',
    'link_title' => 'Contributor Guidelines',
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
    'weight' => -48,
  );
  // Exported menu link: menu-footer-menu:node/8178
  $menu_links['menu-footer-menu:node/8178'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/8178',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact Us',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-footer-menu:support-feminist-media
  $menu_links['menu-footer-menu:support-feminist-media'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'support-feminist-media',
    'router_path' => 'support-feminist-media',
    'link_title' => 'Shop',
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
    'weight' => -44,
  );
  // Exported menu link: menu-footer-menu:support-feminist-media/subscribe-feminist-magazine
  $menu_links['menu-footer-menu:support-feminist-media/subscribe-feminist-magazine'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'support-feminist-media/subscribe-feminist-magazine',
    'router_path' => 'support-feminist-media',
    'link_title' => 'Subscribe',
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
    'weight' => -46,
  );
  // Exported menu link: menu-pitch-menu:node/1241
  $menu_links['menu-pitch-menu:node/1241'] = array(
    'menu_name' => 'menu-pitch-menu',
    'link_path' => 'node/1241',
    'router_path' => 'node/%',
    'link_title' => 'Give a gift',
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
  // Exported menu link: menu-pitch-menu:node/1434
  $menu_links['menu-pitch-menu:node/1434'] = array(
    'menu_name' => 'menu-pitch-menu',
    'link_path' => 'node/1434',
    'router_path' => 'node/%',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => 'Donate to Bitch',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-pitch-menu:node/1453
  $menu_links['menu-pitch-menu:node/1453'] = array(
    'menu_name' => 'menu-pitch-menu',
    'link_path' => 'node/1453',
    'router_path' => 'node/%',
    'link_title' => 'Subscribe',
    'options' => array(
      'attributes' => array(
        'title' => 'Subscribe to Bitch Magazine',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
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
  // Exported menu link: user-menu:user
  $menu_links['user-menu:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Activism');
  t('Ads and Sponsorship');
  t('Art & Design');
  t('Back Issues');
  t('Bitchmart');
  t('Books');
  t('Contact');
  t('Contributor Guidelines');
  t('Culture');
  t('Donate');
  t('Events');
  t('FAQ');
  t('Give a gift');
  t('Internships');
  t('Log out');
  t('Magazine');
  t('Media');
  t('Music');
  t('Orange is the New Black');
  t('Podcast');
  t('Politics');
  t('Riot Grrl');
  t('Screen');
  t('Shop');
  t('Subscribe');
  t('User account');
  t('Vampires');


  return $menu_links;
}
