<?php
/**
 * @file
 * bitch_users..inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function bitch_users_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'social_media_link';
  $multifield->label = 'Social Media Link';
  $multifield->description = 'social_media_link';
  $export['social_media_link'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'tracked_link';
  $multifield->label = 'Tracked Link';
  $multifield->description = '';
  $export['tracked_link'] = $multifield;

  return $export;
}
