<?php
/**
 * @file
 * bitch_content_frame.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bitch_content_frame_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_area';
  $context->description = 'Anywhere that is not bitchmart';
  $context->tag = 'Site Sections';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~support-feminist-media*' => '~support-feminist-media*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-site-social-media' => array(
          'module' => 'bean',
          'delta' => 'site-social-media',
          'region' => 'header',
          'weight' => '-18',
        ),
        'views-4a4813aefef23bb21e69ee2f7c9bc644' => array(
          'module' => 'views',
          'delta' => '4a4813aefef23bb21e69ee2f7c9bc644',
          'region' => 'header',
          'weight' => '-17',
        ),
        'logintoboggan-logintoboggan_logged_in' => array(
          'module' => 'logintoboggan',
          'delta' => 'logintoboggan_logged_in',
          'region' => 'header',
          'weight' => '-16',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'header',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'navigation',
          'weight' => '-17',
        ),
        'bean-social-media-footer-block' => array(
          'module' => 'bean',
          'delta' => 'social-media-footer-block',
          'region' => 'bottom',
          'weight' => '-18',
        ),
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'bottom',
          'weight' => '-17',
        ),
        'bean-copyright-block' => array(
          'module' => 'bean',
          'delta' => 'copyright-block',
          'region' => 'bottom',
          'weight' => '-16',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Anywhere that is not bitchmart');
  t('Site Sections');
  $export['content_area'] = $context;

  return $export;
}
