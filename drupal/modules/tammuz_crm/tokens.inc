<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Implements hook_token_info().
 */
function tammuz_crm_token_info() {
	$info = array();
//	// Define a new token type.
//	$info['types']['relation'] = array(
//	  'name' => t('My custom tokens'),
//	  'description' => t('A token type for my custom tokens.'),
//	  );
//	// Define any new tokens.
//	$info['tokens']['my_custom_tokens']['my_cool_token'] = array(
//		'name' => t('My cool token'),
//		'description' => t('A token I use to show that I am cool.'),
//	);
	return $info;
}

/**
 * Implements hook_tokens().
 */
function tammuz_crm_tokens($type, $tokens, array $data = array(), array $options = array()) {
	$replacements = array();
//	if ($type == 'my_custom_tokens') {
//	// Loop through the available tokens.
//	foreach ($tokens as $name => $original) {
//	  // Find our custom tokens by name.
//	  switch ($name) {
//		case 'my_cool_token':
//		  // Work out the value of our token.
//		  $value = 'Whatever we want the token to be';
//		  // Give our token it's value!
//		  $replacements[$original] = $value;
//		  break;
//	  }
//	}
//	}
//
	return $replacements;
}