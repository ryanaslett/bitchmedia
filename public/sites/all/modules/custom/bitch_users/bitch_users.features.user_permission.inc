<?php
/**
 * @file
 * bitch_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bitch_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access apc statistics'.
  $permissions['access apc statistics'] = array(
    'name' => 'access apc statistics',
    'roles' => array(),
    'module' => 'apc',
  );

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer Email Shield'.
  $permissions['administer Email Shield'] = array(
    'name' => 'administer Email Shield',
    'roles' => array(),
    'module' => 'email_shield',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer attributes'.
  $permissions['administer attributes'] = array(
    'name' => 'administer attributes',
    'roles' => array(),
    'module' => 'uc_attribute',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer cart links'.
  $permissions['administer cart links'] = array(
    'name' => 'administer cart links',
    'roles' => array(),
    'module' => 'uc_cart_links',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer code conversions'.
  $permissions['administer code conversions'] = array(
    'name' => 'administer code conversions',
    'roles' => array(),
    'module' => 'coder_upgrade',
  );

  // Exported permission: 'administer comment notify'.
  $permissions['administer comment notify'] = array(
    'name' => 'administer comment notify',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'comment_notify',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer credit cards'.
  $permissions['administer credit cards'] = array(
    'name' => 'administer credit cards',
    'roles' => array(),
    'module' => 'uc_credit',
  );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(),
    'module' => 'entity_view_mode',
  );

  // Exported permission: 'administer entityqueue'.
  $permissions['administer entityqueue'] = array(
    'name' => 'administer entityqueue',
    'roles' => array(),
    'module' => 'entityqueue',
  );

  // Exported permission: 'administer exclude node title'.
  $permissions['administer exclude node title'] = array(
    'name' => 'administer exclude node title',
    'roles' => array(),
    'module' => 'exclude_node_title',
  );

  // Exported permission: 'administer fancybox'.
  $permissions['administer fancybox'] = array(
    'name' => 'administer fancybox',
    'roles' => array(),
    'module' => 'fancybox',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer icons'.
  $permissions['administer icons'] = array(
    'name' => 'administer icons',
    'roles' => array(),
    'module' => 'icon',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: 'administer manualcrop settings'.
  $permissions['administer manualcrop settings'] = array(
    'name' => 'administer manualcrop settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'administer masquerade'.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(),
    'module' => 'masquerade',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer multifield'.
  $permissions['administer multifield'] = array(
    'name' => 'administer multifield',
    'roles' => array(),
    'module' => 'multifield',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer order workflow'.
  $permissions['administer order workflow'] = array(
    'name' => 'administer order workflow',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'administer own product features'.
  $permissions['administer own product features'] = array(
    'name' => 'administer own product features',
    'roles' => array(),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer product attributes'.
  $permissions['administer product attributes'] = array(
    'name' => 'administer product attributes',
    'roles' => array(),
    'module' => 'uc_attribute',
  );

  // Exported permission: 'administer product classes'.
  $permissions['administer product classes'] = array(
    'name' => 'administer product classes',
    'roles' => array(),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer product features'.
  $permissions['administer product features'] = array(
    'name' => 'administer product features',
    'roles' => array(),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer product options'.
  $permissions['administer product options'] = array(
    'name' => 'administer product options',
    'roles' => array(),
    'module' => 'uc_attribute',
  );

  // Exported permission: 'administer product stock'.
  $permissions['administer product stock'] = array(
    'name' => 'administer product stock',
    'roles' => array(),
    'module' => 'uc_stock',
  );

  // Exported permission: 'administer products'.
  $permissions['administer products'] = array(
    'name' => 'administer products',
    'roles' => array(),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer pullquote settings'.
  $permissions['administer pullquote settings'] = array(
    'name' => 'administer pullquote settings',
    'roles' => array(),
    'module' => 'pullquote',
  );

  // Exported permission: 'administer recurring fees'.
  $permissions['administer recurring fees'] = array(
    'name' => 'administer recurring fees',
    'roles' => array(),
    'module' => 'uc_recurring',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(),
    'module' => 'search_api',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer store'.
  $permissions['administer store'] = array(
    'name' => 'administer store',
    'roles' => array(),
    'module' => 'uc_store',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer uc_ssl'.
  $permissions['administer uc_ssl'] = array(
    'name' => 'administer uc_ssl',
    'roles' => array(),
    'module' => 'uc_ssl',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
    'name' => 'advanced migration information',
    'roles' => array(),
    'module' => 'migrate',
  );

  // Exported permission: 'allow CKFinder file uploads'.
  $permissions['allow CKFinder file uploads'] = array(
    'name' => 'allow CKFinder file uploads',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change pullquote styles'.
  $permissions['change pullquote styles'] = array(
    'name' => 'change pullquote styles',
    'roles' => array(),
    'module' => 'pullquote',
  );

  // Exported permission: 'configure quotes'.
  $permissions['configure quotes'] = array(
    'name' => 'configure quotes',
    'roles' => array(),
    'module' => 'uc_quote',
  );

  // Exported permission: 'create any clickable_image bean'.
  $permissions['create any clickable_image bean'] = array(
    'name' => 'create any clickable_image bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create any rich_text_block bean'.
  $permissions['create any rich_text_block bean'] = array(
    'name' => 'create any rich_text_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create any site_social_media_block bean'.
  $permissions['create any site_social_media_block bean'] = array(
    'name' => 'create any site_social_media_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create digital_download content'.
  $permissions['create digital_download content'] = array(
    'name' => 'create digital_download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create donation content'.
  $permissions['create donation content'] = array(
    'name' => 'create donation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create field_analytics_action'.
  $permissions['create field_analytics_action'] = array(
    'name' => 'create field_analytics_action',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_analytics_event'.
  $permissions['create field_analytics_event'] = array(
    'name' => 'create field_analytics_event',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_analytics_label'.
  $permissions['create field_analytics_label'] = array(
    'name' => 'create field_analytics_label',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_facebook'.
  $permissions['create field_facebook'] = array(
    'name' => 'create field_facebook',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_google_plus'.
  $permissions['create field_google_plus'] = array(
    'name' => 'create field_google_plus',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_instagram'.
  $permissions['create field_instagram'] = array(
    'name' => 'create field_instagram',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pinterest'.
  $permissions['create field_pinterest'] = array(
    'name' => 'create field_pinterest',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_profile_photo'.
  $permissions['create field_profile_photo'] = array(
    'name' => 'create field_profile_photo',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_real_name'.
  $permissions['create field_real_name'] = array(
    'name' => 'create field_real_name',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_short_bio'.
  $permissions['create field_short_bio'] = array(
    'name' => 'create field_short_bio',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_signature'.
  $permissions['create field_signature'] = array(
    'name' => 'create field_signature',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_social_media_reference'.
  $permissions['create field_social_media_reference'] = array(
    'name' => 'create field_social_media_reference',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_tumblr'.
  $permissions['create field_tumblr'] = array(
    'name' => 'create field_tumblr',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_twitter'.
  $permissions['create field_twitter'] = array(
    'name' => 'create field_twitter',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_twitter_username'.
  $permissions['create field_twitter_username'] = array(
    'name' => 'create field_twitter_username',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_website'.
  $permissions['create field_website'] = array(
    'name' => 'create field_website',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create genre_queue entityqueue'.
  $permissions['create genre_queue entityqueue'] = array(
    'name' => 'create genre_queue entityqueue',
    'roles' => array(),
    'module' => 'entityqueue',
  );

  // Exported permission: 'create issue content'.
  $permissions['create issue content'] = array(
    'name' => 'create issue content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create membership content'.
  $permissions['create membership content'] = array(
    'name' => 'create membership content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create merchandise content'.
  $permissions['create merchandise content'] = array(
    'name' => 'create merchandise content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create orders'.
  $permissions['create orders'] = array(
    'name' => 'create orders',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'create podcast content'.
  $permissions['create podcast content'] = array(
    'name' => 'create podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create product content'.
  $permissions['create product content'] = array(
    'name' => 'create product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create site_page content'.
  $permissions['create site_page content'] = array(
    'name' => 'create site_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create subscription content'.
  $permissions['create subscription content'] = array(
    'name' => 'create subscription content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any clickable_image bean'.
  $permissions['delete any clickable_image bean'] = array(
    'name' => 'delete any clickable_image bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any digital_download content'.
  $permissions['delete any digital_download content'] = array(
    'name' => 'delete any digital_download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any donation content'.
  $permissions['delete any donation content'] = array(
    'name' => 'delete any donation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any issue content'.
  $permissions['delete any issue content'] = array(
    'name' => 'delete any issue content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any membership content'.
  $permissions['delete any membership content'] = array(
    'name' => 'delete any membership content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any merchandise content'.
  $permissions['delete any merchandise content'] = array(
    'name' => 'delete any merchandise content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any podcast content'.
  $permissions['delete any podcast content'] = array(
    'name' => 'delete any podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any product content'.
  $permissions['delete any product content'] = array(
    'name' => 'delete any product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any rich_text_block bean'.
  $permissions['delete any rich_text_block bean'] = array(
    'name' => 'delete any rich_text_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any site_page content'.
  $permissions['delete any site_page content'] = array(
    'name' => 'delete any site_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any site_social_media_block bean'.
  $permissions['delete any site_social_media_block bean'] = array(
    'name' => 'delete any site_social_media_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any subscription content'.
  $permissions['delete any subscription content'] = array(
    'name' => 'delete any subscription content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete genre_queue entityqueue'.
  $permissions['delete genre_queue entityqueue'] = array(
    'name' => 'delete genre_queue entityqueue',
    'roles' => array(),
    'module' => 'entityqueue',
  );

  // Exported permission: 'delete orders'.
  $permissions['delete orders'] = array(
    'name' => 'delete orders',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own digital_download content'.
  $permissions['delete own digital_download content'] = array(
    'name' => 'delete own digital_download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own donation content'.
  $permissions['delete own donation content'] = array(
    'name' => 'delete own donation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own issue content'.
  $permissions['delete own issue content'] = array(
    'name' => 'delete own issue content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own membership content'.
  $permissions['delete own membership content'] = array(
    'name' => 'delete own membership content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own merchandise content'.
  $permissions['delete own merchandise content'] = array(
    'name' => 'delete own merchandise content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own podcast content'.
  $permissions['delete own podcast content'] = array(
    'name' => 'delete own podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own product content'.
  $permissions['delete own product content'] = array(
    'name' => 'delete own product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own site_page content'.
  $permissions['delete own site_page content'] = array(
    'name' => 'delete own site_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own subscription content'.
  $permissions['delete own subscription content'] = array(
    'name' => 'delete own subscription content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(),
    'module' => 'uc_payment',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in article_type'.
  $permissions['delete terms in article_type'] = array(
    'name' => 'delete terms in article_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in column_name'.
  $permissions['delete terms in column_name'] = array(
    'name' => 'delete terms in column_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in content_genre'.
  $permissions['delete terms in content_genre'] = array(
    'name' => 'delete terms in content_genre',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in general_topic'.
  $permissions['delete terms in general_topic'] = array(
    'name' => 'delete terms in general_topic',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in podcast_series'.
  $permissions['delete terms in podcast_series'] = array(
    'name' => 'delete terms in podcast_series',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in social_media_websites'.
  $permissions['delete terms in social_media_websites'] = array(
    'name' => 'delete terms in social_media_websites',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in specific_topic'.
  $permissions['delete terms in specific_topic'] = array(
    'name' => 'delete terms in specific_topic',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in store_category'.
  $permissions['delete terms in store_category'] = array(
    'name' => 'delete terms in store_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download file'.
  $permissions['download file'] = array(
    'name' => 'download file',
    'roles' => array(),
    'module' => 'uc_file',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any clickable_image bean'.
  $permissions['edit any clickable_image bean'] = array(
    'name' => 'edit any clickable_image bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any digital_download content'.
  $permissions['edit any digital_download content'] = array(
    'name' => 'edit any digital_download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any donation content'.
  $permissions['edit any donation content'] = array(
    'name' => 'edit any donation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any issue content'.
  $permissions['edit any issue content'] = array(
    'name' => 'edit any issue content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any membership content'.
  $permissions['edit any membership content'] = array(
    'name' => 'edit any membership content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any merchandise content'.
  $permissions['edit any merchandise content'] = array(
    'name' => 'edit any merchandise content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any podcast content'.
  $permissions['edit any podcast content'] = array(
    'name' => 'edit any podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any product content'.
  $permissions['edit any product content'] = array(
    'name' => 'edit any product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any rich_text_block bean'.
  $permissions['edit any rich_text_block bean'] = array(
    'name' => 'edit any rich_text_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any site_page content'.
  $permissions['edit any site_page content'] = array(
    'name' => 'edit any site_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any site_social_media_block bean'.
  $permissions['edit any site_social_media_block bean'] = array(
    'name' => 'edit any site_social_media_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any subscription content'.
  $permissions['edit any subscription content'] = array(
    'name' => 'edit any subscription content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit field_analytics_action'.
  $permissions['edit field_analytics_action'] = array(
    'name' => 'edit field_analytics_action',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_analytics_event'.
  $permissions['edit field_analytics_event'] = array(
    'name' => 'edit field_analytics_event',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_analytics_label'.
  $permissions['edit field_analytics_label'] = array(
    'name' => 'edit field_analytics_label',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_facebook'.
  $permissions['edit field_facebook'] = array(
    'name' => 'edit field_facebook',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_google_plus'.
  $permissions['edit field_google_plus'] = array(
    'name' => 'edit field_google_plus',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_instagram'.
  $permissions['edit field_instagram'] = array(
    'name' => 'edit field_instagram',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pinterest'.
  $permissions['edit field_pinterest'] = array(
    'name' => 'edit field_pinterest',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_profile_photo'.
  $permissions['edit field_profile_photo'] = array(
    'name' => 'edit field_profile_photo',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Donor' => 'Donor',
      'Subscriber' => 'Subscriber',
      'Sustainer' => 'Sustainer',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_real_name'.
  $permissions['edit field_real_name'] = array(
    'name' => 'edit field_real_name',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_short_bio'.
  $permissions['edit field_short_bio'] = array(
    'name' => 'edit field_short_bio',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
      'Sustainer' => 'Sustainer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_signature'.
  $permissions['edit field_signature'] = array(
    'name' => 'edit field_signature',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_social_media_reference'.
  $permissions['edit field_social_media_reference'] = array(
    'name' => 'edit field_social_media_reference',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tumblr'.
  $permissions['edit field_tumblr'] = array(
    'name' => 'edit field_tumblr',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_twitter'.
  $permissions['edit field_twitter'] = array(
    'name' => 'edit field_twitter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_twitter_username'.
  $permissions['edit field_twitter_username'] = array(
    'name' => 'edit field_twitter_username',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_website'.
  $permissions['edit field_website'] = array(
    'name' => 'edit field_website',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit orders'.
  $permissions['edit orders'] = array(
    'name' => 'edit orders',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own digital_download content'.
  $permissions['edit own digital_download content'] = array(
    'name' => 'edit own digital_download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own donation content'.
  $permissions['edit own donation content'] = array(
    'name' => 'edit own donation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_analytics_action'.
  $permissions['edit own field_analytics_action'] = array(
    'name' => 'edit own field_analytics_action',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_analytics_event'.
  $permissions['edit own field_analytics_event'] = array(
    'name' => 'edit own field_analytics_event',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_analytics_label'.
  $permissions['edit own field_analytics_label'] = array(
    'name' => 'edit own field_analytics_label',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_facebook'.
  $permissions['edit own field_facebook'] = array(
    'name' => 'edit own field_facebook',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_google_plus'.
  $permissions['edit own field_google_plus'] = array(
    'name' => 'edit own field_google_plus',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_instagram'.
  $permissions['edit own field_instagram'] = array(
    'name' => 'edit own field_instagram',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pinterest'.
  $permissions['edit own field_pinterest'] = array(
    'name' => 'edit own field_pinterest',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_profile_photo'.
  $permissions['edit own field_profile_photo'] = array(
    'name' => 'edit own field_profile_photo',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Donor' => 'Donor',
      'Subscriber' => 'Subscriber',
      'Sustainer' => 'Sustainer',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_real_name'.
  $permissions['edit own field_real_name'] = array(
    'name' => 'edit own field_real_name',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_short_bio'.
  $permissions['edit own field_short_bio'] = array(
    'name' => 'edit own field_short_bio',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
      'Sustainer' => 'Sustainer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_signature'.
  $permissions['edit own field_signature'] = array(
    'name' => 'edit own field_signature',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Donor' => 'Donor',
      'Editor' => 'Editor',
      'Subscriber' => 'Subscriber',
      'Sustainer' => 'Sustainer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_social_media_reference'.
  $permissions['edit own field_social_media_reference'] = array(
    'name' => 'edit own field_social_media_reference',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tumblr'.
  $permissions['edit own field_tumblr'] = array(
    'name' => 'edit own field_tumblr',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_twitter'.
  $permissions['edit own field_twitter'] = array(
    'name' => 'edit own field_twitter',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_twitter_username'.
  $permissions['edit own field_twitter_username'] = array(
    'name' => 'edit own field_twitter_username',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
      'Sustainer' => 'Sustainer',
      'privileged user' => 'privileged user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_website'.
  $permissions['edit own field_website'] = array(
    'name' => 'edit own field_website',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own issue content'.
  $permissions['edit own issue content'] = array(
    'name' => 'edit own issue content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own membership content'.
  $permissions['edit own membership content'] = array(
    'name' => 'edit own membership content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own merchandise content'.
  $permissions['edit own merchandise content'] = array(
    'name' => 'edit own merchandise content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own podcast content'.
  $permissions['edit own podcast content'] = array(
    'name' => 'edit own podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own product content'.
  $permissions['edit own product content'] = array(
    'name' => 'edit own product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own site_page content'.
  $permissions['edit own site_page content'] = array(
    'name' => 'edit own site_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own subscription content'.
  $permissions['edit own subscription content'] = array(
    'name' => 'edit own subscription content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in article_type'.
  $permissions['edit terms in article_type'] = array(
    'name' => 'edit terms in article_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in column_name'.
  $permissions['edit terms in column_name'] = array(
    'name' => 'edit terms in column_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in content_genre'.
  $permissions['edit terms in content_genre'] = array(
    'name' => 'edit terms in content_genre',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in general_topic'.
  $permissions['edit terms in general_topic'] = array(
    'name' => 'edit terms in general_topic',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in podcast_series'.
  $permissions['edit terms in podcast_series'] = array(
    'name' => 'edit terms in podcast_series',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in social_media_websites'.
  $permissions['edit terms in social_media_websites'] = array(
    'name' => 'edit terms in social_media_websites',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in specific_topic'.
  $permissions['edit terms in specific_topic'] = array(
    'name' => 'edit terms in specific_topic',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in store_category'.
  $permissions['edit terms in store_category'] = array(
    'name' => 'edit terms in store_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'exclude any node title'.
  $permissions['exclude any node title'] = array(
    'name' => 'exclude any node title',
    'roles' => array(),
    'module' => 'exclude_node_title',
  );

  // Exported permission: 'exclude own node title'.
  $permissions['exclude own node title'] = array(
    'name' => 'exclude own node title',
    'roles' => array(),
    'module' => 'exclude_node_title',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'export taxonomy by csv'.
  $permissions['export taxonomy by csv'] = array(
    'name' => 'export taxonomy by csv',
    'roles' => array(),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'fulfill orders'.
  $permissions['fulfill orders'] = array(
    'name' => 'fulfill orders',
    'roles' => array(),
    'module' => 'uc_shipping',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'import taxonomy by csv'.
  $permissions['import taxonomy by csv'] = array(
    'name' => 'import taxonomy by csv',
    'roles' => array(),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all entityqueues'.
  $permissions['manipulate all entityqueues'] = array(
    'name' => 'manipulate all entityqueues',
    'roles' => array(),
    'module' => 'entityqueue',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate entityqueues'.
  $permissions['manipulate entityqueues'] = array(
    'name' => 'manipulate entityqueues',
    'roles' => array(),
    'module' => 'entityqueue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manual payments'.
  $permissions['manual payments'] = array(
    'name' => 'manual payments',
    'roles' => array(),
    'module' => 'uc_payment',
  );

  // Exported permission: 'masquerade as admin'.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as user'.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(),
    'module' => 'migrate',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'process credit cards'.
  $permissions['process credit cards'] = array(
    'name' => 'process credit cards',
    'roles' => array(),
    'module' => 'uc_credit',
  );

  // Exported permission: 'process paymentxp_ach payments'.
  $permissions['process paymentxp_ach payments'] = array(
    'name' => 'process paymentxp_ach payments',
    'roles' => array(),
    'module' => 'uc_paymentxp',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'show format selection for bean'.
  $permissions['show format selection for bean'] = array(
    'name' => 'show format selection for bean',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for entityqueue_subqueue'.
  $permissions['show format selection for entityqueue_subqueue'] = array(
    'name' => 'show format selection for entityqueue_subqueue',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for multifield'.
  $permissions['show format selection for multifield'] = array(
    'name' => 'show format selection for multifield',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for uc_order'.
  $permissions['show format selection for uc_order'] = array(
    'name' => 'show format selection for uc_order',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for uc_order_product'.
  $permissions['show format selection for uc_order_product'] = array(
    'name' => 'show format selection for uc_order_product',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'subscribe to comments'.
  $permissions['subscribe to comments'] = array(
    'name' => 'subscribe to comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment_notify',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'unconditionally delete orders'.
  $permissions['unconditionally delete orders'] = array(
    'name' => 'unconditionally delete orders',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'update genre_queue entityqueue'.
  $permissions['update genre_queue entityqueue'] = array(
    'name' => 'update genre_queue entityqueue',
    'roles' => array(),
    'module' => 'entityqueue',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use exclude node title'.
  $permissions['use exclude node title'] = array(
    'name' => 'use exclude node title',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Donor' => 'Donor',
      'Editor' => 'Editor',
      'Subscriber' => 'Subscriber',
      'Sustainer' => 'Sustainer',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'exclude_node_title',
  );

  // Exported permission: 'use manualcrop'.
  $permissions['use manualcrop'] = array(
    'name' => 'use manualcrop',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Donor' => 'Donor',
      'Editor' => 'Editor',
      'Subscriber' => 'Subscriber',
      'Sustainer' => 'Sustainer',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'use text format brief_wysiwyg'.
  $permissions['use text format brief_wysiwyg'] = array(
    'name' => 'use text format brief_wysiwyg',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html_no_auto_line_breaks'.
  $permissions['use text format full_html_no_auto_line_breaks'] = array(
    'name' => 'use text format full_html_no_auto_line_breaks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format raw_html'.
  $permissions['use text format raw_html'] = array(
    'name' => 'use text format raw_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format wysywyg_format'.
  $permissions['use text format wysywyg_format'] = array(
    'name' => 'use text format wysywyg_format',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view all downloads'.
  $permissions['view all downloads'] = array(
    'name' => 'view all downloads',
    'roles' => array(),
    'module' => 'uc_file',
  );

  // Exported permission: 'view all orders'.
  $permissions['view all orders'] = array(
    'name' => 'view all orders',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'view all role expirations'.
  $permissions['view all role expirations'] = array(
    'name' => 'view all role expirations',
    'roles' => array(),
    'module' => 'uc_roles',
  );

  // Exported permission: 'view any clickable_image bean'.
  $permissions['view any clickable_image bean'] = array(
    'name' => 'view any clickable_image bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any rich_text_block bean'.
  $permissions['view any rich_text_block bean'] = array(
    'name' => 'view any rich_text_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any site_social_media_block bean'.
  $permissions['view any site_social_media_block bean'] = array(
    'name' => 'view any site_social_media_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view cart links report'.
  $permissions['view cart links report'] = array(
    'name' => 'view cart links report',
    'roles' => array(),
    'module' => 'uc_cart_links',
  );

  // Exported permission: 'view cc details'.
  $permissions['view cc details'] = array(
    'name' => 'view cc details',
    'roles' => array(),
    'module' => 'uc_credit',
  );

  // Exported permission: 'view code review'.
  $permissions['view code review'] = array(
    'name' => 'view code review',
    'roles' => array(),
    'module' => 'coder_review',
  );

  // Exported permission: 'view code review all'.
  $permissions['view code review all'] = array(
    'name' => 'view code review all',
    'roles' => array(),
    'module' => 'coder_review',
  );

  // Exported permission: 'view customers'.
  $permissions['view customers'] = array(
    'name' => 'view customers',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'view field_analytics_action'.
  $permissions['view field_analytics_action'] = array(
    'name' => 'view field_analytics_action',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_analytics_event'.
  $permissions['view field_analytics_event'] = array(
    'name' => 'view field_analytics_event',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_analytics_label'.
  $permissions['view field_analytics_label'] = array(
    'name' => 'view field_analytics_label',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_facebook'.
  $permissions['view field_facebook'] = array(
    'name' => 'view field_facebook',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_google_plus'.
  $permissions['view field_google_plus'] = array(
    'name' => 'view field_google_plus',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_instagram'.
  $permissions['view field_instagram'] = array(
    'name' => 'view field_instagram',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pinterest'.
  $permissions['view field_pinterest'] = array(
    'name' => 'view field_pinterest',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_profile_photo'.
  $permissions['view field_profile_photo'] = array(
    'name' => 'view field_profile_photo',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_real_name'.
  $permissions['view field_real_name'] = array(
    'name' => 'view field_real_name',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_short_bio'.
  $permissions['view field_short_bio'] = array(
    'name' => 'view field_short_bio',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_signature'.
  $permissions['view field_signature'] = array(
    'name' => 'view field_signature',
    'roles' => array(
      'Sustainer' => 'Sustainer',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_social_media_reference'.
  $permissions['view field_social_media_reference'] = array(
    'name' => 'view field_social_media_reference',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_tumblr'.
  $permissions['view field_tumblr'] = array(
    'name' => 'view field_tumblr',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_twitter'.
  $permissions['view field_twitter'] = array(
    'name' => 'view field_twitter',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_twitter_username'.
  $permissions['view field_twitter_username'] = array(
    'name' => 'view field_twitter_username',
    'roles' => array(
      'Donor' => 'Donor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_website'.
  $permissions['view field_website'] = array(
    'name' => 'view field_website',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view icons'.
  $permissions['view icons'] = array(
    'name' => 'view icons',
    'roles' => array(),
    'module' => 'icon',
  );

  // Exported permission: 'view own field_analytics_action'.
  $permissions['view own field_analytics_action'] = array(
    'name' => 'view own field_analytics_action',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_analytics_event'.
  $permissions['view own field_analytics_event'] = array(
    'name' => 'view own field_analytics_event',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_analytics_label'.
  $permissions['view own field_analytics_label'] = array(
    'name' => 'view own field_analytics_label',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_facebook'.
  $permissions['view own field_facebook'] = array(
    'name' => 'view own field_facebook',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_google_plus'.
  $permissions['view own field_google_plus'] = array(
    'name' => 'view own field_google_plus',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_instagram'.
  $permissions['view own field_instagram'] = array(
    'name' => 'view own field_instagram',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pinterest'.
  $permissions['view own field_pinterest'] = array(
    'name' => 'view own field_pinterest',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_profile_photo'.
  $permissions['view own field_profile_photo'] = array(
    'name' => 'view own field_profile_photo',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_real_name'.
  $permissions['view own field_real_name'] = array(
    'name' => 'view own field_real_name',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_short_bio'.
  $permissions['view own field_short_bio'] = array(
    'name' => 'view own field_short_bio',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
      'Sustainer' => 'Sustainer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_signature'.
  $permissions['view own field_signature'] = array(
    'name' => 'view own field_signature',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Donor' => 'Donor',
      'Editor' => 'Editor',
      'Subscriber' => 'Subscriber',
      'Sustainer' => 'Sustainer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_social_media_reference'.
  $permissions['view own field_social_media_reference'] = array(
    'name' => 'view own field_social_media_reference',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_tumblr'.
  $permissions['view own field_tumblr'] = array(
    'name' => 'view own field_tumblr',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_twitter'.
  $permissions['view own field_twitter'] = array(
    'name' => 'view own field_twitter',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_twitter_username'.
  $permissions['view own field_twitter_username'] = array(
    'name' => 'view own field_twitter_username',
    'roles' => array(
      'Donor' => 'Donor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_website'.
  $permissions['view own field_website'] = array(
    'name' => 'view own field_website',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own invoices'.
  $permissions['view own invoices'] = array(
    'name' => 'view own invoices',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'view own orders'.
  $permissions['view own orders'] = array(
    'name' => 'view own orders',
    'roles' => array(),
    'module' => 'uc_order',
  );

  // Exported permission: 'view own recurring fees'.
  $permissions['view own recurring fees'] = array(
    'name' => 'view own recurring fees',
    'roles' => array(),
    'module' => 'uc_recurring',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(),
    'module' => 'uc_payment',
  );

  // Exported permission: 'view reports'.
  $permissions['view reports'] = array(
    'name' => 'view reports',
    'roles' => array(),
    'module' => 'uc_store',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view style guides'.
  $permissions['view style guides'] = array(
    'name' => 'view style guides',
    'roles' => array(),
    'module' => 'styleguide',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
      'Editor' => 'Editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
