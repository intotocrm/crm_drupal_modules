<?php
/**
 * @file
 * crm_entity_types_improved.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function crm_entity_types_improved_user_default_roles() {
  $roles = array();

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 3,
  );

  return $roles;
}
