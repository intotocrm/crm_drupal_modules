<?php

/**
 * Base class to contact types in this CRM implementation, based on crm_core
 *
 * @author Roi
 */
class ContactType {
    //put your code here

    function register($contact_type_info)
    {
	$t = get_t();
	$contact_type = crm_core_contact_type_new($contact_type_info["id"]);
	
	$contact_type->name = $t($contact_type_info["name"]);
	$contact_type->description = $t($contact_type_info["description"]);
	$contact_type->is_new = $contact_type_info["is_new"];

	crm_core_contact_type_save($contact_type);
		
    }
    
    function unregister()
    {
	
    }
    
    function getFields()
    {
	
    }
}
