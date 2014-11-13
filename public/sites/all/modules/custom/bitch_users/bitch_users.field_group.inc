<?php
/**
 * @file
 * bitch_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bitch_users_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account|user|user|form';
  $field_group->group_name = 'group_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_profile';
  $field_group->data = array(
    'label' => 'Account Settings',
    'weight' => '11',
    'children' => array(
      0 => 'account',
      1 => 'timezone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio|user|user|form';
  $field_group->group_name = 'group_bio';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_profile';
  $field_group->data = array(
    'label' => 'About Me',
    'weight' => '13',
    'children' => array(
      0 => 'field_profile_photo',
      1 => 'field_short_bio',
      2 => 'field_signature',
      3 => 'field_real_name',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bio|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comments|user|user|form';
  $field_group->group_name = 'group_comments';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_profile';
  $field_group->data = array(
    'label' => 'Comment Settings',
    'weight' => '14',
    'children' => array(
      0 => 'comment_notify_settings',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_comments|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_sites|user|user|default';
  $field_group->group_name = 'group_external_sites';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Follow this Author Elsewhere on the Web',
    'weight' => '3',
    'children' => array(
      0 => 'field_website',
      1 => 'field_twitter',
      2 => 'field_google_plus',
      3 => 'field_tumblr',
      4 => 'field_facebook',
      5 => 'field_instagram',
      6 => 'field_pinterest',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Follow this Author Elsewhere on the Web',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_external_sites|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media_links|user|user|form';
  $field_group->group_name = 'group_social_media_links';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_profile';
  $field_group->data = array(
    'label' => 'Links and Social Media',
    'weight' => '12',
    'children' => array(
      0 => 'field_website',
      1 => 'field_twitter',
      2 => 'field_google_plus',
      3 => 'field_tumblr',
      4 => 'field_facebook',
      5 => 'field_instagram',
      6 => 'field_pinterest',
      7 => 'field_twitter_username',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_social_media_links|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_profile|user|user|form';
  $field_group->group_name = 'group_user_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Profile Group',
    'weight' => '0',
    'children' => array(
      0 => 'ckeditor',
      1 => 'googleanalytics',
      2 => 'metatags',
      3 => 'redirect',
      4 => 'group_account',
      5 => 'group_social_media_links',
      6 => 'group_bio',
      7 => 'group_comments',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_user_profile|user|user|form'] = $field_group;

  return $export;
}
