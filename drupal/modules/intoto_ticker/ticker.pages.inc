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
function ticker_view($entity) {
  drupal_set_title(entity_label('ticker', $entity));

  // Return automatically generated view page.
  return entity_view('ticker', array(entity_id('ticker', $entity) => $entity));
}
