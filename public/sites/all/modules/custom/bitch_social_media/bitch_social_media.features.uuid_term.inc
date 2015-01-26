<?php
/**
 * @file
 * bitch_social_media.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function bitch_social_media_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Facebook',
    'description' => NULL,
    'format' => 'raw_html',
    'weight' => 0,
    'uuid' => '49e9319d-50a4-492c-94ad-ce5c42af024b',
    'vocabulary_machine_name' => 'social_media_websites',
    'field_service_icon' => array(
      'und' => array(
        0 => array(
          'bundle' => 'fontawesome',
          'icon' => 'facebook',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Facebook',
          'format' => NULL,
          'safe_value' => 'Facebook',
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'raw_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_original' => 'Facebook',
    'description_original' => NULL,
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Twitter',
    'description' => NULL,
    'format' => 'raw_html',
    'weight' => 0,
    'uuid' => '61e7726e-0c20-45f9-b128-ca1b2f505de4',
    'vocabulary_machine_name' => 'social_media_websites',
    'field_service_icon' => array(
      'und' => array(
        0 => array(
          'bundle' => 'fontawesome',
          'icon' => 'twitter',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Twitter',
          'format' => NULL,
          'safe_value' => 'Twitter',
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => '',
          'format' => 'raw_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_original' => 'Twitter',
    'description_original' => NULL,
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Instagram',
    'description' => NULL,
    'format' => 'raw_html',
    'weight' => 0,
    'uuid' => '7e3ae2c0-7764-4ce7-9af7-47125386604b',
    'vocabulary_machine_name' => 'social_media_websites',
    'field_service_icon' => array(
      'und' => array(
        0 => array(
          'bundle' => 'fontawesome',
          'icon' => 'instagram',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Instagram',
          'format' => NULL,
          'safe_value' => 'Instagram',
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => '',
          'format' => 'raw_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_original' => 'Instagram',
    'description_original' => NULL,
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tumblr',
    'description' => 'Tumblr',
    'format' => 'raw_html',
    'weight' => 0,
    'uuid' => '824ad932-1567-459b-8627-58c53ba5aafb',
    'vocabulary_machine_name' => 'social_media_websites',
    'field_service_icon' => array(
      'und' => array(
        0 => array(
          'bundle' => 'fontawesome',
          'icon' => 'tumblr',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Tumblr',
          'format' => NULL,
          'safe_value' => 'Tumblr',
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Tumblr',
          'summary' => NULL,
          'format' => 'raw_html',
          'safe_value' => 'Tumblr',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_original' => 'Tumblr',
    'description_original' => 'Tumblr',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Google+',
    'description' => NULL,
    'format' => 'raw_html',
    'weight' => 0,
    'uuid' => '86bf71de-5d80-4230-bf77-bd42b62b8691',
    'vocabulary_machine_name' => 'social_media_websites',
    'field_service_icon' => array(
      'und' => array(
        0 => array(
          'bundle' => 'fontawesome',
          'icon' => 'google-plus',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Google+',
          'format' => NULL,
          'safe_value' => 'Google+',
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => '',
          'format' => 'raw_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_original' => 'Google+',
    'description_original' => NULL,
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Pinterest',
    'description' => 'Pinterest',
    'format' => 'raw_html',
    'weight' => 0,
    'uuid' => 'db15e37d-23b7-40e1-92e1-1a06454011af',
    'vocabulary_machine_name' => 'social_media_websites',
    'field_service_icon' => array(
      'und' => array(
        0 => array(
          'bundle' => 'fontawesome',
          'icon' => 'pinterest',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Pinterest',
          'format' => NULL,
          'safe_value' => 'Pinterest',
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Pinterest',
          'summary' => NULL,
          'format' => 'raw_html',
          'safe_value' => 'Pinterest',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_original' => 'Pinterest',
    'description_original' => 'Pinterest',
    'metatags' => array(),
  );
  return $terms;
}
