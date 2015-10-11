<?php

function ormil_views_query_alter(&$view, &$query) {
		drupal_set_message($view->name);
		print "<br>";
/*	if ($view->name == 'crm_comments_by_contact') {
		print_r($query);
		$query->where[0]['type'] = 'OR';
	}
*/
}

