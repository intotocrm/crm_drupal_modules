<?php
/**
 * Implementation of hook_views_default_views().
 */
// Declare all the .view files in the views subdir that end in .view
function intoto_contact_header_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'intoto_contact_header'). '/views', '/.*view.*/');
  foreach ($files as $absolute => $file) {
    require $absolute;
    if (isset($view)) {
      $views[$file->name] = $view;
    }   
  }
  return $views;
}
