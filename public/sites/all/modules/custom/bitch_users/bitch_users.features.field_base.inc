<?php
/**
 * @file
 * bitch_users.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bitch_users_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_analytics_action'
  $field_bases['field_analytics_action'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_analytics_action',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 60,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_analytics_event'
  $field_bases['field_analytics_event'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_analytics_event',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 60,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_analytics_label'
  $field_bases['field_analytics_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_analytics_label',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_facebook'
  $field_bases['field_facebook'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_facebook',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'field_analytics_action_format' => array(
        'columns' => array(
          'field_analytics_action_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_event_format' => array(
        'columns' => array(
          'field_analytics_event_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_label_format' => array(
        'columns' => array(
          'field_analytics_label_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_link_url_format' => array(
        'columns' => array(
          'field_link_url_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_social_media_reference_taxonomy_term_data' => array(
        'columns' => array(
          'field_social_media_reference_target_id' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'field_analytics_action_format' => array(
        0 => 'field_analytics_action_format',
      ),
      'field_analytics_event_format' => array(
        0 => 'field_analytics_event_format',
      ),
      'field_analytics_label_format' => array(
        0 => 'field_analytics_label_format',
      ),
      'field_link_url_format' => array(
        0 => 'field_link_url_format',
      ),
      'field_social_media_reference_target_id' => array(
        0 => 'field_social_media_reference_target_id',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
      'hide_blank_items' => TRUE,
    ),
    'translatable' => 0,
    'type' => 'social_media_link',
  );

  // Exported field_base: 'field_google_plus'
  $field_bases['field_google_plus'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_google_plus',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'field_analytics_action_format' => array(
        'columns' => array(
          'field_analytics_action_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_event_format' => array(
        'columns' => array(
          'field_analytics_event_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_label_format' => array(
        'columns' => array(
          'field_analytics_label_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_link_url_format' => array(
        'columns' => array(
          'field_link_url_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_social_media_reference_taxonomy_term_data' => array(
        'columns' => array(
          'field_social_media_reference_target_id' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'field_analytics_action_format' => array(
        0 => 'field_analytics_action_format',
      ),
      'field_analytics_event_format' => array(
        0 => 'field_analytics_event_format',
      ),
      'field_analytics_label_format' => array(
        0 => 'field_analytics_label_format',
      ),
      'field_link_url_format' => array(
        0 => 'field_link_url_format',
      ),
      'field_social_media_reference_target_id' => array(
        0 => 'field_social_media_reference_target_id',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
      'hide_blank_items' => TRUE,
    ),
    'translatable' => 0,
    'type' => 'social_media_link',
  );

  // Exported field_base: 'field_instagram'
  $field_bases['field_instagram'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_instagram',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'field_analytics_action_format' => array(
        'columns' => array(
          'field_analytics_action_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_event_format' => array(
        'columns' => array(
          'field_analytics_event_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_label_format' => array(
        'columns' => array(
          'field_analytics_label_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_link_url_format' => array(
        'columns' => array(
          'field_link_url_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_social_media_reference_taxonomy_term_data' => array(
        'columns' => array(
          'field_social_media_reference_target_id' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'field_analytics_action_format' => array(
        0 => 'field_analytics_action_format',
      ),
      'field_analytics_event_format' => array(
        0 => 'field_analytics_event_format',
      ),
      'field_analytics_label_format' => array(
        0 => 'field_analytics_label_format',
      ),
      'field_link_url_format' => array(
        0 => 'field_link_url_format',
      ),
      'field_social_media_reference_target_id' => array(
        0 => 'field_social_media_reference_target_id',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
      'hide_blank_items' => TRUE,
    ),
    'translatable' => 0,
    'type' => 'social_media_link',
  );

  // Exported field_base: 'field_link_label'
  $field_bases['field_link_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_link_label',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_link_url'
  $field_bases['field_link_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_link_url',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_pinterest'
  $field_bases['field_pinterest'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pinterest',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'field_analytics_action_format' => array(
        'columns' => array(
          'field_analytics_action_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_event_format' => array(
        'columns' => array(
          'field_analytics_event_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_label_format' => array(
        'columns' => array(
          'field_analytics_label_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_link_url_format' => array(
        'columns' => array(
          'field_link_url_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_social_media_reference_taxonomy_term_data' => array(
        'columns' => array(
          'field_social_media_reference_target_id' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'field_analytics_action_format' => array(
        0 => 'field_analytics_action_format',
      ),
      'field_analytics_event_format' => array(
        0 => 'field_analytics_event_format',
      ),
      'field_analytics_label_format' => array(
        0 => 'field_analytics_label_format',
      ),
      'field_link_url_format' => array(
        0 => 'field_link_url_format',
      ),
      'field_social_media_reference_target_id' => array(
        0 => 'field_social_media_reference_target_id',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
      'hide_blank_items' => TRUE,
    ),
    'translatable' => 0,
    'type' => 'social_media_link',
  );

  // Exported field_base: 'field_profile_photo'
  $field_bases['field_profile_photo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_profile_photo',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_real_name'
  $field_bases['field_real_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_real_name',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_short_bio'
  $field_bases['field_short_bio'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_short_bio',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_signature'
  $field_bases['field_signature'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_signature',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_social_icon'
  $field_bases['field_social_icon'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_icon',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 3,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_social_media_reference'
  $field_bases['field_social_media_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_media_reference',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'taxonomy_term_data' => array(
        'columns' => array(
          'target_id' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'field_default_token' => array(
            'status' => TRUE,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'weight',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'social_media_websites' => 'social_media_websites',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_tracked_link'
  $field_bases['field_tracked_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tracked_link',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'field_analytics_action_format' => array(
        'columns' => array(
          'field_analytics_action_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_event_format' => array(
        'columns' => array(
          'field_analytics_event_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_label_format' => array(
        'columns' => array(
          'field_analytics_label_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_link_label_format' => array(
        'columns' => array(
          'field_link_label_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_link_url_format' => array(
        'columns' => array(
          'field_link_url_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'field_analytics_action_format' => array(
        0 => 'field_analytics_action_format',
      ),
      'field_analytics_event_format' => array(
        0 => 'field_analytics_event_format',
      ),
      'field_analytics_label_format' => array(
        0 => 'field_analytics_label_format',
      ),
      'field_link_label_format' => array(
        0 => 'field_link_label_format',
      ),
      'field_link_url_format' => array(
        0 => 'field_link_url_format',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
      'hide_blank_items' => TRUE,
    ),
    'translatable' => 0,
    'type' => 'tracked_link',
  );

  // Exported field_base: 'field_tumblr'
  $field_bases['field_tumblr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tumblr',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'field_analytics_action_format' => array(
        'columns' => array(
          'field_analytics_action_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_event_format' => array(
        'columns' => array(
          'field_analytics_event_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_label_format' => array(
        'columns' => array(
          'field_analytics_label_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_link_url_format' => array(
        'columns' => array(
          'field_link_url_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_social_media_reference_taxonomy_term_data' => array(
        'columns' => array(
          'field_social_media_reference_target_id' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'field_analytics_action_format' => array(
        0 => 'field_analytics_action_format',
      ),
      'field_analytics_event_format' => array(
        0 => 'field_analytics_event_format',
      ),
      'field_analytics_label_format' => array(
        0 => 'field_analytics_label_format',
      ),
      'field_link_url_format' => array(
        0 => 'field_link_url_format',
      ),
      'field_social_media_reference_target_id' => array(
        0 => 'field_social_media_reference_target_id',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
      'hide_blank_items' => TRUE,
    ),
    'translatable' => 0,
    'type' => 'social_media_link',
  );

  // Exported field_base: 'field_twitter'
  $field_bases['field_twitter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_twitter',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'field_analytics_action_format' => array(
        'columns' => array(
          'field_analytics_action_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_event_format' => array(
        'columns' => array(
          'field_analytics_event_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_label_format' => array(
        'columns' => array(
          'field_analytics_label_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_link_url_format' => array(
        'columns' => array(
          'field_link_url_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_social_media_reference_taxonomy_term_data' => array(
        'columns' => array(
          'field_social_media_reference_target_id' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'field_analytics_action_format' => array(
        0 => 'field_analytics_action_format',
      ),
      'field_analytics_event_format' => array(
        0 => 'field_analytics_event_format',
      ),
      'field_analytics_label_format' => array(
        0 => 'field_analytics_label_format',
      ),
      'field_link_url_format' => array(
        0 => 'field_link_url_format',
      ),
      'field_social_media_reference_target_id' => array(
        0 => 'field_social_media_reference_target_id',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
      'hide_blank_items' => TRUE,
    ),
    'translatable' => 0,
    'type' => 'social_media_link',
  );

  // Exported field_base: 'field_twitter_username'
  $field_bases['field_twitter_username'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_twitter_username',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_website'
  $field_bases['field_website'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_website',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'field_analytics_action_format' => array(
        'columns' => array(
          'field_analytics_action_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_event_format' => array(
        'columns' => array(
          'field_analytics_event_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_analytics_label_format' => array(
        'columns' => array(
          'field_analytics_label_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_link_label_format' => array(
        'columns' => array(
          'field_link_label_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_link_url_format' => array(
        'columns' => array(
          'field_link_url_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'field_analytics_action_format' => array(
        0 => 'field_analytics_action_format',
      ),
      'field_analytics_event_format' => array(
        0 => 'field_analytics_event_format',
      ),
      'field_analytics_label_format' => array(
        0 => 'field_analytics_label_format',
      ),
      'field_link_label_format' => array(
        0 => 'field_link_label_format',
      ),
      'field_link_url_format' => array(
        0 => 'field_link_url_format',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
      'hide_blank_items' => TRUE,
    ),
    'translatable' => 0,
    'type' => 'tracked_link',
  );

  return $field_bases;
}
