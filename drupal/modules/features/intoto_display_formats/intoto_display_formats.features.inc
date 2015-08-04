<?php
/**
 * @file
 * intoto_display_formats.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function intoto_display_formats_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
