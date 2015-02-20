<?php
/**
 * @file
 * bitch_bitchmart.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bitch_bitchmart_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bitchmart';
  $context->description = 'Everything under Bitchmart';
  $context->tag = 'Site Sections';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'support-feminist-media*' => 'support-feminist-media*',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'bmart',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Everything under Bitchmart');
  t('Site Sections');
  $export['bitchmart'] = $context;

  return $export;
}
