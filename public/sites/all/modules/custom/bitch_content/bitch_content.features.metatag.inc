<?php
/**
 * @file
 * bitch_content.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function bitch_content_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:article.
  $config['node:article'] = array(
    'instance' => 'node:article',
    'config' => array(
      'og:type' => array(
        'value' => 'article',
      ),
    ),
  );

  // Exported Metatag config instance: node:podcast.
  $config['node:podcast'] = array(
    'instance' => 'node:podcast',
    'config' => array(
      'author' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:image' => array(
        'value' => '[node:field_metadata:field_feature_image:480x480_square]',
      ),
    ),
  );

  // Exported Metatag config instance: node:site_page.
  $config['node:site_page'] = array(
    'instance' => 'node:site_page',
    'config' => array(
      'author' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:image' => array(
        'value' => '[node:field_metadata:field_feature_image:480x480_square]',
      ),
    ),
  );

  // Exported Metatag config instance: node:webform.
  $config['node:webform'] = array(
    'instance' => 'node:webform',
    'config' => array(
      'author' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
    ),
  );

  return $config;
}
