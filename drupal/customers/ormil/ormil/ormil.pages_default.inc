<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 * Implementation of hook_default_page_manager_pages().
 */
function ormil_default_page_manager_pages() {
	$files = file_scan_directory(drupal_get_path('module', 'ormil'). '/pages', '/.*page.*/');
	$pages = [];
	foreach ($files as $absolute => $file)
	{
		require $absolute;
		if (isset($page)) {
		$pages[$file->name] = $page;
		}
	}
	return $pages;
}