<?php

/**
 * @file
 * Describe entity and controller classes for entity, entity type and admin UI.
 */

/**
 * Ticker Entity class.
 */
class TickerEntity extends Entity {
  /**
   * Define the label of the entity.
   */
  protected function defaultLabel() {
    return $this->title;
  }

  /**
   * Specify the default uri, which is picked up by uri() by default.
   */
  protected function defaultUri() {
    return array('path' => 'ticker/' . $this->identifier());
  }
}

/**
 * Ticker Entity controller class.
 */
class TickerEntityController extends EntityAPIController {
  /**
   * Build a structured array representing the entity's content.
   */
  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    // Make "description" property themed like default fields.
    $content['description'] = array(
      '#theme' => 'field',
      '#weight' => 0,
      '#title' => t('Description'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => LANGUAGE_NONE,
      '#field_name' => 'field_fake_description',
      '#field_type' => 'text',
      '#entity_type' => 'ticker',
      '#bundle' => $entity->type,
      '#items' => array(array('value' => $entity->description)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain($entity->description)),
    );

    return parent::buildContent($entity, $view_mode, $langcode, $content);
  }
}

/**
 * Ticker Entity Type class.
 */
class TickerEntityType extends Entity {
  public $type;
  public $label;
  public $weight = 0;

  /**
   * Overridden constructor.
   */
  public function __construct($values = array()) {
    parent::__construct($values, 'ticker_type');
  }

  /**
   * Determine if the entity is locked.
   */
  public function isLocked() {
    return isset($this->status) && empty($this->is_new) && (($this->status & ENTITY_IN_CODE) || ($this->status & ENTITY_FIXED));
  }
}

/**
 * Ticker Entity Type controller class.
 */
class TickerEntityTypeController extends EntityAPIControllerExportable {
  /**
   * Rebuild menu after editing entity bundles.
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    parent::save($entity, $transaction);
    // Rebuild menu registry.
    variable_set('menu_rebuild_needed', TRUE);
  }

 public function delete($ids, DatabaseTransaction $transaction = NULL) {
	 drush_print("in delete for ids " . print_r($ids,true));
  $entities = $ids ? $this->load($ids) : FALSE;
  if (!$entities) {
    // Do nothing, in case invalid or no ids have been passed.
    return;
  }
  // This transaction causes troubles on MySQL, see
  // http://drupal.org/node/1007830. So we deactivate this by default until
  // is shipped in a point release.
  // $transaction = isset($transaction) ? $transaction : db_transaction();

  try {
    $ids = array_keys($entities);

    db_delete($this->entityInfo['base table'])
        ->condition($this->idKey, $ids, 'IN')
        ->execute();

    if (isset($this->revisionTable)) {
      db_delete($this->revisionTable)
          ->condition($this->idKey, $ids, 'IN')
          ->execute();
    }
    // Reset the cache as soon as the changes have been applied.
    $this->resetCache($ids);

    foreach ($entities as $id => $entity) {
      $this->invoke('delete', $entity);
    }
    // Ignore slave server temporarily.
    db_ignore_slave();
  }
  catch (Exception $e) {
    if (isset($transaction)) {
      $transaction->rollback();
    }
    watchdog_exception($this->entityType, $e);
    throw $e;
  }
}
  
  
}

/**
 * Ticker Entity Type UI controller class.
 */
class TickerEntityTypeUiController extends EntityDefaultUIController {
  /**
   * Override hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['description'] = 'Manage Ticker Types.';
    return $items;
  }
}
