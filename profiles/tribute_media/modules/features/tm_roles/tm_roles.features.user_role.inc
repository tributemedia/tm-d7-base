<?php
/**
 * @file
 * tm_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tm_roles_user_default_roles() {
  $roles = array();

  // Exported role: Tech Support.
  $roles['Tech Support'] = array(
    'name' => 'Tech Support',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
