<?php
/**
 * @file
 * ormil_forms.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ormil_forms_menu_default_menu_links() {
  $menu_links = array();

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

  // Translatables
  // Included for use with string extractors like potx.
  t('Quick Add Household');

  return $menu_links;
}
