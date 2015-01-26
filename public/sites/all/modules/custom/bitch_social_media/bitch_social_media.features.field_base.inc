<?php
/**
 * @file
 * bitch_social_media.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bitch_social_media_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_site_social_media'
  $field_bases['field_site_social_media'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_site_social_media',
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
      'hide_blank_items' => 1,
    ),
    'translatable' => 0,
    'type' => 'social_media_link',
  );

  return $field_bases;
}
