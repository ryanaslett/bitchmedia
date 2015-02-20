<?php
/**
 * @file
 * bitch_content_frame.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bitch_content_frame_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-rich_text_block-field_block_content'
  $field_instances['bean-rich_text_block-field_block_content'] = array(
    'bundle' => 'rich_text_block',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_content',
    'label' => 'Block Content',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'full_html_no_auto_line_breaks' => 0,
          'plain_text' => 0,
          'raw_html' => 0,
          'wysywyg_format' => 'wysywyg_format',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'brief_wysiwyg' => array(
              'weight' => 0,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 0,
            ),
            'full_html_no_auto_line_breaks' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'raw_html' => array(
              'weight' => 0,
            ),
            'wysywyg_format' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'bean-rich_text_block-title_field'
  $field_instances['bean-rich_text_block-title_field'] = array(
    'bundle' => 'rich_text_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Title of the block.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => FALSE,
    'settings' => array(
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Block Content');
  t('The Title of the block.');
  t('Title');

  return $field_instances;
}
