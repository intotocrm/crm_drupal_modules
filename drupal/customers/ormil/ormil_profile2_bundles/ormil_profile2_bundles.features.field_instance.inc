<?php
/**
 * @file
 * ormil_profile2_bundles.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ormil_profile2_bundles_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'profile2-preferences-field_copy_me_on_every_mail'.
  $field_instances['profile2-preferences-field_copy_me_on_every_mail'] = array(
    'bundle' => 'preferences',
    'default_value' => array(
      0 => array(
        'value' => 'no',
      ),
    ),
    'deleted' => 0,
    'description' => 'Every mail that is originated from the system can be copied to your mailbox',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_copy_me_on_every_mail',
    'label' => 'Copy me on every mail',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'profile2-preferences-field_no_communication_alert'.
  $field_instances['profile2-preferences-field_no_communication_alert'] = array(
    'bundle' => 'preferences',
    'default_value' => array(
      0 => array(
        'value' => 30,
      ),
    ),
    'deleted' => 0,
    'description' => 'The number of days since last communication with a customer that will cause this customer to show in the \'communication required\' report.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_no_communication_alert',
    'label' => 'No Communication Alert',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => 'days',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'profile2-preferences-field_reply_to_emails'.
  $field_instances['profile2-preferences-field_reply_to_emails'] = array(
    'bundle' => 'preferences',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Additional email addresses to set the \'reply-to\' field of mails that you send to contacts.<br>When your contacts hit the <i>reply</i> button on emails you send them, these are the addresses that are going to be in the \'to\' field (in addition to your own address if you checked to use it)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_reply_to_emails',
    'label' => 'Reply-to Emails',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-preferences-field_reply_to_myself'.
  $field_instances['profile2-preferences-field_reply_to_myself'] = array(
    'bundle' => 'preferences',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'When your contacts hit the <i>reply</i> button on emails you send them, your email will be set in the \'to\' field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_reply_to_myself',
    'label' => 'Reply-to myself',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional email addresses to set the \'reply-to\' field of mails that you send to contacts.<br>When your contacts hit the <i>reply</i> button on emails you send them, these are the addresses that are going to be in the \'to\' field (in addition to your own address if you checked to use it)');
  t('Copy me on every mail');
  t('Every mail that is originated from the system can be copied to your mailbox');
  t('No Communication Alert');
  t('Reply-to Emails');
  t('Reply-to myself');
  t('The number of days since last communication with a customer that will cause this customer to show in the \'communication required\' report.');
  t('When your contacts hit the <i>reply</i> button on emails you send them, your email will be set in the \'to\' field');

  return $field_instances;
}
