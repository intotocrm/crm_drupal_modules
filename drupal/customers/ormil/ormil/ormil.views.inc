<?php
function ormil_search_api_views_query_alter (&$view, &$query)
{
	ormil_views_query_alter($view, $query);
}

function ormil_views_query_alter(&$view, &$query) {
	if ($view->name == 'search_contacts'){
		
//		dpm($query);
//		dpm($query->getKeys());
	}
	if ($view->name == 'crm_comments_by_contact' || $view->name == 'relevant_comments') {
/*
		$query->where[0]['conditions'][] = array
                                (
                                    ['field'] => 'crm_core_contact_field_data_field_activity_participants.contact_id = :crm_core_contact_contact_id',
                                    ['value'] => array
                                        (
                                            [':crm_core_contact_contact_id'] => '1'
                                        ),

                                    ['operator'] => 'formula',
                                );
*/
		$query->where[0]['type'] = 'OR';

		//dpm($query);
		//drupal_set_message("<pre>"  . print_r($query, true) . "</pre>");
	}

}


function ormil_views_pre_view(&$view, &$display_id, &$args)
{
	if ($view->name == 'relevant_comments')
	{
		$relation_id = "crm_member";
		$relation_r_index = 1;
		//$entity_type = "crm_core_contact";
		foreach($args as $id=>$arg)
		{
			//if the argument is "1" it means that we should show comments for contact id=1, and if this happens to be a household, add also the IDs for its members
			$new_args = [$arg];
			$contact_id = $arg;
			$result = relation_query('crm_core_contact', $contact_id, $relation_r_index)
				->propertyCondition('relation_type', $relation_id)
				->execute();
			$relations = relation_load_multiple(array_keys($result));

			foreach($relations as $rel_id => $relation)
			{
				$entities = array();
				foreach ($relation->endpoints[LANGUAGE_NONE] as $endpoint)
				{

				//	if (!empty($entity_type) && $endpoint['entity_type'] != $entity_type) {continue;} //this is if I want to limit to a certain entity type
					$new_args[] = $endpoint['entity_id'];
				}
				$args[$id] = implode("+", $new_args);
			}
		}
		
	}
	
}



/*
function ormil_views_pre_execute(&$view) {
	if(isset($view->name) && $view->name=="relevant_comments")
	{

		drupal_set_message("<pre>"  . print_r($view, true) . "</pre>");
	}
}
*/