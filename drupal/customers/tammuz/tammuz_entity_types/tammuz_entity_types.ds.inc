<?php
/**
 * @file
 * tammuz_entity_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tammuz_entity_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|surrogacy_plan|field_list';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'surrogacy_plan';
  $ds_fieldsetting->view_mode = 'field_list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['taxonomy_term|surrogacy_plan|field_list'] = $ds_fieldsetting;

  return $export;
}
