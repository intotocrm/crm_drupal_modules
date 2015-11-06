<?php

/**
 * @file
 * Describe entity and controller classes for entity, entity type and admin UI.
 */

/**
 * Intoto Site Settings class.
 */
class IntotoSiteSettings extends Entity {
  /**
   * Define the label of the entity.
   */
  protected function defaultLabel() {
    return t("Site Settings");//$this->title;
  }

  /**
   * Specify the default uri, which is picked up by uri() by default.
   */
  protected function defaultUri() {
    return array('path' => 'intoto_site_settings/' . $this->identifier());
  }
}

/**
 * Intoto Site Settings controller class.
 */
class IntotoSiteSettingsController extends EntityAPIController {
  /**
   * Build a structured array representing the entity's content.
   */
  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    // Make "description" property themed like default fields.
//    $content['description'] = array(
//      '#theme' => 'field',
//      '#weight' => 0,
//      '#title' => t('Description'),
//      '#access' => TRUE,
//      '#label_display' => 'above',
//      '#view_mode' => 'full',
//      '#language' => LANGUAGE_NONE,
//      '#field_name' => 'field_fake_description',
//      '#field_type' => 'text',
//      '#entity_type' => 'intoto_site_settings',
//      '#bundle' => $entity->type,
//      '#items' => array(array('value' => $entity->description)),
//      '#formatter' => 'text_default',
//      0 => array('#markup' => check_plain($entity->description)),
//    );

    return parent::buildContent($entity, $view_mode, $langcode, $content);
  }
}

/**
 * Intoto Site Settings Type class.
 */
class IntotoSiteSettingsType extends Entity {
  public $type;
  public $label;
  public $weight = 0;

  /**
   * Overridden constructor.
   */
  public function __construct($values = array()) {
    parent::__construct($values, 'intoto_site_settings_type');
  }

  /**
   * Determine if the entity is locked.
   */
  public function isLocked() {
    return isset($this->status) && empty($this->is_new) && (($this->status & ENTITY_IN_CODE) || ($this->status & ENTITY_FIXED));
  }
}

/**
 * Intoto Site Settings Type controller class.
 */
class IntotoSiteSettingsTypeController extends EntityAPIControllerExportable {
  /**
   * Rebuild menu after editing entity bundles.
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    parent::save($entity, $transaction);
    // Rebuild menu registry.
    variable_set('menu_rebuild_needed', TRUE);
  }
}

/**
 * Intoto Site Settings Type UI controller class.
 */
class IntotoSiteSettingsTypeUiController extends EntityDefaultUIController {
  /**
   * Override hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['description'] = 'Manage Intoto Site Settings Types.';
    return $items;
  }
}
