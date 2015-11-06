<?php
/**
 * @file
 * ormil_profile2_bundles.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ormil_profile2_bundles_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_copy_me_on_every_mail'.
  $field_bases['field_copy_me_on_every_mail'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_copy_me_on_every_mail',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'no' => 'No',
        'cc' => 'CC me',
        'bcc' => 'BCC me',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 1,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_no_communication_alert'.
  $field_bases['field_no_communication_alert'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_no_communication_alert',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'profile2_private' => 1,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_reply_to_emails'.
  $field_bases['field_reply_to_emails'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_reply_to_emails',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(
      'profile2_private' => 1,
    ),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_reply_to_myself'.
  $field_bases['field_reply_to_myself'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_reply_to_myself',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
