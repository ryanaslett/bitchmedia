<?php
/**
 * @file
 * bitch_social_media.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bitch_social_media_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-site_social_media_block-field_site_social_media'
  $field_instances['bean-site_social_media_block-field_site_social_media'] = array(
    'bundle' => 'site_social_media_block',
    'default_value' => array(
      0 => array(
        'field_link_url' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_analytics_event' => array(
          'und' => array(
            0 => array(
              'value' => 'Organization Social Media',
            ),
          ),
        ),
        'field_analytics_action' => array(
          'und' => array(
            0 => array(
              'value' => 'Header/Footer Click',
            ),
          ),
        ),
        'field_analytics_label' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_social_media_reference' => array(
          'und' => array(
            0 => array(
              'target_id' => NULL,
            ),
          ),
        ),
        'id' => NULL,
        'actions' => array(
          'remove_button' => 'Remove',
        ),
      ),
    ),
    'deleted' => 0,
    'description' => 'Add each link that you would like displayed in this social media block. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'multifield',
        'settings' => array(
          'view_mode' => 'link_view',
        ),
        'type' => 'multifield_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_site_social_media',
    'label' => 'Site Social Media',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(
        'multiple_value_widget' => 'table',
      ),
      'type' => 'multifield_default',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'bean-site_social_media_block-title_field'
  $field_instances['bean-site_social_media_block-title_field'] = array(
    'bundle' => 'site_social_media_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Title of the block.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-social_media_websites-description_field'
  $field_instances['taxonomy_term-social_media_websites-description_field'] = array(
    'bundle' => 'social_media_websites',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'social_media_icon' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'description_field',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => 0,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-social_media_websites-field_service_icon'
  $field_instances['taxonomy_term-social_media_websites-field_service_icon'] = array(
    'bundle' => 'social_media_websites',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the icon that goes with this web service',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'icon_field',
        'settings' => array(
          'link_to_content' => FALSE,
        ),
        'type' => 'icon_field_default',
        'weight' => 0,
      ),
      'social_media_icon' => array(
        'label' => 'hidden',
        'module' => 'icon_field',
        'settings' => array(
          'link_to_content' => FALSE,
        ),
        'type' => 'icon_field_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_icon',
    'label' => 'Service Icon',
    'required' => 1,
    'settings' => array(
      'bundle' => NULL,
      'icon' => NULL,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'icon_field',
      'settings' => array(
        'multiple_value_widget' => 'table',
      ),
      'type' => 'icon_field',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'taxonomy_term-social_media_websites-name_field'
  $field_instances['taxonomy_term-social_media_websites-name_field'] = array(
    'bundle' => 'social_media_websites',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'social_media_icon' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'name_field',
    'label' => 'Name',
    'required' => TRUE,
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
      'weight' => -5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add each link that you would like displayed in this social media block. ');
  t('Choose the icon that goes with this web service');
  t('Description');
  t('Name');
  t('Service Icon');
  t('Site Social Media');
  t('The Title of the block.');
  t('Title');

  return $field_instances;
}
