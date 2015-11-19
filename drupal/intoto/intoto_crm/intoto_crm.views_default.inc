<?php
/**
 * Implementation of hook_views_default_views().
 */
// Declare all the .view files in the views subdir that end in .view

module_load_include('inc', "intoto_crm" , 'intoto_crm_views_generator');
module_load_include('inc', "intoto_main" , 'functions');


function intoto_crm_views_default_views() {
	return intoto_get_hard_coded_views("intoto_crm");
}
