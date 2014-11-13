<?php
/**
 * @file
 * bitch_content_frame.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bitch_content_frame_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'disabled' => FALSE,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bitchmedia' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bitchmedia',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'disabled' => FALSE,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bitchmedia' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bitchmedia',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Tout Menu',
    'visibility' => 0,
  );

  $export['menu_block-3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 3,
    'disabled' => FALSE,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bitchmedia' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bitchmedia',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Footer Menu',
    'visibility' => 0,
  );

  $export['menu_block-4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 4,
    'disabled' => FALSE,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bitchmedia' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bitchmedia',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Topics Menu',
    'visibility' => 0,
  );

  return $export;
}
