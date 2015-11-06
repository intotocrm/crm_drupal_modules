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
			'callbacks' => array('site_settings_load_settings'),
			'provides'  => array(
				'site_settings' => array(
					'label'		=> 'Site Settings',
					'type'		=> 'intoto_site_settings',
					'bundle'	=> 'general_site_settings',
				),
			),
		),
	);
}



function site_settings_load_settings()
{
	$site_settings_entities = intoto_site_settings_load_settings("general_site_settings");  //todo: the type should be parameterized by the rule
	$site_settings_entity = $site_settings_entities[1]; //there should be only one settings entity, as in singleton
	$w = entity_metadata_wrapper('intoto_site_settings', $site_settings_entity);
	return ['site_settings' => $w,];
}