<?php

/**
 * @file
 *   A tammuz info migration.
 */


/*
 * You must implement hook_migrate_api(), setting the API level to 2, for
 * your migration classes to be recognized by the Migrate module.
 */

function migrate_tammuz_key($key_name, $key_description)
{
	return array(
	$key_name => array('type' => 'varchar',
		'length' => 255,
		'not null' => TRUE,
		'description' => $key_description,
		),
	);
}

function migrate_tammuz_migrate_api()
{
//	$ip_keys = array( //this is a special type of individual
//		'id' => array('type' => 'int',
//			'not null' => TRUE,
//			'description' => 'Tammuz existing customer ID',
//		),
//		'name' => array('type' => 'varchar',
//			'length' => 255,
//			'not null' => TRUE,
//			'description' => "person's name",
//		)
//	);
	
	
	$ip_keys = migrate_tammuz_key("IP_id", "persons name together with customer ID and A/B");
	$customer_keys = migrate_tammuz_key("customer_id", "Customer number in Tammuz");
	$journey_keys = migrate_tammuz_key("journey_line_number", "Journey line in Tammuz excel");
  
	$individual_key = migrate_tammuz_key('id', "donor's unique id");

	$migrate_individual = array(
		'class_name' => 'IndividualsMigration',
		'ini_file' => 'porting.ini',
		'keys' => $individual_key,
	);

	$migrate_address_field_collection = 
	array(
		'class_name' => 'AddressesMigration',
		'ini_file' => 'porting.ini',
		'keys' => $individual_key,
		);
	
	



	$api = array(
		'api' => 2,
		'groups' => array(
			'ip' => array(
				'title' => t('Intended Parents-related Migrations'),
			),
			'egg_donor' => array(
				'title' => t('Egg Donors-related Migrations'),
			),
			'surrogate' => array(
				'title' => t('Surrgate-related Migrations'),
			),
			'customer' => array(
				'title' => t('Customer(household)-related Migrations'),
			),
			'journey' => array(
				'title' => t('Journey-related Migrations'),
			),
	),
		
		'migrations' => array(

			//IP-related migrations (IP fields and all the field-collections that are related to IP)
			'ip' =>			array (
								'keys' => $ip_keys,
								'group_name' => 'ip',
								'class_name' => 'IpsMigration',
								'ini_file' => 'porting.ini',
							),
			
			'ip_im' => array (
								'keys' => $ip_keys,
								'group_name' => 'ip',
								'class_name' => 'InstantMessagingMigration',
								'ini_file' => 'porting.ini',
							),

			'ip_address' => array (
									'keys' => $ip_keys,
									'group_name' => 'ip',
									'class_name' => 'AddressesMigration',
									'ini_file' => 'porting.ini',
									),

			'ip_phone' => array (
									'keys' => $ip_keys,
									'group_name' => 'ip',
									'class_name' => 'PhoneMigration',
									'ini_file' => 'porting.ini',
									),

			//egg_donor-related migrations (egg donor's fields and all the field-collections related to egg donor)
			'egg_donor' =>	array (
								'group_name' => 'egg_donor',
							)
							+ $migrate_individual,

			'egg_donor_address' => [
										'group_name' => 'egg_donor',
									]
									+ $migrate_address_field_collection,	  

			//SM:
			'surrogate' =>	array(
								'group_name' => 'surrogate',
//								'bundle' => 'surrogate',  //commented out: inherently understood from group name
//								'dependency' => [],       //commented out: inherently understood from groupname which is == to machine name
								'class_name' => 'SurrogatesMigration',
								'ini_file' => 'porting.ini',
//								'ini_section' => 'surrogate',  //commented out; inherently understood from groupname
								'keys' => migrate_tammuz_key('surrogate_number', "SM ID"),
							),
			
			
			//CUSTOMER
			'customer' =>	array (
								'keys' => $customer_keys,
								'group_name' => 'customer',
								'class_name' => 'CustomersMigration',
								'ini_file' => 'porting.ini',
							),
			
			'journey' =>	array (
								'keys' => $journey_keys,
								'group_name' => 'journey',
								'class_name' => 'JourneysMigration',
								'ini_file' => 'porting.ini',
							),
			
			'member' =>	array (
								'group_name' => 'ip',
								'class_name' => 'RelationsMigration',
								'ini_file' => 'porting.ini',
								'dependency' => array("ip", "customer"),
								'src_migration' => "ip",  //this is good for internal mapping that should be used while creating new relations
								'dst_migration' => "customer",
								'src_bundle' => "ip",
								'dst_bundle' => "customer",
								'keys' => $ip_keys, //this fits because the customer has 1-to-many relation to IPs
							),
			
			'household_participate_in' =>	array (
								'group_name' => 'journey',
								'class_name' => 'GenericRelationsMigration',
								'ini_file' => 'porting.ini',
								'bundle' => 'participate_in',
								'dependency' => array("journey", "customer"),
								'src_migration' => "customer",  //this is good for internal mapping that should be used while creating new relations
								'dst_migration' => "journey",
								'src_bundle' => "customer",
								'dst_bundle' => "journey",
								'src_column' => "customer_id",
								'dst_column' => "journey_line_number",
								'keys' => $journey_keys, 
							),

			'surrogate_participate_in' =>	array (
								'group_name' => 'journey',
								'class_name' => 'GenericRelationsMigration',
								'ini_file' => 'porting.ini',
								'bundle' => 'participate_in',
								'dependency' => array("journey", "surrogate"),
								'src_migration' => "surrogate",  //this is good for internal mapping that should be used while creating new relations
								'dst_migration' => "journey",
								'src_bundle' => "surrogate",
								'dst_bundle' => "journey",
								'src_column' => "surrogate_number",
								'dst_column' => "journey_line_number",
								'keys' => $journey_keys, 
							),
		),
	);
	return $api;
}
