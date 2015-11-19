<?php
module_load_include('inc', "intoto_main" , 'functions');
module_load_include('inc', "intoto_crm" , 'intoto_crm_views_generator');

/**
 * Implementation of hook_views_default_views().
 * copied from https://techcommons.stanford.edu/topics/drupal/adding-default-views-and-pages-custom-module
 */
// Declare all the .view files in the views subdir that end in .view

function ormil_views_default_views() {
	$views = intoto_get_hard_coded_views("ormil");
	$view_crm_member = create_related_contacts_view(
				[
					'name' => 'crm_member_contacts',
					'description' => 'views to show all related IPs to Household',
					'human_name' => "IPs related to Household",
					'relation_id' => "crm_member",
					'r_index' => 1, //show from household to IP, not the other-way-around
					'remove_text' => "Disconnect this IP from the household",
				]
			);
	$views[] = $view_crm_member;
	return $views;
}
