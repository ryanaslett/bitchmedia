<?php
/**
 * @file
 * bitch_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bitch_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create podcast content'.
  $permissions['create podcast content'] = array(
    'name' => 'create podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create site_page content'.
  $permissions['create site_page content'] = array(
    'name' => 'create site_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any podcast content'.
  $permissions['delete any podcast content'] = array(
    'name' => 'delete any podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any site_page content'.
  $permissions['delete any site_page content'] = array(
    'name' => 'delete any site_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own podcast content'.
  $permissions['delete own podcast content'] = array(
    'name' => 'delete own podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own site_page content'.
  $permissions['delete own site_page content'] = array(
    'name' => 'delete own site_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete terms in article_type'.
  $permissions['delete terms in article_type'] = array(
    'name' => 'delete terms in article_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in column_name'.
  $permissions['delete terms in column_name'] = array(
    'name' => 'delete terms in column_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in content_genre'.
  $permissions['delete terms in content_genre'] = array(
    'name' => 'delete terms in content_genre',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in general_topic'.
  $permissions['delete terms in general_topic'] = array(
    'name' => 'delete terms in general_topic',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in podcast_series'.
  $permissions['delete terms in podcast_series'] = array(
    'name' => 'delete terms in podcast_series',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in specific_topic'.
  $permissions['delete terms in specific_topic'] = array(
    'name' => 'delete terms in specific_topic',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any podcast content'.
  $permissions['edit any podcast content'] = array(
    'name' => 'edit any podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any site_page content'.
  $permissions['edit any site_page content'] = array(
    'name' => 'edit any site_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Author' => 'Content Author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own podcast content'.
  $permissions['edit own podcast content'] = array(
    'name' => 'edit own podcast content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own site_page content'.
  $permissions['edit own site_page content'] = array(
    'name' => 'edit own site_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in article_type'.
  $permissions['edit terms in article_type'] = array(
    'name' => 'edit terms in article_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in column_name'.
  $permissions['edit terms in column_name'] = array(
    'name' => 'edit terms in column_name',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in content_genre'.
  $permissions['edit terms in content_genre'] = array(
    'name' => 'edit terms in content_genre',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in general_topic'.
  $permissions['edit terms in general_topic'] = array(
    'name' => 'edit terms in general_topic',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in podcast_series'.
  $permissions['edit terms in podcast_series'] = array(
    'name' => 'edit terms in podcast_series',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in specific_topic'.
  $permissions['edit terms in specific_topic'] = array(
    'name' => 'edit terms in specific_topic',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
