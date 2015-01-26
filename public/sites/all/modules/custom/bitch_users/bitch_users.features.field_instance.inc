<?php
/**
 * @file
 * bitch_users.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bitch_users_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'multifield-social_media_link-field_analytics_action'
  $field_instances['multifield-social_media_link-field_analytics_action'] = array(
    'bundle' => 'social_media_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'link_view' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_analytics_action',
    'label' => 'Analytics Action',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'plain_text' => 'plain_text',
          'raw_html' => 'raw_html',
          'wysywyg_format' => 'wysywyg_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'brief_wysiwyg' => array(
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'multifield-social_media_link-field_analytics_event'
  $field_instances['multifield-social_media_link-field_analytics_event'] = array(
    'bundle' => 'social_media_link',
    'default_value' => NULL,
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
      'link_view' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_analytics_event',
    'label' => 'Analytics Category',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'plain_text' => 'plain_text',
          'raw_html' => 'raw_html',
          'wysywyg_format' => 'wysywyg_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'brief_wysiwyg' => array(
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'multifield-social_media_link-field_analytics_label'
  $field_instances['multifield-social_media_link-field_analytics_label'] = array(
    'bundle' => 'social_media_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'link_view' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_analytics_label',
    'label' => 'Analytics Label',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'plain_text' => 'plain_text',
          'raw_html' => 'raw_html',
          'wysywyg_format' => 'wysywyg_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'brief_wysiwyg' => array(
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'multifield-social_media_link-field_link_url'
  $field_instances['multifield-social_media_link-field_link_url'] = array(
    'bundle' => 'social_media_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the full url for this social media site, ie https://twitter.com/username or https://facebook.com/pagename',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'link_view' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_link_url',
    'label' => 'Link to Site',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'filtered_html' => 0,
          'full_html' => 0,
          'full_html_no_auto_line_breaks' => 0,
          'plain_text' => 'plain_text',
          'raw_html' => 'raw_html',
          'wysywyg_format' => 'wysywyg_format',
        ),
        'allowed_formats_toggle' => 0,
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'multifield-social_media_link-field_social_media_reference'
  $field_instances['multifield-social_media_link-field_social_media_reference'] = array(
    'bundle' => 'social_media_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the social media link that this multifield is for.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'social_media_icon',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 4,
      ),
      'link_view' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'social_media_icon',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_social_media_reference',
    'label' => 'Social Media Reference',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'multifield-tracked_link-field_analytics_action'
  $field_instances['multifield-tracked_link-field_analytics_action'] = array(
    'bundle' => 'tracked_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the specific action that the user took. It might be "Clicked", or \'Subscribed\' depending on where its used.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'link_view' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_analytics_action',
    'label' => 'Analytics Action',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'plain_text' => 'plain_text',
          'raw_html' => 'raw_html',
          'wysywyg_format' => 'wysywyg_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'brief_wysiwyg' => array(
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'multifield-tracked_link-field_analytics_event'
  $field_instances['multifield-tracked_link-field_analytics_event'] = array(
    'bundle' => 'tracked_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the Category for tracking clicks on this link. Any call to actions that we\'d like the user to attempt should have a category assigned to it',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'link_view' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_analytics_event',
    'label' => 'Analytics Category',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'plain_text' => 'plain_text',
          'raw_html' => 'raw_html',
          'wysywyg_format' => 'wysywyg_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'brief_wysiwyg' => array(
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'multifield-tracked_link-field_analytics_label'
  $field_instances['multifield-tracked_link-field_analytics_label'] = array(
    'bundle' => 'tracked_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the specific label used in analytics. This is the most detailed and most unique, and should probably not be duplicated anywhere on the site.
\'Subscribed to Popaganda podcast\' for example.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'link_view' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_analytics_label',
    'label' => 'Analytics Label',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'plain_text' => 'plain_text',
          'raw_html' => 'raw_html',
          'wysywyg_format' => 'wysywyg_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'brief_wysiwyg' => array(
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'size' => 80,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'multifield-tracked_link-field_link_label'
  $field_instances['multifield-tracked_link-field_link_label'] = array(
    'bundle' => 'tracked_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This the text the user will see that will be hyperlinked.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'link_view' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_link_label',
    'label' => 'Link Label',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'plain_text' => 'plain_text',
          'raw_html' => 'raw_html',
          'wysywyg_format' => 'wysywyg_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'brief_wysiwyg' => array(
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'multifield-tracked_link-field_link_url'
  $field_instances['multifield-tracked_link-field_link_url'] = array(
    'bundle' => 'tracked_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the fully qualified URL including protocol (http://, https://, itms:// etc), domain name (bitchmagazine.org) and query string if applicable ?thing=stuff

An example url would be \'itms://itunes.apple.com/podcast/bitch-radio/id330195674?mt=2\' Or "http://www.salon.com/2014/03/04/why_i_cant_stand_white_belly_dancers/" etc.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'link_view' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_link_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'plain_text' => 'plain_text',
          'raw_html' => 'raw_html',
          'wysywyg_format' => 'wysywyg_format',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'brief_wysiwyg' => array(
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'user-user-field_facebook'
  $field_instances['user-user-field_facebook'] = array(
    'bundle' => 'user',
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
              'value' => 'Profile Referral',
            ),
          ),
        ),
        'field_analytics_action' => array(
          'und' => array(
            0 => array(
              'value' => 'Facebook Page Referral',
            ),
          ),
        ),
        'field_analytics_label' => array(
          'und' => array(
            0 => array(
              'value' => 'CHANGEME TO USERNAME',
            ),
          ),
        ),
        'field_social_media_reference' => array(
          'und' => array(
            0 => array(
              'target_id' => 194,
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
    'description' => '',
    'display' => array(
      'author_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'multifield',
        'settings' => array(
          'view_mode' => 'default',
        ),
        'type' => 'multifield_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_facebook',
    'label' => 'Facebook Page',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(
        'multiple_value_widget' => 'table',
      ),
      'type' => 'multifield_default',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'user-user-field_google_plus'
  $field_instances['user-user-field_google_plus'] = array(
    'bundle' => 'user',
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
              'value' => 'Profile Referral',
            ),
          ),
        ),
        'field_analytics_action' => array(
          'und' => array(
            0 => array(
              'value' => 'Google Plus Referral',
            ),
          ),
        ),
        'field_analytics_label' => array(
          'und' => array(
            0 => array(
              'value' => '[current-user:field-real-name]',
            ),
          ),
        ),
        'field_social_media_reference' => array(
          'und' => array(
            0 => array(
              'target_id' => 193,
            ),
          ),
        ),
        'id' => NULL,
        'actions' => array(
          'remove_button' => 'Remove',
        ),
      ),
    ),
    'default_value_function' => 'field_default_token_default_value_function',
    'deleted' => 0,
    'description' => 'be sure to include rel=?author on your link in order for google to properly attribute your user profile with your content.
https://plus.google.com/+RyanAslett?rel=author

Additionally, *please* follow these guidelines to set up your author profile with google: https://support.google.com/webmasters/answer/2539557?hl=en&ref_topic=2371375',
    'display' => array(
      'author_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'multifield',
        'settings' => array(
          'view_mode' => 'default',
        ),
        'type' => 'multifield_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_google_plus',
    'label' => 'Google Plus',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(
        'multiple_value_widget' => 'table',
      ),
      'type' => 'multifield_default',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'user-user-field_instagram'
  $field_instances['user-user-field_instagram'] = array(
    'bundle' => 'user',
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
              'value' => 'Profile Referral',
            ),
          ),
        ),
        'field_analytics_action' => array(
          'und' => array(
            0 => array(
              'value' => 'Instagram Referral',
            ),
          ),
        ),
        'field_analytics_label' => array(
          'und' => array(
            0 => array(
              'value' => 'CHANGEME TO USERNAME',
            ),
          ),
        ),
        'field_social_media_reference' => array(
          'und' => array(
            0 => array(
              'target_id' => 196,
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
    'description' => '',
    'display' => array(
      'author_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'multifield',
        'settings' => array(
          'view_mode' => 'default',
        ),
        'type' => 'multifield_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_instagram',
    'label' => 'Instagram',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(
        'multiple_value_widget' => 'table',
      ),
      'type' => 'multifield_default',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'user-user-field_pinterest'
  $field_instances['user-user-field_pinterest'] = array(
    'bundle' => 'user',
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
              'value' => 'Profile Referral',
            ),
          ),
        ),
        'field_analytics_action' => array(
          'und' => array(
            0 => array(
              'value' => 'Pinterest Referral',
            ),
          ),
        ),
        'field_analytics_label' => array(
          'und' => array(
            0 => array(
              'value' => 'CHANGEME TO USERNAME',
            ),
          ),
        ),
        'field_social_media_reference' => array(
          'und' => array(
            0 => array(
              'target_id' => 197,
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
    'description' => '',
    'display' => array(
      'author_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'multifield',
        'settings' => array(
          'view_mode' => 'default',
        ),
        'type' => 'multifield_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pinterest',
    'label' => 'Pinterest',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(
        'multiple_value_widget' => 'table',
      ),
      'type' => 'multifield_default',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'user-user-field_profile_photo'
  $field_instances['user-user-field_profile_photo'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => 'Upload a profile photo',
    'display' => array(
      'author_link' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '400x400_manual_square_thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_profile_photo',
    'label' => 'Profile Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images/profile_photos',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '400x400',
      'title_field' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          '400x400_manual_square_thumbnail' => '400x400_manual_square_thumbnail',
        ),
        'manualcrop_styles_list' => array(
          '400x400_manual_square_thumbnail' => '400x400_manual_square_thumbnail',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'multiple_value_widget' => 'table',
        'preview_image_style' => '400x400_manual_square_thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'user-user-field_real_name'
  $field_instances['user-user-field_real_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'author_link' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'title_class' => '',
          'title_link' => 'content',
          'title_style' => 'h5',
        ),
        'type' => 'title_linked',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_real_name',
    'label' => 'Real Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'full_html_no_auto_line_breaks' => 'full_html_no_auto_line_breaks',
          'plain_text' => 'plain_text',
          'raw_html' => 'raw_html',
          'wysywyg_format' => 'wysywyg_format',
        ),
        'allowed_formats_toggle' => 0,
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
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'user-user-field_short_bio'
  $field_instances['user-user-field_short_bio'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'brief_wysiwyg',
      ),
    ),
    'deleted' => 0,
    'description' => 'Please provide a short bio that you wish users to see when viewing your page.',
    'display' => array(
      'author_link' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 200,
        ),
        'type' => 'text_trimmed',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_short_bio',
    'label' => 'Short Bio',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'filtered_html' => 0,
          'full_html' => 0,
          'full_html_no_auto_line_breaks' => 0,
          'plain_text' => 0,
          'raw_html' => 0,
          'wysywyg_format' => 0,
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
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'user-user-field_signature'
  $field_instances['user-user-field_signature'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'author_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_signature',
    'label' => 'Signature',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'plain_text' => 0,
          'raw_html' => 0,
          'wysywyg_format' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'brief_wysiwyg' => array(
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
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'user-user-field_tumblr'
  $field_instances['user-user-field_tumblr'] = array(
    'bundle' => 'user',
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
              'value' => 'Profile Referrals',
            ),
          ),
        ),
        'field_analytics_action' => array(
          'und' => array(
            0 => array(
              'value' => 'Tumblr Referral',
            ),
          ),
        ),
        'field_analytics_label' => array(
          'und' => array(
            0 => array(
              'value' => 'CHANGEME TO USERNAME',
            ),
          ),
        ),
        'field_social_media_reference' => array(
          'und' => array(
            0 => array(
              'target_id' => 198,
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
    'description' => '',
    'display' => array(
      'author_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'multifield',
        'settings' => array(
          'view_mode' => 'default',
        ),
        'type' => 'multifield_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_tumblr',
    'label' => 'Tumblr',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(
        'multiple_value_widget' => 'table',
      ),
      'type' => 'multifield_default',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'user-user-field_twitter'
  $field_instances['user-user-field_twitter'] = array(
    'bundle' => 'user',
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
              'value' => 'Profile Referral',
            ),
          ),
        ),
        'field_analytics_action' => array(
          'und' => array(
            0 => array(
              'value' => 'Twitter Referal',
            ),
          ),
        ),
        'field_analytics_label' => array(
          'und' => array(
            0 => array(
              'value' => 'CHANGEME TO USERNAME',
            ),
          ),
        ),
        'field_social_media_reference' => array(
          'und' => array(
            0 => array(
              'target_id' => 195,
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
    'description' => '',
    'display' => array(
      'author_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'multifield',
        'settings' => array(
          'view_mode' => 'default',
        ),
        'type' => 'multifield_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_twitter',
    'label' => 'Twitter',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(
        'multiple_value_widget' => 'table',
      ),
      'type' => 'multifield_default',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'user-user-field_twitter_username'
  $field_instances['user-user-field_twitter_username'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the user\'s twitter handle. Do not include the @ sign',
    'display' => array(
      'author_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_twitter_username',
    'label' => 'Twitter Username',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'brief_wysiwyg' => 'brief_wysiwyg',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'full_html_no_auto_line_breaks' => 'full_html_no_auto_line_breaks',
          'plain_text' => 'plain_text',
          'raw_html' => 'raw_html',
          'wysywyg_format' => 'wysywyg_format',
        ),
        'allowed_formats_toggle' => 0,
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
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'multiple_value_widget' => 'table',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'user-user-field_website'
  $field_instances['user-user-field_website'] = array(
    'bundle' => 'user',
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
              'value' => 'Profile Referals',
            ),
          ),
        ),
        'field_analytics_action' => array(
          'und' => array(
            0 => array(
              'value' => 'Website Referal',
            ),
          ),
        ),
        'field_analytics_label' => array(
          'und' => array(
            0 => array(
              'value' => 'CHANGEME TO USERNAME',
            ),
          ),
        ),
        'field_link_label' => array(
          'und' => array(
            0 => array(
              'value' => '',
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
    'description' => 'Add a link to your website here.',
    'display' => array(
      'author_link' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'multifield',
        'settings' => array(
          'view_mode' => 'default',
        ),
        'type' => 'multifield_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_website',
    'label' => 'Website',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(
        'multiple_value_widget' => 'tabs',
      ),
      'type' => 'multifield_default',
      'weight' => 22,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add a link to your website here.');
  t('Analytics Action');
  t('Analytics Category');
  t('Analytics Label');
  t('Enter the fully qualified URL including protocol (http://, https://, itms:// etc), domain name (bitchmagazine.org) and query string if applicable ?thing=stuff

An example url would be \'itms://itunes.apple.com/podcast/bitch-radio/id330195674?mt=2\' Or "http://www.salon.com/2014/03/04/why_i_cant_stand_white_belly_dancers/" etc.');
  t('Enter the user\'s twitter handle. Do not include the @ sign');
  t('Facebook Page');
  t('Google Plus');
  t('Instagram');
  t('Link Label');
  t('Link to Site');
  t('Pinterest');
  t('Please provide a short bio that you wish users to see when viewing your page.');
  t('Profile Photo');
  t('Real Name');
  t('Short Bio');
  t('Signature');
  t('Social Media Reference');
  t('This is the Category for tracking clicks on this link. Any call to actions that we\'d like the user to attempt should have a category assigned to it');
  t('This is the full url for this social media site, ie https://twitter.com/username or https://facebook.com/pagename');
  t('This is the social media link that this multifield is for.');
  t('This is the specific action that the user took. It might be "Clicked", or \'Subscribed\' depending on where its used.');
  t('This is the specific label used in analytics. This is the most detailed and most unique, and should probably not be duplicated anywhere on the site.
\'Subscribed to Popaganda podcast\' for example.');
  t('This the text the user will see that will be hyperlinked.');
  t('Tumblr');
  t('Twitter');
  t('Twitter Username');
  t('URL');
  t('Upload a profile photo');
  t('Website');
  t('be sure to include rel=?author on your link in order for google to properly attribute your user profile with your content.
https://plus.google.com/+RyanAslett?rel=author

Additionally, *please* follow these guidelines to set up your author profile with google: https://support.google.com/webmasters/answer/2539557?hl=en&ref_topic=2371375');

  return $field_instances;
}
