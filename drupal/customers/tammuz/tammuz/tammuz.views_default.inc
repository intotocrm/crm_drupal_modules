<?php
/**
 * Implementation of hook_views_default_views().
 * copied from https://techcommons.stanford.edu/topics/drupal/adding-default-views-and-pages-custom-module
 */
// Declare all the .view files in the views subdir that end in .view
function tammuz_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'tammuz'). '/views', '/.*view.*/');
  $views = [];
  foreach ($files as $absolute => $file) {
    require $absolute;
    if (isset($view)) {
      $views[$file->name] = $view;
    }   
  }
  return $views;
}
