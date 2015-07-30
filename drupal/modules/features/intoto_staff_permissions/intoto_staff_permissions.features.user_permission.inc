<?php
/**
 * @file
 * intoto_staff_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function intoto_staff_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer activity types'.
  $permissions['administer activity types'] = array(
    'name' => 'administer activity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'administer contact relationship types'.
  $permissions['administer contact relationship types'] = array(
    'name' => 'administer contact relationship types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'administer contact types'.
  $permissions['administer contact types'] = array(
    'name' => 'administer contact types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'administer crm-core settings'.
  $permissions['administer crm-core settings'] = array(
    'name' => 'administer crm-core settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_ui',
  );

  // Exported permission: 'administer crm_core_activity entities'.
  $permissions['administer crm_core_activity entities'] = array(
    'name' => 'administer crm_core_activity entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'administer crm_core_contact entities'.
  $permissions['administer crm_core_contact entities'] = array(
    'name' => 'administer crm_core_contact entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_activity entities'.
  $permissions['create crm_core_activity entities'] = array(
    'name' => 'create crm_core_activity entities',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_activity entities of bundle comment'.
  $permissions['create crm_core_activity entities of bundle comment'] = array(
    'name' => 'create crm_core_activity entities of bundle comment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_activity entities of bundle meeting'.
  $permissions['create crm_core_activity entities of bundle meeting'] = array(
    'name' => 'create crm_core_activity entities of bundle meeting',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_activity entities of bundle phone_call'.
  $permissions['create crm_core_activity entities of bundle phone_call'] = array(
    'name' => 'create crm_core_activity entities of bundle phone_call',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_contact entities'.
  $permissions['create crm_core_contact entities'] = array(
    'name' => 'create crm_core_contact entities',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle customer'.
  $permissions['create crm_core_contact entities of bundle customer'] = array(
    'name' => 'create crm_core_contact entities of bundle customer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle household'.
  $permissions['create crm_core_contact entities of bundle household'] = array(
    'name' => 'create crm_core_contact entities of bundle household',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle ip'.
  $permissions['create crm_core_contact entities of bundle ip'] = array(
    'name' => 'create crm_core_contact entities of bundle ip',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle organization'.
  $permissions['create crm_core_contact entities of bundle organization'] = array(
    'name' => 'create crm_core_contact entities of bundle organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create relation entities of any contact relationship'.
  $permissions['create relation entities of any contact relationship'] = array(
    'name' => 'create relation entities of any contact relationship',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'create relation entities of bundle crm_employee'.
  $permissions['create relation entities of bundle crm_employee'] = array(
    'name' => 'create relation entities of bundle crm_employee',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'create relation entities of bundle crm_friend'.
  $permissions['create relation entities of bundle crm_friend'] = array(
    'name' => 'create relation entities of bundle crm_friend',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'create relation entities of bundle crm_member'.
  $permissions['create relation entities of bundle crm_member'] = array(
    'name' => 'create relation entities of bundle crm_member',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'delete any crm_core_activity entity of bundle comment'.
  $permissions['delete any crm_core_activity entity of bundle comment'] = array(
    'name' => 'delete any crm_core_activity entity of bundle comment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'delete any crm_core_activity entity of bundle meeting'.
  $permissions['delete any crm_core_activity entity of bundle meeting'] = array(
    'name' => 'delete any crm_core_activity entity of bundle meeting',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'delete any crm_core_activity entity of bundle phone_call'.
  $permissions['delete any crm_core_activity entity of bundle phone_call'] = array(
    'name' => 'delete any crm_core_activity entity of bundle phone_call',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle customer'.
  $permissions['delete any crm_core_contact entity of bundle customer'] = array(
    'name' => 'delete any crm_core_contact entity of bundle customer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle household'.
  $permissions['delete any crm_core_contact entity of bundle household'] = array(
    'name' => 'delete any crm_core_contact entity of bundle household',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle ip'.
  $permissions['delete any crm_core_contact entity of bundle ip'] = array(
    'name' => 'delete any crm_core_contact entity of bundle ip',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle organization'.
  $permissions['delete any crm_core_contact entity of bundle organization'] = array(
    'name' => 'delete any crm_core_contact entity of bundle organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any relation entity of bundle crm_employee'.
  $permissions['delete any relation entity of bundle crm_employee'] = array(
    'name' => 'delete any relation entity of bundle crm_employee',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'delete any relation entity of bundle crm_friend'.
  $permissions['delete any relation entity of bundle crm_friend'] = array(
    'name' => 'delete any relation entity of bundle crm_friend',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'delete any relation entity of bundle crm_member'.
  $permissions['delete any relation entity of bundle crm_member'] = array(
    'name' => 'delete any relation entity of bundle crm_member',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'edit any crm_core_activity entity'.
  $permissions['edit any crm_core_activity entity'] = array(
    'name' => 'edit any crm_core_activity entity',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_activity entity of bundle comment'.
  $permissions['edit any crm_core_activity entity of bundle comment'] = array(
    'name' => 'edit any crm_core_activity entity of bundle comment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_activity entity of bundle meeting'.
  $permissions['edit any crm_core_activity entity of bundle meeting'] = array(
    'name' => 'edit any crm_core_activity entity of bundle meeting',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_activity entity of bundle phone_call'.
  $permissions['edit any crm_core_activity entity of bundle phone_call'] = array(
    'name' => 'edit any crm_core_activity entity of bundle phone_call',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_contact entity'.
  $permissions['edit any crm_core_contact entity'] = array(
    'name' => 'edit any crm_core_contact entity',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle customer'.
  $permissions['edit any crm_core_contact entity of bundle customer'] = array(
    'name' => 'edit any crm_core_contact entity of bundle customer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle household'.
  $permissions['edit any crm_core_contact entity of bundle household'] = array(
    'name' => 'edit any crm_core_contact entity of bundle household',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle ip'.
  $permissions['edit any crm_core_contact entity of bundle ip'] = array(
    'name' => 'edit any crm_core_contact entity of bundle ip',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle organization'.
  $permissions['edit any crm_core_contact entity of bundle organization'] = array(
    'name' => 'edit any crm_core_contact entity of bundle organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any relation entity of bundle crm_employee'.
  $permissions['edit any relation entity of bundle crm_employee'] = array(
    'name' => 'edit any relation entity of bundle crm_employee',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'edit any relation entity of bundle crm_friend'.
  $permissions['edit any relation entity of bundle crm_friend'] = array(
    'name' => 'edit any relation entity of bundle crm_friend',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'edit any relation entity of bundle crm_member'.
  $permissions['edit any relation entity of bundle crm_member'] = array(
    'name' => 'edit any relation entity of bundle crm_member',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'edit relation entities of any contact relationship'.
  $permissions['edit relation entities of any contact relationship'] = array(
    'name' => 'edit relation entities of any contact relationship',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'revert contact record'.
  $permissions['revert contact record'] = array(
    'name' => 'revert contact record',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_activity entity'.
  $permissions['view any crm_core_activity entity'] = array(
    'name' => 'view any crm_core_activity entity',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_activity entity of bundle comment'.
  $permissions['view any crm_core_activity entity of bundle comment'] = array(
    'name' => 'view any crm_core_activity entity of bundle comment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_activity entity of bundle meeting'.
  $permissions['view any crm_core_activity entity of bundle meeting'] = array(
    'name' => 'view any crm_core_activity entity of bundle meeting',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_activity entity of bundle phone_call'.
  $permissions['view any crm_core_activity entity of bundle phone_call'] = array(
    'name' => 'view any crm_core_activity entity of bundle phone_call',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_contact entity'.
  $permissions['view any crm_core_contact entity'] = array(
    'name' => 'view any crm_core_contact entity',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle customer'.
  $permissions['view any crm_core_contact entity of bundle customer'] = array(
    'name' => 'view any crm_core_contact entity of bundle customer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle household'.
  $permissions['view any crm_core_contact entity of bundle household'] = array(
    'name' => 'view any crm_core_contact entity of bundle household',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle ip'.
  $permissions['view any crm_core_contact entity of bundle ip'] = array(
    'name' => 'view any crm_core_contact entity of bundle ip',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle organization'.
  $permissions['view any crm_core_contact entity of bundle organization'] = array(
    'name' => 'view any crm_core_contact entity of bundle organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any relation entity of bundle crm_employee'.
  $permissions['view any relation entity of bundle crm_employee'] = array(
    'name' => 'view any relation entity of bundle crm_employee',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'view any relation entity of bundle crm_friend'.
  $permissions['view any relation entity of bundle crm_friend'] = array(
    'name' => 'view any relation entity of bundle crm_friend',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'view any relation entity of bundle crm_member'.
  $permissions['view any relation entity of bundle crm_member'] = array(
    'name' => 'view any relation entity of bundle crm_member',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'view crm dashboard'.
  $permissions['view crm dashboard'] = array(
    'name' => 'view crm dashboard',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'crm_core_ui',
  );

  // Exported permission: 'view disabled contact types'.
  $permissions['view disabled contact types'] = array(
    'name' => 'view disabled contact types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view relation entities of any contact relationship'.
  $permissions['view relation entities of any contact relationship'] = array(
    'name' => 'view relation entities of any contact relationship',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'crm_core_relationship',
  );

  return $permissions;
}
