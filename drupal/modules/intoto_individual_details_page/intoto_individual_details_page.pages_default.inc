<?php
/**
 * @file
 * intoto_individual_details_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function intoto_individual_details_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'basic_contact_view';
  $page->task = 'page';
  $page->admin_title = 'basic contact view';
  $page->admin_description = 'contact basic fields and comments';
  $page->path = 'crm-core/contact/%contact/details';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'view any crm_core_contact entity',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Details',
    'name' => 'navigation',
    'weight' => '-10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'contact' => array(
      'id' => 1,
      'identifier' => 'CRM Core Contact: ID',
      'name' => 'entity_id:crm_core_contact',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_basic_contact_view__panel_context_b51005f7-3661-4c63-8cfb-ab2b4defb6c5';
  $handler->task = 'page';
  $handler->subtask = 'basic_contact_view';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '52263501-24d2-4f69-ac07-7faed5597105';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-208915e1-86e6-4d38-aa43-02db30d98ac1';
    $pane->panel = 'left';
    $pane->type = 'entity_view';
    $pane->subtype = 'crm_core_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:crm_core_contact_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '208915e1-86e6-4d38-aa43-02db30d98ac1';
    $display->content['new-208915e1-86e6-4d38-aa43-02db30d98ac1'] = $pane;
    $display->panels['left'][0] = 'new-208915e1-86e6-4d38-aa43-02db30d98ac1';
    $pane = new stdClass();
    $pane->pid = 'new-1cbee470-744b-4b45-8b10-57a00b6b8f30';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'intoto_crm-add_comment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1cbee470-744b-4b45-8b10-57a00b6b8f30';
    $display->content['new-1cbee470-744b-4b45-8b10-57a00b6b8f30'] = $pane;
    $display->panels['right'][0] = 'new-1cbee470-744b-4b45-8b10-57a00b6b8f30';
    $pane = new stdClass();
    $pane->pid = 'new-e9c41568-4fef-4966-84b0-ff2cc08705f6';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'crm_comments_by_contact-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '50',
      'offset' => '0',
      'path' => '',
      'arguments' => array(
        'field_activity_participants_target_id' => '%contact:contact-id',
      ),
      'fields_override' => array(
        'activity_id' => 0,
        'contact_id' => 0,
        'nothing_1' => 0,
        'nothing_2' => 0,
        'nothing_3' => 0,
        'field_activity_date' => 1,
        'name' => 1,
        'field_severity' => 1,
        'title' => 1,
        'field_activity_notes' => 1,
        'nothing' => 1,
      ),
      'exposed' => array(
        'type' => 'comment',
      ),
      'override_title' => 1,
      'override_title_text' => 'Comments',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e9c41568-4fef-4966-84b0-ff2cc08705f6';
    $display->content['new-e9c41568-4fef-4966-84b0-ff2cc08705f6'] = $pane;
    $display->panels['right'][1] = 'new-e9c41568-4fef-4966-84b0-ff2cc08705f6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-208915e1-86e6-4d38-aa43-02db30d98ac1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['basic_contact_view'] = $page;

  return $pages;

}
