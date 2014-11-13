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

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
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

  return $permissions;
}
