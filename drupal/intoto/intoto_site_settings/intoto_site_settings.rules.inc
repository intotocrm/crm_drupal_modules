<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


function intoto_site_settings_rules_action_info() {
	return array(
		'site_settings_load_settings' => array(
			'group'     => t('Site Settings'),
			'label'     => t('Load site settings'),
			'module'    => 'intoto_site_settings',
			'callbacks' => array(''),
			'provides'  => array(
				'site_settings' => array(
					'label' => 'Site Settings',
					'type'  => 'intoto_site_settings',
				),
			),
		),
	);
}



function  intoto_site_settings_get_settings()
{
//	$site_settings_entity = entity_load('intoto_site_settings', 1);
	$site_settings_entities = intoto_site_settings_load_settings($site_settings_type);
	$site_settings_entity = $site_settings_entities[0]; //there should be only one settings entity, as in singleton
	$w = entity_metadata_wrapper('intoto_site_settings', $site_settings_entity);
	return ['site_settings' => $w,];
}