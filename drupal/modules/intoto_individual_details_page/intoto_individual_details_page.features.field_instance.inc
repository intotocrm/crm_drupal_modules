<?php
/**
 * @file
 * intoto_individual_details_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function intoto_individual_details_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'crm_core_activity-comment-field_activity_date'
  $field_instances['crm_core_activity-comment-field_activity_date'] = array(
    'bundle' => 'comment',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_date',
    'label' => 'Date',
    'required' => FALSE,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'crm_core_activity-comment-field_activity_notes'
  $field_instances['crm_core_activity-comment-field_activity_notes'] = array(
    'bundle' => 'comment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_notes',
    'label' => 'Notes',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'crm_core_activity-comment-field_activity_participants'
  $field_instances['crm_core_activity-comment-field_activity_participants'] = array(
    'bundle' => 'comment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_participants',
    'label' => 'Participants',
    'required' => TRUE,
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
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'crm_core_activity-comment-field_severity'
  $field_instances['crm_core_activity-comment-field_severity'] = array(
    'bundle' => 'comment',
    'default_value' => array(
      0 => array(
        'tid' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'This setting sets the way this comment is shown and where it\'s shown. You can later sort comments according to this',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_severity',
    'label' => 'Severity',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date');
  t('Notes');
  t('Participants');
  t('Severity');
  t('This setting sets the way this comment is shown and where it\'s shown. You can later sort comments according to this');

  return $field_instances;
}
