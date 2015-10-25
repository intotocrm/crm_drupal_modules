<?php

/* 
 * this file is for the process of creating new contact as a related contact to an existing one.
 * for example: in the household tab of a customer, you can add relationship "member of household" by using the autocomplete
 * textbox taken from the crm-core add relationship form
 * or you can push the "Add New" button which will send you to the New Contact form, which will trigger the creation of a new relationship upon "Save".
 */


/*
 * we're using crm-core standard relationship form but alter it:
 * - hide the field of the source (or target) contact id, instead of just make it disabled
 * - 
 */
function intoto_crm_form_crm_core_relationship_form_alter(&$form, &$form_state, $form_id)
{
	//This form is usually embedded in a contact's page, no need to see where it is being related from
	$fields = ['source_contact', 'destination_contact'];
	$contact_id = $form['relationship_type']['#value']->crm_core_contact->contact_id;
	$reverse = isset($form['reverse']['#value']) ? $form['reverse']['#value'] : 0;
	if(isset($form[$fields[$reverse]]))
	{
		$form[$fields[$reverse]] ['#type'] = 'value'; //value instead of textfield , which means HIDE it.
	}
	unset ($form['relationship_type_label']);
	
	//find out which bundles are possible for addition as "new"
	$relationship_type = $form['#bundle'];

	$types = relation_get_types(array($relationship_type));
	$current_type = array_pop($types);

	$direction_descr = ['target_bundles', 'source_bundles'][$reverse];
	$bundles = $current_type -> $direction_descr;
	$form_state['bundles'] = $bundles;

	$bundles_info = field_info_bundles(NULL);

	if (isset($form['actions']['submit']['#value']))
	{
		$form['actions']['submit']['#value'] = t("Add Existing");
//		$form['actions']['submit']['#attributes'] = ['class' => array('btn-primary')];
		$form['actions']['submit']['#validate'] = $form['#validate'];
		unset($form['#validate']);
	}	
	//remove "submit" out of 'actions' so it is not inlined with other buttons
	$form['submit'] = $form['actions']['submit'];
	unset ($form['actions']['submit']);	

	$form['explain_new'] = ['#type' => 'item',// '#markup'=> "",
							'#title' => t('or create a new contact'),
						];
//		'source_contact' => $form['source_contact'],
//		'destination_contact' => $form['destination_contact'],
//		'submit' => $form['actions']['submit'],
//	unset ($form['actions']['submit']);
//	unset ($form['destination_contact']);
//	unset ($form['source_contact']);
	
	//some additional HTML aid. can be done using container form API objects, but then moving existing fields into containers
	//might cause problems in _validate() and _submit()
	$form['container_open1'] = ['#markup' => '<div class="well">'];
	$form['container_close1'] = ['#markup' => '</div>'];
	$form['container_open2'] = ['#markup' => '<div class="well">'];
//	$form['container_close2'] = ['#markup' => '</div><a class="overlay" name="add_relation" rel="" href="http://www.veripool.org/wiki/verilog-mode">overlay link</a>']; ///crm-core/contact/392
//	$form['container_close2'] = ['#markup' => '</div><a class="btn btn-success" name="add_relation" rel="" href="http://www.veripool.org/wiki/verilog-mode">overlay link</a>']; ///crm-core/contact/392
	$form['container_close2'] = ['#markup' => '</div>'];
	
	$form['source_contact']['#attributes']['placeholder'] = t('type name of contact');
	$form['destination_contact']['#attributes']['placeholder'] = t('type name of contact');
	
	$form['destination_contact']['#title'] = $form['source_contact']['#title'] = t('Select an existing contact');
	
	$weight = 0;
	$form['container_open1']['#weight'] = ++$weight;
	$form['source_contact']['#weight'] = ++$weight;
	$form['destination_contact']['#weight'] = ++$weight;
	$form['submit']['#weight'] = ++$weight;
	$form['container_close1']['#weight'] = ++$weight;
	$form['container_open2']['#weight'] = ++$weight;
	$form['explain_new']['#weight'] = ++$weight;
	foreach ($bundles as $bundle){
		$bundle_parts = explode(":", $bundle);
		$entity_type = $bundle_parts[0];
		$bundle_id = $bundle_parts[1];
		//rename button
		$bundle_label = $bundles_info[$entity_type][$bundle_id]['label'];


//		if (!isset($form['actions']))
//		{
//			$form['actions'] = [];
//		}

		//add button for creating new related contact
		$destination = drupal_get_destination();
		$destination  = $destination['destination'];
		$form['add_new' . $bundle] = 
		[
//			'#type' => 'button',
//			'#value' => t("Add New") . " " . $bundle_label,
//			'#markup' => l(t("Add New") . " " . $bundle_label, "/crm-core/contact/834/new_related/crm_member/1/crm_core_contact%3Aip", ['attributes' => ['class' => ['btn', 'btn-success']]]),
			'#markup' => l(	t("Add New") . " " . $bundle_label,
							"/crm-core/contact/$contact_id/new_related/$relationship_type/$reverse/$bundle",
							[
								'query' => ['destination' => $destination],
								'attributes' => ['class' => ['btn', 'btn-success']],
							]
					),
			//'#submit' => ['intoto_crm_create_new_relationship_cb'],
//			'#executes_submit_callback' => TRUE,
//			'#validate' => [],
//			'#limit_validation_errors' => array(),
			'#weight' => ++$weight,
//			'#attributes' => ['class' => ['overlay'], 'href'=>["/crm-core/contact/834/new_related/crm_member/1/crm_core_contact%3Aip"]],
//			'#attributes' => ['class' => ['overlay'], 'href'=>["/crm-core/contact/834"]],
		];
	}
	$form['container_close2']['#weight'] = ++$weight;

	// hide 'active' checkbox
	unset ($form['crm_core_relationship_status']);
}


function intoto_crm_create_new_relationship_cb($form, &$form_state)
{
	if (isset($form['contact_id']['#value']) && isset($form['#bundle']) && isset($form['reverse']['#value'])){
		$contact_id = $form['contact_id']['#value'];
		$reverse = $form['reverse']['#value'];

		$bundles = $form_state['bundles'];
		if (count($bundles) != 1)
		{
			drupal_set_message(t("can't figure our which type of contact to create: " . join(", ", $bundles)));
		}
		$related_contact_type = $bundles[0];
		$relationship_type = $form['#bundle'];
		$form_state['redirect'] = "crm-core/contact/$contact_id/new_related/$relationship_type/$reverse/$related_contact_type";
	}else
	{
		drupal_set_message("Missing arguments for adding related contact");
	}
}


function intoto_crm_form_crm_core_contact_ui_form_alter(&$form, &$form_state, $form_id)
{
	if (isset($form_state['build_info']['args'][0]->relationship))
	{
		$form['title'] = [
			'#markup' => "<h2>Add to household</h2>",
		];
		$form['actions']['submit']['#submit'][] = 'intoto_crm_add_relation_to_contact';
	}
}



function intoto_crm_create_new_relationship($entity, $relationship_type, $reverse, $target_type)
{
	// Default empty Contact

	$prefix_to_remove = "crm_core_contact:";
	$loc = strlen($prefix_to_remove);
	if (substr ($target_type, 0, $loc) == $prefix_to_remove) {
		$target_type = substr($target_type , $loc);
	}
	$values = [
		'type' => $target_type,
		"relationship" => 
			[
				'relation_type' => $relationship_type,
				'reverse' => $reverse,
				'source' => $entity,
			],
		];

	$contact = entity_create('crm_core_contact', $values);
	$form = drupal_get_form('crm_core_contact_ui_form', $contact);
	return $form;
}





/*
 * after a "save" button is being pushed on a New Contact form,
 * if this contact was implanted instructions on which relationship to create for it (see intoto_crm_create_new_relationship())
 * then the relationship is being created.
 */

function intoto_crm_add_relation_to_contact($form, &$form_state)
{
	$reverse = $form_state['crm_core_contact']->relationship['reverse'];
	
	$new_contact = [];
	$new_contact['entity_type'] = 'crm_core_contact';
	$new_contact['entity_id'] = $form_state['crm_core_contact']->contact_id;
	$new_contact['entity_bundle'] = $form_state['crm_core_contact']->type;
	$new_contact['r_index'] = 1 - $reverse;
	$new_contact['entity_key'] = $new_contact['entity_type'] . ':' . $new_contact['entity_id'];

	$old_contact_entity_obj = $form_state['crm_core_contact']->relationship['source'];
	$old_contact['entity_type'] = 'crm_core_contact';
	$old_contact['entity_id'] = $old_contact_entity_obj->contact_id;
	$old_contact['entity_bundle'] = $old_contact_entity_obj->type;
	$old_contact['r_index'] = $reverse;
	$old_contact['entity_key'] = $old_contact['entity_type'] . ':' . $old_contact['entity_id'];
			

	$relationship_type = $form_state['crm_core_contact']->relationship['relation_type'];

	
	$endpoints = array(
		$reverse		=> $old_contact,
		(1 - $reverse)	=> $new_contact,
	);

	$relation = relation_create($relationship_type, $endpoints);
	$rid = relation_save($relation);
	//$form_state['relation'] = $relation;	
}
