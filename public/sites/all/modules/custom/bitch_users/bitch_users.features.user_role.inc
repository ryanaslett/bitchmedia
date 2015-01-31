<?php
/**
 * @file
 * bitch_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bitch_users_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 26,
  );

  // Exported role: Content Author.
  $roles['Content Author'] = array(
    'name' => 'Content Author',
    'weight' => 23,
  );

  // Exported role: Donor.
  $roles['Donor'] = array(
    'name' => 'Donor',
    'weight' => 4,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 22,
  );

  // Exported role: Former Content Author.
  $roles['Former Content Author'] = array(
    'name' => 'Former Content Author',
    'weight' => 24,
  );

  // Exported role: PDMG.
  $roles['PDMG'] = array(
    'name' => 'PDMG',
    'weight' => 57,
  );

  // Exported role: Subscriber.
  $roles['Subscriber'] = array(
    'name' => 'Subscriber',
    'weight' => 5,
  );

  // Exported role: Sustainer.
  $roles['Sustainer'] = array(
    'name' => 'Sustainer',
    'weight' => 29,
  );

  // Exported role: privileged user.
  $roles['privileged user'] = array(
    'name' => 'privileged user',
    'weight' => 45,
  );

  // Exported role: spam hunter.
  $roles['spam hunter'] = array(
    'name' => 'spam hunter',
    'weight' => 55,
  );

  return $roles;
}
