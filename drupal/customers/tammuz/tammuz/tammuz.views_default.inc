<?php
/**
 * Implementation of hook_views_default_views().
 * copied from https://techcommons.stanford.edu/topics/drupal/adding-default-views-and-pages-custom-module
 */
// Declare all the .view files in the views subdir that end in .view
module_load_include('inc', "intoto_main" , 'functions');
module_load_include('inc', "intoto_crm" , 'intoto_crm_views_generator');

function tammuz_views_default_views() {
	$views = intoto_get_hard_coded_views("tammuz");
	$views[] = create_related_contacts_view(
				[
					'name' => 'journey_participants',
					'description' => 'Views to show all related contacts to journey(generated view)',
					'human_name' => "Journey Participants",
					'relation_id' => "participate_in",
					'r_index' => 1, 
					'remove_text' => t("Disconnect from journey"),
				]
			);

	$views[] = create_related_contacts_view(
				[
					'name' => 'contacts_journey',
					'description' => 'Views to show all related journeys per contact',
					'human_name' => "Contact's Journeys",
					'relation_id' => "participate_in",
					'r_index' => 0, 
					'remove_text' => t("Disconnect from journey"),
				]
			);
	
	$views[] = create_related_contacts_view(
				[
					'name' => 'household_member_ips',
					'description' => 'views to show all related IPs to Household',
					'human_name' => "IPs related to Household",
					'relation_id' => "member",
					'r_index' => 1, //show from household to IP, not the other-way-around
					'remove_text' => "Disconnect this IP from the household",
				]
			);
	
	$views[] = create_related_contacts_view(
				[
					'name' => 'ip_memeber_households',
					'description' => 'views to show all related households to IP',
					'human_name' => "Households related to an IP",
					'relation_id' => "member",
					'r_index' => 0, //show from IP to household, not the other-way-around
					'remove_text' => "Disconnect this IP from the household",
				]
			);
	
	return $views;
}
	 
