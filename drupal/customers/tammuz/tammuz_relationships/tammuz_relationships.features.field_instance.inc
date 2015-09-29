<?php
/**
 * @file
 * tammuz_relationships.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function tammuz_relationships_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'relation-created_in-endpoints'
  $field_instances['relation-created_in-endpoints'] = array(
    'bundle' => 'created_in',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'comment' => 'default',
            'country' => 'default',
            'crm_core_activity' => 'default',
            'crm_core_activity_type' => 'default',
            'crm_core_contact' => 'default',
            'crm_core_contact_type' => 'default',
            'field_collection_item' => 'default',
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'rules_config' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'ticker' => 'default',
            'ticker_type' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'relation-crm_employee-crm_core_relationship_status'
  $field_instances['relation-crm_employee-crm_core_relationship_status'] = array(
    'bundle' => 'crm_employee',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'crm_core_relationship_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'relation-crm_employee-endpoints'
  $field_instances['relation-crm_employee-endpoints'] = array(
    'bundle' => 'crm_employee',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'comment' => 'default',
            'country' => 'default',
            'crm_core_activity' => 'default',
            'crm_core_activity_type' => 'default',
            'crm_core_contact' => 'default',
            'crm_core_contact_type' => 'default',
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-crm_friend-crm_core_relationship_status'
  $field_instances['relation-crm_friend-crm_core_relationship_status'] = array(
    'bundle' => 'crm_friend',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'crm_core_relationship_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'relation-crm_friend-endpoints'
  $field_instances['relation-crm_friend-endpoints'] = array(
    'bundle' => 'crm_friend',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'comment' => 'default',
            'country' => 'default',
            'crm_core_activity' => 'default',
            'crm_core_activity_type' => 'default',
            'crm_core_contact' => 'default',
            'crm_core_contact_type' => 'default',
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-crm_member-crm_core_relationship_status'
  $field_instances['relation-crm_member-crm_core_relationship_status'] = array(
    'bundle' => 'crm_member',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'crm_core_relationship_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'relation-crm_member-endpoints'
  $field_instances['relation-crm_member-endpoints'] = array(
    'bundle' => 'crm_member',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'comment' => 'default',
            'country' => 'default',
            'crm_core_activity' => 'default',
            'crm_core_activity_type' => 'default',
            'crm_core_contact' => 'default',
            'crm_core_contact_type' => 'default',
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-genetic_parent_of-endpoints'
  $field_instances['relation-genetic_parent_of-endpoints'] = array(
    'bundle' => 'genetic_parent_of',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'comment' => 'default',
            'country' => 'default',
            'crm_core_activity' => 'default',
            'crm_core_activity_type' => 'default',
            'crm_core_contact' => 'default',
            'crm_core_contact_type' => 'default',
            'field_collection_item' => 'default',
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'rules_config' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'ticker' => 'default',
            'ticker_type' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-own-endpoints'
  $field_instances['relation-own-endpoints'] = array(
    'bundle' => 'own',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'comment' => 'default',
            'country' => 'default',
            'crm_core_activity' => 'default',
            'crm_core_activity_type' => 'default',
            'crm_core_contact' => 'default',
            'crm_core_contact_type' => 'default',
            'field_collection_item' => 'default',
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'rules_config' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'ticker' => 'default',
            'ticker_type' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-participate_in-endpoints'
  $field_instances['relation-participate_in-endpoints'] = array(
    'bundle' => 'participate_in',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'comment' => 'default',
            'country' => 'default',
            'crm_core_activity' => 'default',
            'crm_core_activity_type' => 'default',
            'crm_core_contact' => 'default',
            'crm_core_contact_type' => 'default',
            'field_collection_item' => 'default',
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'rules_config' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'ticker' => 'default',
            'ticker_type' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'relation-preserved_in-endpoints'
  $field_instances['relation-preserved_in-endpoints'] = array(
    'bundle' => 'preserved_in',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_endpoint',
        'settings' => array(
          'view_modes' => array(
            'comment' => 'default',
            'country' => 'default',
            'crm_core_activity' => 'default',
            'crm_core_activity_type' => 'default',
            'crm_core_contact' => 'default',
            'crm_core_contact_type' => 'default',
            'field_collection_item' => 'default',
            'file' => 'default',
            'node' => 'default',
            'relation' => 'default',
            'rules_config' => 'default',
            'taxonomy_term' => 'default',
            'taxonomy_vocabulary' => 'default',
            'ticker' => 'default',
            'ticker_type' => 'default',
            'user' => 'default',
          ),
        ),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'relation',
    'field_name' => 'endpoints',
    'label' => 'endpoints',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_endpoint',
      'settings' => array(),
      'type' => 'relation_endpoint',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Status');
  t('endpoints');

  return $field_instances;
}
