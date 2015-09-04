<?php
/**
 * @file
 * intoto_staff_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function intoto_staff_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Staff Read Only.
  $roles['Staff Read Only'] = array(
    'name' => 'Staff Read Only',
    'weight' => 4,
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 3,
  );

  return $roles;
}
