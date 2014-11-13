<?php
/**
 * @file
 * bitch_users.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bitch_users_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'authorpages';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['authorpages'] = $context;

  return $export;
}
