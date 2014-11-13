<?php
/**
 * @file
 * bitch_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bitch_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "multifield" && $api == "") {
    return array("version" => "");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bitch_content_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('This is a standard format article with a body text wysiwyg. Almost all content will be created here.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
    'podcast' => array(
      'name' => t('Podcast'),
      'base' => 'node_content',
      'description' => t('Audio content produced by Bitch.'),
      'has_title' => '1',
      'title_label' => t('Episode Name'),
      'help' => '',
    ),
    'site_page' => array(
      'name' => t('Site Page'),
      'base' => 'node_content',
      'description' => t('This is for general catch all site pages that don\'t have any other category.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('First enter the metadata and body content so it will show up in listings and search results. You will be able to configure the form elements next.'),
    ),
  );
  return $items;
}
