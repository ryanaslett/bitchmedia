<?php
/**
 * @file
 * bitch_social_media.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function bitch_social_media_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Social Media Footer Block',
    'description' => NULL,
    'title' => '',
    'type' => 'site_social_media_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'social-media-footer-block',
    'view_mode' => 'default',
    'created' => 1422233174,
    'log' => '',
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '1bd88be2-5bac-4107-a294-4ad87e594d4e',
    'field_site_social_media' => array(
      'und' => array(
        0 => array(
          'id' => 1868087,
          'field_link_url' => array(
            'und' => array(
              0 => array(
                'value' => 'https://twitter.com/bitchmedia',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_event' => array(
            'und' => array(
              0 => array(
                'value' => 'Organization Social Media Referal',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_action' => array(
            'und' => array(
              0 => array(
                'value' => 'Header/Footer Click',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_label' => array(
            'und' => array(
              0 => array(
                'value' => 'Twitter',
                'format' => NULL,
              ),
            ),
          ),
          'field_social_media_reference' => array(
            'und' => array(
              0 => array(
                'target_id' => '61e7726e-0c20-45f9-b128-ca1b2f505de4',
                'uuid' => '61e7726e-0c20-45f9-b128-ca1b2f505de4',
              ),
            ),
          ),
        ),
        1 => array(
          'id' => 1868088,
          'field_link_url' => array(
            'und' => array(
              0 => array(
                'value' => 'https://www.facebook.com/pages/Bitch-Media/20954259668',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_event' => array(
            'und' => array(
              0 => array(
                'value' => 'Organization Social Media Referal',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_action' => array(
            'und' => array(
              0 => array(
                'value' => 'Header/Footer Click',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_label' => array(
            'und' => array(
              0 => array(
                'value' => 'Facebook',
                'format' => NULL,
              ),
            ),
          ),
          'field_social_media_reference' => array(
            'und' => array(
              0 => array(
                'target_id' => '49e9319d-50a4-492c-94ad-ce5c42af024b',
                'uuid' => '49e9319d-50a4-492c-94ad-ce5c42af024b',
              ),
            ),
          ),
        ),
        2 => array(
          'id' => 1868089,
          'field_link_url' => array(
            'und' => array(
              0 => array(
                'value' => 'http://instagram.com/bitchmedia',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_event' => array(
            'und' => array(
              0 => array(
                'value' => 'Organization Social Media Referal',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_action' => array(
            'und' => array(
              0 => array(
                'value' => 'Header/Footer Click',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_label' => array(
            'und' => array(
              0 => array(
                'value' => 'Instagram',
                'format' => NULL,
              ),
            ),
          ),
          'field_social_media_reference' => array(
            'und' => array(
              0 => array(
                'target_id' => '7e3ae2c0-7764-4ce7-9af7-47125386604b',
                'uuid' => '7e3ae2c0-7764-4ce7-9af7-47125386604b',
              ),
            ),
          ),
        ),
        3 => array(
          'id' => 1868090,
          'field_link_url' => array(
            'und' => array(
              0 => array(
                'value' => 'http://bitch-media.tumblr.com/',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_event' => array(
            'und' => array(
              0 => array(
                'value' => 'Organization Social Media Referal',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_action' => array(
            'und' => array(
              0 => array(
                'value' => 'Header/Footer Click',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_label' => array(
            'und' => array(
              0 => array(
                'value' => 'Tumblr',
                'format' => NULL,
              ),
            ),
          ),
          'field_social_media_reference' => array(
            'und' => array(
              0 => array(
                'target_id' => '624cd659-a8c5-4fbe-a1b2-f8817a6378aa',
                'uuid' => '624cd659-a8c5-4fbe-a1b2-f8817a6378aa',
              ),
            ),
          ),
        ),
      ),
    ),
    'title_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'format' => NULL,
        ),
      ),
    ),
    'user_uuid' => '7f1cd4fe-f35c-436f-8943-fce57dc951a3',
  );
  $beans[] = array(
    'label' => 'Site Social Media',
    'description' => NULL,
    'title' => '',
    'type' => 'site_social_media_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'site-social-media',
    'view_mode' => 'default',
    'created' => 1422225848,
    'log' => '',
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'a299eb23-dd2d-477f-b3bd-ba86f2ccd8e5',
    'field_site_social_media' => array(
      'und' => array(
        0 => array(
          'id' => 1868084,
          'field_link_url' => array(
            'und' => array(
              0 => array(
                'value' => 'https://twitter.com/bitchmedia',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_event' => array(
            'und' => array(
              0 => array(
                'value' => 'Organization Social Media Referal',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_action' => array(
            'und' => array(
              0 => array(
                'value' => 'Header/Footer Click',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_label' => array(
            'und' => array(
              0 => array(
                'value' => 'Twitter',
                'format' => NULL,
              ),
            ),
          ),
          'field_social_media_reference' => array(
            'und' => array(
              0 => array(
                'target_id' => '61e7726e-0c20-45f9-b128-ca1b2f505de4',
                'uuid' => '61e7726e-0c20-45f9-b128-ca1b2f505de4',
              ),
            ),
          ),
        ),
        1 => array(
          'id' => 1868083,
          'field_link_url' => array(
            'und' => array(
              0 => array(
                'value' => 'https://www.facebook.com/pages/Bitch-Media/20954259668',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_event' => array(
            'und' => array(
              0 => array(
                'value' => 'Organization Social Media Referal',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_action' => array(
            'und' => array(
              0 => array(
                'value' => 'Header/Footer Click',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_label' => array(
            'und' => array(
              0 => array(
                'value' => 'Facebook',
                'format' => NULL,
              ),
            ),
          ),
          'field_social_media_reference' => array(
            'und' => array(
              0 => array(
                'target_id' => '49e9319d-50a4-492c-94ad-ce5c42af024b',
                'uuid' => '49e9319d-50a4-492c-94ad-ce5c42af024b',
              ),
            ),
          ),
        ),
        2 => array(
          'id' => 1868086,
          'field_link_url' => array(
            'und' => array(
              0 => array(
                'value' => 'http://instagram.com/bitchmedia',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_event' => array(
            'und' => array(
              0 => array(
                'value' => 'Organization Social Media Referal',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_action' => array(
            'und' => array(
              0 => array(
                'value' => 'Header/Footer Click',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_label' => array(
            'und' => array(
              0 => array(
                'value' => 'Instagram',
                'format' => NULL,
              ),
            ),
          ),
          'field_social_media_reference' => array(
            'und' => array(
              0 => array(
                'target_id' => '7e3ae2c0-7764-4ce7-9af7-47125386604b',
                'uuid' => '7e3ae2c0-7764-4ce7-9af7-47125386604b',
              ),
            ),
          ),
        ),
        3 => array(
          'id' => 1868085,
          'field_link_url' => array(
            'und' => array(
              0 => array(
                'value' => 'http://bitch-media.tumblr.com/',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_event' => array(
            'und' => array(
              0 => array(
                'value' => 'Organization Social Media Referal',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_action' => array(
            'und' => array(
              0 => array(
                'value' => 'Header/Footer Click',
                'format' => NULL,
              ),
            ),
          ),
          'field_analytics_label' => array(
            'und' => array(
              0 => array(
                'value' => 'Tumblr',
                'format' => NULL,
              ),
            ),
          ),
          'field_social_media_reference' => array(
            'und' => array(
              0 => array(
                'target_id' => '624cd659-a8c5-4fbe-a1b2-f8817a6378aa',
                'uuid' => '624cd659-a8c5-4fbe-a1b2-f8817a6378aa',
              ),
            ),
          ),
        ),
      ),
    ),
    'title_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'format' => NULL,
        ),
      ),
    ),
    'user_uuid' => '7f1cd4fe-f35c-436f-8943-fce57dc951a3',
  );
  return $beans;
}
