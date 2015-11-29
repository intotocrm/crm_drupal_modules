<?php
/**
 * @file
 * ormil_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ormil_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features_customers:report/customer
  $menu_links['features_customers:report/customer'] = array(
    'menu_name' => 'features',
    'link_path' => 'report/customer',
    'router_path' => 'report/%',
    'link_title' => 'Customers',
    'options' => array(
      'attributes' => array(
        'title' => 'Browse customers',
      ),
      'identifier' => 'features_customers:report/customer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: features_intended-parents:report/ips
  $menu_links['features_intended-parents:report/ips'] = array(
    'menu_name' => 'features',
    'link_path' => 'report/ips',
    'router_path' => 'report/%',
    'link_title' => 'Intended Parents',
    'options' => array(
      'attributes' => array(
        'title' => 'Lists Intended Parents',
      ),
      'identifier' => 'features_intended-parents:report/ips',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_add:<nolink>
  $menu_links['main-menu_add:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Add',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_customer:crm-core/contact/add/customer
  $menu_links['main-menu_customer:crm-core/contact/add/customer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'crm-core/contact/add/customer',
    'router_path' => 'crm-core/contact/add',
    'link_title' => 'Customer',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a new household (customer)',
      ),
      'identifier' => 'main-menu_customer:crm-core/contact/add/customer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_add:<nolink>',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_ip:crm-core/contact/add/ip
  $menu_links['main-menu_ip:crm-core/contact/add/ip'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'crm-core/contact/add/ip',
    'router_path' => 'crm-core/contact/add',
    'link_title' => 'IP',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a new Intended Parent',
      ),
      'identifier' => 'main-menu_ip:crm-core/contact/add/ip',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_add:<nolink>',
  );
  // Exported menu link: main-menu_quick-add-household:add/household
  $menu_links['main-menu_quick-add-household:add/household'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add/household',
    'router_path' => 'add/household',
    'link_title' => 'Quick Add Household',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_quick-add-household:add/household',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_add:<nolink>',
  );
  // Exported menu link: user-menu_:profile-preferences
  $menu_links['user-menu_:profile-preferences'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'profile-preferences',
    'router_path' => 'profile-preferences',
    'link_title' => '',
    'options' => array(
      'identifier' => 'user-menu_:profile-preferences',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'user-menu_user:<nolink>',
  );
  // Exported menu link: user-menu_my-preferences:my/preferences
  $menu_links['user-menu_my-preferences:my/preferences'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my/preferences',
    'router_path' => 'my/%',
    'link_title' => 'My Preferences',
    'options' => array(
      'attributes' => array(
        'title' => 'Preferences for current user',
      ),
      'identifier' => 'user-menu_my-preferences:my/preferences',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'user-menu_user:<nolink>',
  );
  // Exported menu link: user-menu_user-account:account
  $menu_links['user-menu_user-account:account'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'account',
    'router_path' => 'account',
    'link_title' => 'User Account',
    'options' => array(
      'attributes' => array(
        'title' => 'Set personal user account settings',
      ),
      'identifier' => 'user-menu_user-account:account',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'user-menu_user:<nolink>',
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User Account',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add');
  t('Customer');
  t('Customers');
  t('Home');
  t('IP');
  t('Intended Parents');
  t('Log out');
  t('My Preferences');
  t('Quick Add Household');
  t('User Account');

  return $menu_links;
}
