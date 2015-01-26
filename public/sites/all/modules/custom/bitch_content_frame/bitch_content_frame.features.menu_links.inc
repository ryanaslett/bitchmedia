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

  // Exported menu link: main-menu_activism:genres/activism
  $menu_links['main-menu_activism:genres/activism'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/activism',
    'router_path' => 'genres',
    'link_title' => 'Activism',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_activism:genres/activism',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_art--design:genres/art-&-design
  $menu_links['main-menu_art--design:genres/art-&-design'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/art-&-design',
    'router_path' => 'genres',
    'link_title' => 'Art & Design',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_art--design:genres/art-&-design',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_bitchmart:support-feminist-media
  $menu_links['main-menu_bitchmart:support-feminist-media'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'support-feminist-media',
    'router_path' => 'support-feminist-media',
    'link_title' => 'Bitchmart',
    'options' => array(
      'attributes' => array(
        'title' => 'Bitchmart view',
      ),
      'identifier' => 'main-menu_bitchmart:support-feminist-media',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_books:genres/books
  $menu_links['main-menu_books:genres/books'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/books',
    'router_path' => 'genres',
    'link_title' => 'Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_books:genres/books',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_culture:genres/culture
  $menu_links['main-menu_culture:genres/culture'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/culture',
    'router_path' => 'genres',
    'link_title' => 'Culture',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_culture:genres/culture',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_magazine:feminist-magazine-back-issues
  $menu_links['main-menu_magazine:feminist-magazine-back-issues'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'feminist-magazine-back-issues',
    'router_path' => 'feminist-magazine-back-issues',
    'link_title' => 'Magazine',
    'options' => array(
      'attributes' => array(
        'title' => 'Placeholder menu link to the back issue page',
      ),
      'identifier' => 'main-menu_magazine:feminist-magazine-back-issues',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_media:genres/media
  $menu_links['main-menu_media:genres/media'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/media',
    'router_path' => 'genres',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_media:genres/media',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_music:genres/music
  $menu_links['main-menu_music:genres/music'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/music',
    'router_path' => 'genres',
    'link_title' => 'Music',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_music:genres/music',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_podcast:feminist-podcasts
  $menu_links['main-menu_podcast:feminist-podcasts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'feminist-podcasts',
    'router_path' => 'feminist-podcasts',
    'link_title' => 'Podcast',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_podcast:feminist-podcasts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_politics:genres/politics
  $menu_links['main-menu_politics:genres/politics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/politics',
    'router_path' => 'genres',
    'link_title' => 'Politics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_politics:genres/politics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_screen:genres/screen
  $menu_links['main-menu_screen:genres/screen'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'genres/screen',
    'router_path' => 'genres',
    'link_title' => 'Screen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_screen:genres/screen',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_ads-and-sponsorship:node/1499
  $menu_links['menu-footer-menu_ads-and-sponsorship:node/1499'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1499',
    'router_path' => 'node/%',
    'link_title' => 'Ads and Sponsorship',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_ads-and-sponsorship:node/1499',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_back-issues:feminist-magazine-back-issues
  $menu_links['menu-footer-menu_back-issues:feminist-magazine-back-issues'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'feminist-magazine-back-issues',
    'router_path' => 'feminist-magazine-back-issues',
    'link_title' => 'Back Issues',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_back-issues:feminist-magazine-back-issues',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contact:node/8178
  $menu_links['menu-footer-menu_contact:node/8178'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/8178',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact Us',
      ),
      'identifier' => 'menu-footer-menu_contact:node/8178',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contributor-guidelines:node/1517
  $menu_links['menu-footer-menu_contributor-guidelines:node/1517'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1517',
    'router_path' => 'node/%',
    'link_title' => 'Contributor Guidelines',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_contributor-guidelines:node/1517',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_donate:node/1434
  $menu_links['menu-footer-menu_donate:node/1434'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1434',
    'router_path' => 'node/%',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_donate:node/1434',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_events:node/1514
  $menu_links['menu-footer-menu_events:node/1514'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1514',
    'router_path' => 'node/%',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_events:node/1514',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_faq:node/1509
  $menu_links['menu-footer-menu_faq:node/1509'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1509',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_faq:node/1509',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_internships:node/1516
  $menu_links['menu-footer-menu_internships:node/1516'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1516',
    'router_path' => 'node/%',
    'link_title' => 'Internships',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_internships:node/1516',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_shop:support-feminist-media
  $menu_links['menu-footer-menu_shop:support-feminist-media'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'support-feminist-media',
    'router_path' => 'support-feminist-media',
    'link_title' => 'Shop',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_shop:support-feminist-media',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_subscribe:support-feminist-media/subscribe-feminist-magazine
  $menu_links['menu-footer-menu_subscribe:support-feminist-media/subscribe-feminist-magazine'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'support-feminist-media/subscribe-feminist-magazine',
    'router_path' => 'support-feminist-media',
    'link_title' => 'Subscribe',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_subscribe:support-feminist-media/subscribe-feminist-magazine',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-pitch-menu_donate:node/1434
  $menu_links['menu-pitch-menu_donate:node/1434'] = array(
    'menu_name' => 'menu-pitch-menu',
    'link_path' => 'node/1434',
    'router_path' => 'node/%',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => 'Donate to Bitch',
      ),
      'identifier' => 'menu-pitch-menu_donate:node/1434',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-pitch-menu_give-a-gift:node/1241
  $menu_links['menu-pitch-menu_give-a-gift:node/1241'] = array(
    'menu_name' => 'menu-pitch-menu',
    'link_path' => 'node/1241',
    'router_path' => 'node/%',
    'link_title' => 'Give a gift',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-pitch-menu_give-a-gift:node/1241',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-pitch-menu_subscribe:node/1453
  $menu_links['menu-pitch-menu_subscribe:node/1453'] = array(
    'menu_name' => 'menu-pitch-menu',
    'link_path' => 'node/1453',
    'router_path' => 'node/%',
    'link_title' => 'Subscribe',
    'options' => array(
      'attributes' => array(
        'title' => 'Subscribe to Bitch Magazine',
      ),
      'identifier' => 'menu-pitch-menu_subscribe:node/1453',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-topics-menu_orange-is-the-new-black:taxonomy/term/822
  $menu_links['menu-topics-menu_orange-is-the-new-black:taxonomy/term/822'] = array(
    'menu_name' => 'menu-topics-menu',
    'link_path' => 'taxonomy/term/822',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Orange is the New Black',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-topics-menu_orange-is-the-new-black:taxonomy/term/822',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-topics-menu_riot-grrl:taxonomy/term/87
  $menu_links['menu-topics-menu_riot-grrl:taxonomy/term/87'] = array(
    'menu_name' => 'menu-topics-menu',
    'link_path' => 'taxonomy/term/87',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Riot Grrl',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-topics-menu_riot-grrl:taxonomy/term/87',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-topics-menu_vampires:taxonomy/term/54
  $menu_links['menu-topics-menu_vampires:taxonomy/term/54'] = array(
    'menu_name' => 'menu-topics-menu',
    'link_path' => 'taxonomy/term/54',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Vampires',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-topics-menu_vampires:taxonomy/term/54',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
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
