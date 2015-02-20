<?php
/**
 * @file
 * bitch_content_frame.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bitch_content_frame_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_block_content'
  $field_bases['field_block_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_content',
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
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
