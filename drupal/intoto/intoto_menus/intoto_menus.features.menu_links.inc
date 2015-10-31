<?php
/**
 * @file
 * intoto_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function intoto_menus_menu_default_menu_links() {
  $menu_links = array();

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

  // Translatables
  // Included for use with string extractors like potx.
  t('Add');

  return $menu_links;
}
