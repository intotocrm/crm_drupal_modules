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

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access relations'.
  $permissions['access relations'] = array(
    'name' => 'access relations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer activity types'.
  $permissions['administer activity types'] = array(
    'name' => 'administer activity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
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

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
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

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer homebox'.
  $permissions['administer homebox'] = array(
    'name' => 'administer homebox',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'homebox',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer modules export'.
  $permissions['administer modules export'] = array(
    'name' => 'administer modules export',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_export',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer relation types'.
  $permissions['administer relation types'] = array(
    'name' => 'administer relation types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'administer relations'.
  $permissions['administer relations'] = array(
    'name' => 'administer relations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer tb_megamenu'.
  $permissions['administer tb_megamenu'] = array(
    'name' => 'administer tb_megamenu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tb_megamenu',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
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

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
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

  // Exported permission: 'create relations'.
  $permissions['create relations'] = array(
    'name' => 'create relations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
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

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
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

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete relations'.
  $permissions['delete relations'] = array(
    'name' => 'delete relations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in serverity'.
  $permissions['delete terms in serverity'] = array(
    'name' => 'delete terms in serverity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
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

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
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

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit relation entities of any contact relationship'.
  $permissions['edit relation entities of any contact relationship'] = array(
    'name' => 'edit relation entities of any contact relationship',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'edit relations'.
  $permissions['edit relations'] = array(
    'name' => 'edit relations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'edit terms in serverity'.
  $permissions['edit terms in serverity'] = array(
    'name' => 'edit terms in serverity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'export relation types'.
  $permissions['export relation types'] = array(
    'name' => 'export relation types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert contact record'.
  $permissions['revert contact record'] = array(
    'name' => 'revert contact record',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
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

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
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

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
