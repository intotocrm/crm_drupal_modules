<?php
/**
 * @file
 * intoto_household_tab_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function intoto_household_tab_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'try_contexts';
  $page->task = 'page';
  $page->admin_title = 'household';
  $page->admin_description = 'page that describes house hold of individual (IP, child)';
  $page->path = 'crm-core/contact/%contact/household';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:crm_core_contact',
        'settings' => array(
          'type' => array(
            'child' => 'child',
            'customer' => 'customer',
            'ip' => 'ip',
          ),
        ),
        'context' => 'argument_entity_id:crm_core_contact_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'view any crm_core_contact entity',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Household',
    'name' => 'navigation',
    'weight' => '1',
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
  $handler->name = 'page_try_contexts__panel_context_98363fbc-772f-4a5b-a483-53074ff5fef0';
  $handler->task = 'page';
  $handler->subtask = 'try_contexts';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'household for individuals',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'or',
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:crm_core_contact',
          'settings' => array(
            'type' => array(
              'child' => 'child',
              'ip' => 'ip',
            ),
          ),
          'context' => 'argument_entity_id:crm_core_contact_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%contact:contact_name';
  $display->uuid = '3b1e69d6-f23c-4d9f-a24d-c90891310363';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-18c48cb0-07da-4072-8c37-b5bbc18da966';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'household_s_of_individual';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'context' => array(
        0 => 'argument_entity_id:crm_core_contact_1.contact-id',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '18c48cb0-07da-4072-8c37-b5bbc18da966';
    $display->content['new-18c48cb0-07da-4072-8c37-b5bbc18da966'] = $pane;
    $display->panels['left'][0] = 'new-18c48cb0-07da-4072-8c37-b5bbc18da966';
    $pane = new stdClass();
    $pane->pid = 'new-cc0fbae0-900d-4e0c-8cd1-76c2dcb1ab4f';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'siblings-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '9',
      'offset' => '0',
      'path' => '',
      'arguments' => array(
        'contact_id' => '%contact:contact-id',
      ),
      'fields_override' => array(
        'field_image' => 1,
        'contact_id' => 0,
        'contact_name' => 1,
      ),
      'override_title' => 0,
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
    $pane->uuid = 'cc0fbae0-900d-4e0c-8cd1-76c2dcb1ab4f';
    $display->content['new-cc0fbae0-900d-4e0c-8cd1-76c2dcb1ab4f'] = $pane;
    $display->panels['right'][0] = 'new-cc0fbae0-900d-4e0c-8cd1-76c2dcb1ab4f';
    $pane = new stdClass();
    $pane->pid = 'new-a506af2e-f846-4d63-8f49-2a33f01b42aa';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'intoto_crm-add_household';
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
    $pane->uuid = 'a506af2e-f846-4d63-8f49-2a33f01b42aa';
    $display->content['new-a506af2e-f846-4d63-8f49-2a33f01b42aa'] = $pane;
    $display->panels['top'][0] = 'new-a506af2e-f846-4d63-8f49-2a33f01b42aa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_try_contexts__panel_context_1bd5975d-a072-4781-bc86-dde28a27a829';
  $handler->task = 'page';
  $handler->subtask = 'try_contexts';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'household page for household',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'or',
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:crm_core_contact',
          'settings' => array(
            'type' => array(
              'customer' => 'customer',
            ),
          ),
          'context' => 'argument_entity_id:crm_core_contact_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3b1e69d6-f23c-4d9f-a24d-c90891310363';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-18c48cb0-07da-4072-8c37-b5bbc18da966';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'household_s_of_individual';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'context' => array(
        0 => 'argument_entity_id:crm_core_contact_1.contact-id',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '18c48cb0-07da-4072-8c37-b5bbc18da966';
    $display->content['new-18c48cb0-07da-4072-8c37-b5bbc18da966'] = $pane;
    $display->panels['left'][0] = 'new-18c48cb0-07da-4072-8c37-b5bbc18da966';
    $pane = new stdClass();
    $pane->pid = 'new-2803903b-5ab0-4886-b3d3-319bde968902';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'siblings-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '9',
      'offset' => '0',
      'path' => '',
      'arguments' => array(
        'contact_id' => '%contact:contact-id',
      ),
      'fields_override' => array(
        'field_image' => 1,
        'contact_id' => 0,
        'contact_name' => 1,
      ),
      'override_title' => 0,
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
    $pane->uuid = '2803903b-5ab0-4886-b3d3-319bde968902';
    $display->content['new-2803903b-5ab0-4886-b3d3-319bde968902'] = $pane;
    $display->panels['right'][0] = 'new-2803903b-5ab0-4886-b3d3-319bde968902';
    $pane = new stdClass();
    $pane->pid = 'new-ea5c9c76-eb5d-4428-a4ef-903c81293da2';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'tammuz_crm-control_household';
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
    $pane->uuid = 'ea5c9c76-eb5d-4428-a4ef-903c81293da2';
    $display->content['new-ea5c9c76-eb5d-4428-a4ef-903c81293da2'] = $pane;
    $display->panels['top'][0] = 'new-ea5c9c76-eb5d-4428-a4ef-903c81293da2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['try_contexts'] = $page;

  return $pages;

}
