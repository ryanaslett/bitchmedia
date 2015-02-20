<?php
/**
 * @file
 * bitch_bitchmart.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function bitch_bitchmart_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:donation.
  $config['node:donation'] = array(
    'instance' => 'node:donation',
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

  // Exported Metatag config instance: node:membership.
  $config['node:membership'] = array(
    'instance' => 'node:membership',
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

  // Exported Metatag config instance: node:merchandise.
  $config['node:merchandise'] = array(
    'instance' => 'node:merchandise',
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

  // Exported Metatag config instance: node:subscription.
  $config['node:subscription'] = array(
    'instance' => 'node:subscription',
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

  return $config;
}
