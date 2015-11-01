<?php
/**
 * @file
 * intoto_dashboard.features.inc
 */

/**
 * Implements hook_homebox().
 */
function intoto_dashboard_homebox() {
  $homeboxes = array();

  $homeboxes['crm_dashboard'] = array(
    'regions' => 3,
    'cache' => 1,
    'color' => 0,
    'colors' => array(
      0 => '#E4F0F8',
      1 => '#E4F0F8',
      2 => '#E4F0F8',
      3 => '#E4F0F8',
      4 => '#E4F0F8',
      5 => '#E4F0F8',
    ),
    'blocks' => array(
      'ormil_customers_summary' => array(
        'module' => 'ormil',
        'delta' => 'customers_summary',
        'region' => 3,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -27,
      ),
      'views_new_leads-block' => array(
        'module' => 'views',
        'delta' => 'new_leads-block',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -26,
      ),
      'block_1' => array(
        'module' => 'block',
        'delta' => 1,
        'region' => 1,
        'movable' => 1,
        'status' => 0,
        'open' => 1,
        'closable' => 1,
        'title' => 'static text 1',
        'weight' => -17,
      ),
      'views_siblings-block' => array(
        'module' => 'views',
        'delta' => 'siblings-block',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -16,
      ),
    ),
    'widths' => array(
      1 => 40,
      2 => 20,
      3 => 40,
    ),
    'title' => 'Home',
    'path' => 'home',
    'menu' => 0,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => array(
      0 => 'staff',
      1 => 'Staff Read Only',
    ),
  );


  return $homeboxes;
}
