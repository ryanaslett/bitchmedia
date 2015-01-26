<?php
/**
 * @file
 * bitch_issues.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bitch_issues_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create digital_download content'.
  $permissions['create digital_download content'] = array(
    'name' => 'create digital_download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create issue content'.
  $permissions['create issue content'] = array(
    'name' => 'create issue content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any digital_download content'.
  $permissions['delete any digital_download content'] = array(
    'name' => 'delete any digital_download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any issue content'.
  $permissions['delete any issue content'] = array(
    'name' => 'delete any issue content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own digital_download content'.
  $permissions['delete own digital_download content'] = array(
    'name' => 'delete own digital_download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own issue content'.
  $permissions['delete own issue content'] = array(
    'name' => 'delete own issue content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any digital_download content'.
  $permissions['edit any digital_download content'] = array(
    'name' => 'edit any digital_download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any issue content'.
  $permissions['edit any issue content'] = array(
    'name' => 'edit any issue content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own digital_download content'.
  $permissions['edit own digital_download content'] = array(
    'name' => 'edit own digital_download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own issue content'.
  $permissions['edit own issue content'] = array(
    'name' => 'edit own issue content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
