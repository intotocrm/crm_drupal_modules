<?php
/**
 * @file
 * intoto_staff_role.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function intoto_staff_role_user_default_roles() {
  $roles = array();

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 3,
  );

  return $roles;
}
