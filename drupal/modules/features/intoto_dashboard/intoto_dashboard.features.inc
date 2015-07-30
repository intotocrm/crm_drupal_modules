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
    'cache' => 0,
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
      'block_2' => array(
        'module' => 'block',
        'delta' => 2,
        'region' => 2,
        'movable' => 1,
        'status' => 0,
        'open' => 1,
        'closable' => 1,
        'title' => 'static text 2',
        'weight' => -17,
      ),
      'system_powered-by' => array(
        'module' => 'system',
        'delta' => 'powered-by',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -16,
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
    'widths' => array(),
    'title' => 'Home',
    'path' => 'home',
    'menu' => 0,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => array(
      0 => 'staff',
    ),
  );


  return $homeboxes;
}
