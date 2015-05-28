<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of ContactType_tammuz_staff
 *
 * @author Roi
 */
class ContactType_tammuz_staff extends ContactType{
    function getInfo()
    {
	$contact_type = array();
	$contact_type["id"] = 'tammuz_staff';
	$contact_type["name"] = 'Tammuz Staff Member';
	$contact_type["description"] = 'A single Tammuz Staff Member.';
	$contact_type["is_new"] = TRUE;

	return $contact_type;
    }
    
    function getFields()
    {
	
    }

}
