<?php
/**
 * @file
 * intoto_staff_role.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function intoto_staff_role_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer ticker content'.
  $permissions['administer ticker content'] = array(
    'name' => 'administer ticker content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ticker',
  );

  // Exported permission: 'view ticker content'.
  $permissions['view ticker content'] = array(
    'name' => 'view ticker content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'ticker',
  );

  return $permissions;
}
