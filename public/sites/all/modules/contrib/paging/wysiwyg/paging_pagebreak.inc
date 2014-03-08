<?php

/**
 * @file
 * Wysiwyg API integration on behalf of Node module.
 */

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function paging_paging_pagebreak_plugin() {
  $plugins['paging_pagebreak'] = array(
    'title' => t('Page break'),
    'vendor url' => 'http://drupal.org/project/paging',
    'icon file' => 'pagebreak.gif',
    'icon title' => t('Add a page break to this content.'),
    'settings' => array(),
  );
  return $plugins;
}

