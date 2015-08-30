<?php
/**
 * @file
 * tammuz_entity_types.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tammuz_entity_types_user_default_roles() {
  $roles = array();

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 3,
  );

  return $roles;
}
