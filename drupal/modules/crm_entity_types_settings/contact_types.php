<?php

// $tab holds standard hook_menu() members
function crm_entity_types_settings_create_related_views_tab($tab)
{
    $tab['page callback'] = 'crm_entity_types_settings_view_related_cb';
    $url_components = array();
    $url_compnent_pos = 0;
    //each component is an array:		    //location in the url   string			argument pos in the callback (NULL if don't pass as arg)
    $url_components['url_contact_base']	    = array($url_compnent_pos++,    'contact',			NULL);
    $url_components['contact_id']	    = array($url_compnent_pos++,    '%crm_core_contact',	0);
    $url_components['related']		    = array($url_compnent_pos++,    'related',			NULL);
    $url_components['relation_type']	    = array($url_compnent_pos++,    $tab['relation_type'],	1);
    $url_components['relation_r_index']	    = array($url_compnent_pos++,    $tab['relation_r_index'],	2);

    return crm_entity_types_settings_create_views_tab($tab, $url_components);    
}

function crm_entity_types_settings_create_activities_views_tab($tab)
{
    $tab['page callback'] = 'crm_entity_types_settings_view_activities_cb';
    $url_components = array();
    $url_compnent_pos = 0;
    
    //each component is an array:		    //location in the url   string		    argument pos in the callback (NULL if don't pass as arg)
    $url_components['url_contact_base']	    = array($url_compnent_pos++,    'contact',		    NULL);
    $url_components['contact_id']	    = array($url_compnent_pos++,    '%crm_core_contact',    0);
    $url_components['activities']	    = array($url_compnent_pos++,    'activity',	    NULL);
    
    return crm_entity_types_settings_create_views_tab($tab, $url_components);    
    
}

function crm_entity_types_settings_create_views_tab($tab, $url_components)
{
    $url_base = 'crm-core'; //changing this you should update where comment AAA below
    $tab['page arguments'] = array();
    
    foreach($url_components as $url_component)
    {
	//0 - location in the url
	//1 - string (name)
	//2 - argument location in the callback
	if (is_numeric($url_component[2])){
	    $tab['page arguments'][$url_component[2]] = $url_component[0] + 1; //because we add $url_base in the beginning and it consists of no slashes (comment AAA)
	}
    }
    

    $tab['type'] = MENU_LOCAL_TASK;    

    $tab['menu_hook_url'] = $url_base . "/" . implode("/", array_map(function($component_arr){return $component_arr[1];}, $url_components));
    return $tab;
}

function crm_entity_types_settings_all_menu_items()
{
    return array
    (
	'contact/crm_member/0' => array(
	    'menu_hook_create_cb' => 'crm_entity_types_settings_create_related_views_tab',
	    'title' => 'Household',
	    'description' => 'Manage household of individuals',
	    'access callback' => TRUE,  //TODO!!!
	    'relation_type' => 'crm_member',
	    'relation_r_index' => 0,
	  ),
	
	'contact/crm_member/1' => array(
	    'menu_hook_create_cb' => 'crm_entity_types_settings_create_related_views_tab',
	    'title' => 'Household',
	    'description' => 'List and manage household members',
	    'access callback' => TRUE,  //TODO!!!
	    'relation_type' => 'crm_member',
	    'relation_r_index' => 1,
	  ),

	'contact/genetic_parent_of/0' => array(
	    'menu_hook_create_cb' => 'crm_entity_types_settings_create_related_views_tab',
	    'title' => 'Genetic Relations',
	    'description' => 'Tracks genetic father and mother, or sperm/egg donors',
	    'relation_type' => 'genetic_parent_of',
	    'relation_r_index' => 0,
	    'access callback' => TRUE,  //TODO!!!
        ),

	'contact/genetic_parent_of/1' => array(
	    'menu_hook_create_cb' => 'crm_entity_types_settings_create_related_views_tab',
	    'title' => 'Genetic Relations',
	    'description' => 'Tracks genetic father and mother, or sperm/egg donors',
	    'relation_type' => 'genetic_parent_of',
	    'relation_r_index' => 1,
	    'access callback' => TRUE,  //TODO!!!
        ),

	'contact/actity' => array(
	    'menu_hook_create_cb' => 'crm_entity_types_settings_create_activities_views_tab',
	    'title' => 'History',
	    'description' => 'All events relevant to this contact',
	    'access callback' => TRUE,  //TODO!!!
        ),
    );
    
}

function crm_entity_types_settings_get_pages($crm_core_object)
{
    //@TODO  introduce new tabs here, which weren't registered by hook_menu and are going to be added using menu_local_tasks_alter()
    // also override fields from the original tabs registered by hook_menu(), e.g. their weight etc.

    $pages = array(
	'child' =>
	    array('tabs' => array(
		   'crm-core/contact/%/view'=>array(),
		   'crm-core/contact/%/related/crm_member/0'=>array(),
                   'crm-core/contact/%/related/genetic_parent_of/1'=>array(),
		   'crm-core/contact/%/activity' => array(),
	       ),
	       'local_actions' => array()
	   ),
	'ip' =>
	    array('tabs' => array(
		   'crm-core/contact/%/view'=>array(),
		   'crm-core/contact/%/related/crm_member/0'=>array(),
		   'crm-core/contact/%/related/genetic_parent_of/0'=>array(),
		   'crm-core/contact/%/activity' => array(),
	       ),
	       'local_actions' => array()
	   ),
	'customer' =>
	    array('tabs' => array(
		   'crm-core/contact/%/view'=>array(),
		   'crm-core/contact/%/related/crm_member/1'=>array(),
		   'crm-core/contact/%/activity' => array(),
	       ),
	       'local_actions' => array()
	   ),
    );
    
    if (array_key_exists($crm_core_object->type, $pages))
    {
	return $pages[$crm_core_object->type];
    }
    return NULL; //array('tabs' => array(), 'local_actions' => array());
}
