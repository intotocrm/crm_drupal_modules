<?php

/**
 * @file
 * Callbacks for viewing entities.
 */

/**
 * Entity view callback.
 * 
 * @param object $entity
 *   Entity to view.
 * 
 * @return array
 *   Renderable array.
 */
function intoto_site_settings_view($entity) {
  drupal_set_title(entity_label('intoto_site_settings', $entity));

  // Return automatically generated view page.
  return entity_view('intoto_site_settings', array(entity_id('intoto_site_settings', $entity) => $entity));
}
