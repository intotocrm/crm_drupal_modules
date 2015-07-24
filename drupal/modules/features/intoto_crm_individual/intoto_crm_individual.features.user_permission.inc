<?php
/**
 * @file
 * intoto_crm_individual.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function intoto_crm_individual_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create crm_core_contact entities of bundle individual'.
  $permissions['create crm_core_contact entities of bundle individual'] = array(
    'name' => 'create crm_core_contact entities of bundle individual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle individual'.
  $permissions['delete any crm_core_contact entity of bundle individual'] = array(
    'name' => 'delete any crm_core_contact entity of bundle individual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle individual'.
  $permissions['edit any crm_core_contact entity of bundle individual'] = array(
    'name' => 'edit any crm_core_contact entity of bundle individual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle individual'.
  $permissions['view any crm_core_contact entity of bundle individual'] = array(
    'name' => 'view any crm_core_contact entity of bundle individual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  return $permissions;
}
