<?php
/**
 * @file
 * ormil_site_settings_entities.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ormil_site_settings_entities_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'intoto_site_settings-general_site_settings-field_new_leads_notify_users'.
  $field_instances['intoto_site_settings-general_site_settings-field_new_leads_notify_users'] = array(
    'bundle' => 'general_site_settings',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'intoto_site_settings',
    'field_name' => 'field_new_leads_notify_users',
    'label' => 'New Leads Notify Users',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('New Leads Notify Users');

  return $field_instances;
}
