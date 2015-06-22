<?php
/**
 * @file
 * crm_entity_types_improved.file_type.inc
 */

/**
 * Implements hook_file_default_types().
 */
function crm_entity_types_improved_file_default_types() {
  $export = array();

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'crm_document';
  $file_type->label = 'Document';
  $file_type->description = 'Scanned or original file related to one or more contacts.';
  $file_type->mimetypes = array(
    0 => 'image/*',
    1 => 'text/plain',
    2 => 'application/msword',
    3 => 'application/vnd.ms-excel',
    4 => 'application/pdf',
    5 => 'application/vnd.ms-powerpoint',
    6 => 'application/vnd.oasis.opendocument.text',
    7 => 'application/vnd.oasis.opendocument.spreadsheet',
    8 => 'application/vnd.oasis.opendocument.presentation',
    9 => 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet',
    10 => 'application/vnd.openxmlformats-officedocument.presentationml.presentation',
    11 => 'application/vnd.openxmlformats-officedocument.wordprocessingml.document',
  );
  $export['crm_document'] = $file_type;

  return $export;
}
