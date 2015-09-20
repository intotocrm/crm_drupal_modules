<?php
/**
 * @file
 * ormil_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ormil_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-features'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
       'bootstrap_dashboard_ormil' => array(
         'region' => 'sidebar_first',
         'status' => 1,
         'theme' => 'bootstrap_dashboard_ormil',
         'weight' => 0,
       ),
      'bootstrap_dashboard' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bootstrap_dashboard',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
        'bootstrap_dashboard_ormil' => array(
          'region' => 'sidebar_first',
          'status' => 1,
          'theme' => 'bootstrap_dashboard_ormil',
          'weight' => -1,
        ),
      'bootstrap_dashboard' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bootstrap_dashboard',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['tb_megamenu-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'tb_megamenu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap_dashboard' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'bootstrap_dashboard',
        'weight' => 0,
      ),
        'bootstrap_dashboard_ormil' => array(
          'region' => 'navigation',
          'status' => 1,
          'theme' => 'bootstrap_dashboard_ormil',
          'weight' => 0,
        ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-whats_new-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'whats_new-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap_dashboard' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bootstrap_dashboard',
        'weight' => 0,
      ),
        'bootstrap_dashboard_ormil' => array(
          'region' => 'sidebar_first',
          'status' => 1,
          'theme' => 'bootstrap_dashboard_ormil',
          'weight' => 0,
        ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
