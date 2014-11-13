<?php
/**
 * @file
 * bitch_content..inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function bitch_content_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'content_metadata';
  $multifield->label = 'Content Metadata';
  $multifield->description = '';
  $export['content_metadata'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'gallery_image';
  $multifield->label = 'Gallery Image';
  $multifield->description = '';
  $export['gallery_image'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'list_item';
  $multifield->label = 'List Item';
  $multifield->description = '';
  $export['list_item'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'magazine_content';
  $multifield->label = 'Magazine Content';
  $multifield->description = 'magazine_content';
  $export['magazine_content'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'magazine_review';
  $multifield->label = 'Magazine Review';
  $multifield->description = '';
  $export['magazine_review'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'question_and_answer';
  $multifield->label = 'Question and Answer';
  $multifield->description = '';
  $export['question_and_answer'] = $multifield;

  return $export;
}
