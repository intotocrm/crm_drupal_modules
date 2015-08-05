<?php

/**
 * @file
 *   A intoto info migration.
 */


/*
 * You must implement hook_migrate_api(), setting the API level to 2, for
 * your migration classes to be recognized by the Migrate module.
 */



function migrate_intoto_migrate_api()
{
//	$ip_keys = array( //this is a special type of individual
//		'id' => array('type' => 'int',
//			'not null' => TRUE,
//			'description' => 'Existing customer ID',
//		),
//		'name' => array('type' => 'varchar',
//			'length' => 255,
//			'not null' => TRUE,
//			'description' => "person's name",
//		)
//	);
  
	$individual_key = array(
		'id' => array('type' => 'varchar',
			'length' => 255,
			'not null' => TRUE,
			'description' => "unique id",
		),
	);
	
	$customer_key = array(
		'customer_id' => array('type' => 'varchar',
			'length' => 255,
			'not null' => TRUE,
			'description' => "unique customer id",
		),
	);


	$migrate_individual = array(
		'class_name' => 'IndividualsMigration',
		'ini_file' => 'porting.ini',
		'keys' => $individual_key,
	);

	$migrate_customer = array(
		'class_name' => 'CustomersMigration',
		'ini_file' => 'porting.ini',
		'keys' => $customer_key,
	);

	$migrate_relation = array(
		'class_name' => 'RelationsMigration',
		'ini_file' => 'porting.ini',
		'depend' => array("ip", "customer"),
		'src_bundle' => "ip",
		'dst_bundle' => "customer",
		'keys' => $individual_key, //this fits because the customer has 1-to-many relation to IPs
	);
	
	$migrate_address_field_collection = array(
		'class_name' => 'AddressesMigration',
		'ini_file' => 'porting.ini',
		'keys' => $individual_key,
		);
	
	$migrate_im = array(
		'class_name' => 'InstantMessagingMigration',
		'ini_file' => 'porting.ini',
		'keys' => $individual_key,
		);

  
	$migrate_phone_field_collection = array(
		'class_name' => 'PhoneMigration',
		'ini_file' => 'porting.ini',
		'keys' => $individual_key,
		);


	$api = array(
		'api' => 2,
		'groups' => array(
			'ip' => array(
				'title' => t('Intended Parents-related Migrations'),
			),
			'customer' => array(
				'title' => t('Customer-related Migrations'),
			),
//			'egg_donor' => array(
//				'title' => t('Egg Donors-related Migrations'),
//			),
	),
		
		'migrations' => array(

			//IP-related migrations (IP fields and all the field-collections that are related to IP)
			'ip' =>			array (
//								'keys' => $ip_keys,
								'group_name' => 'ip',
							)
							+ $migrate_individual,
//			'ip_im' => array (
////								'keys' => $ip_keys,
//								'group_name' => 'ip',
//							)
//							+ $migrate_im,  


//			'ip_address' => array (
////									'keys' => $ip_keys,
//									'group_name' => 'ip',
//									)
//									+ $migrate_address_field_collection,	  
//
			'ip_phone' => array (
//									'keys' => $ip_keys,
									'group_name' => 'ip',
									)
									+ $migrate_phone_field_collection,

			//customer-related migrations (customer's fields and all the field-collections related to egg donor)
			'customer' =>	array (
								'group_name' => 'customer',
							)
							+ $migrate_customer,

			'crm_member' =>	array (
								'group_name' => 'ip',
							)
							+ $migrate_relation,

			//egg_donor-related migrations (egg donor's fields and all the field-collections related to egg donor)
//			'egg_donor' =>	array (
//								'group_name' => 'egg_donor',
//							)
//							+ $migrate_individual,
//
//			'egg_donor_address' => array (
//										'group_name' => 'egg_donor',
//									)
//									+ $migrate_address_field_collection,	  
//
			
		),
	);
	return $api;
}
