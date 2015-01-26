<?php
/**
 * @file
 * bitch_issues.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function bitch_issues_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:digital_download.
  $config['node:digital_download'] = array(
    'instance' => 'node:digital_download',
    'config' => array(
      'author' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => 'product',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: node:issue.
  $config['node:issue'] = array(
    'instance' => 'node:issue',
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
