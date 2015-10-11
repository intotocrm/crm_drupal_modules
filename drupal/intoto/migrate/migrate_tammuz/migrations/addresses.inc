<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



class AddressesMigration extends IntotoMigration {  // learn from https://www.drupal.org/node/1900640 about field collections migration
	public function __construct($arguments) {
		parent::__construct($arguments);

		$this->description = t('Addresses as field-collection for individuals.');

		$this->destination = new MigrateDestinationFieldCollection(
			'field_address',
			array('host_entity_type' => 'crm_core_contact')
		);
		$this->field_prefix = isset($this->settings['field_prefix']) ? $this->settings['field_prefix'] : "";
	}

	public function AddFieldMappings()
	{
		$this->addFieldMapping('host_entity_id', 'IP_id')->sourceMigration($this->base_migrate);
		$this->addFieldMapping('field_address_details', 'address_country')->callbacks(array($this, get_country_code));
		$this->addFieldMapping('field_address_details:thoroughfare', 'address_street');
		$this->addFieldMapping('field_address_details:locality', 'address_city');
		$this->addFieldMapping('field_address_details:administrative_area', 'address_state');
	}

	static function translate_country_code($country_string)
	{
		if (!$country_string || strlen(trim($country_string)) == 0 || $country_string == "-"){
			return NULL;
		}
		
		$countries = array
		(
			"AF" => "Afghanistan",
			"AX" => "Åland Islands",
			"AL" => "Albania",
			"DZ" => "Algeria",
			"AS" => "American Samoa",
			"AD" => "Andorra",
			"AO" => "Angola",
			"AI" => "Anguilla",
			"AQ" => "Antarctica",
			"AG" => "Antigua and Barbuda",
			"AR" => "Argentina",
			"AM" => "Armenia",
			"AW" => "Aruba",
			"AU" => "Australia",
			"AT" => "Austria",
			"AZ" => "Azerbaijan",
			"BS" => "Bahamas (the)",
			"BH" => "Bahrain",
			"BD" => "Bangladesh",
			"BB" => "Barbados",
			"BY" => "Belarus",
			"BE" => "Belgium",
			"BZ" => "Belize",
			"BJ" => "Benin",
			"BM" => "Bermuda",
			"BT" => "Bhutan",
			"BO" => "Bolivia (Plurinational State of)",
			"BQ" => "Bonaire, Sint Eustatius and Saba",
			"BA" => "Bosnia and Herzegovina",
			"BW" => "Botswana",
			"BV" => "Bouvet Island",
			"BR" => "Brazil",
			"IO" => "British Indian Ocean Territory (the)",
			"BN" => "Brunei Darussalam",
			"BG" => "Bulgaria",
			"BF" => "Burkina Faso",
			"BI" => "Burundi",
			"CV" => "Cabo Verde",
			"KH" => "Cambodia",
			"CM" => "Cameroon",
			"CA" => "Canada",
			"KY" => "Cayman Islands (the)",
			"CF" => "Central African Republic (the)",
			"TD" => "Chad",
			"CL" => "Chile",
			"CN" => "China",
			"CX" => "Christmas Island",
			"CC" => "Cocos (Keeling) Islands (the)",
			"CO" => "Colombia",
			"KM" => "Comoros (the)",
			"CD" => "Congo (the Democratic Republic of the)",
			"CG" => "Congo (the)",
			"CK" => "Cook Islands (the)",
			"CR" => "Costa Rica",
			"CI" => "Côte d'Ivoire",
			"HR" => "Croatia",
			"CU" => "Cuba",
			"CW" => "Curaçao",
			"CY" => "Cyprus",
			"CZ" => "Czech Republic (the)",
			"DK" => "Denmark",
			"DJ" => "Djibouti",
			"DM" => "Dominica",
			"DO" => "Dominican Republic (the)",
			"EC" => "Ecuador",
			"EG" => "Egypt",
			"SV" => "El Salvador",
			"GQ" => "Equatorial Guinea",
			"ER" => "Eritrea",
			"EE" => "Estonia",
			"ET" => "Ethiopia",
			"FK" => "Falkland Islands (the) [Malvinas]",
			"FO" => "Faroe Islands (the)",
			"FJ" => "Fiji",
			"FI" => "Finland",
			"FR" => "France",
			"GF" => "French Guiana",
			"PF" => "French Polynesia",
			"TF" => "French Southern Territories (the)",
			"GA" => "Gabon",
			"GM" => "Gambia (the)",
			"GE" => "Georgia",
			"DE" => "Germany",
			"GH" => "Ghana",
			"GI" => "Gibraltar",
			"GR" => "Greece",
			"GL" => "Greenland",
			"GD" => "Grenada",
			"GP" => "Guadeloupe",
			"GU" => "Guam",
			"GT" => "Guatemala",
			"GG" => "Guernsey",
			"GN" => "Guinea",
			"GW" => "Guinea-Bissau",
			"GY" => "Guyana",
			"HT" => "Haiti",
			"HM" => "Heard Island and McDonald Islands",
			"VA" => "Holy See (the)",
			"HN" => "Honduras",
			"HK" => "Hong Kong",
			"HU" => "Hungary",
			"IS" => "Iceland",
			"IN" => "India",
			"ID" => "Indonesia",
			"IR" => "Iran (Islamic Republic of)",
			"IQ" => "Iraq",
			"IE" => "Ireland",
			"IM" => "Isle of Man",
			"IL" => "Israel",
			"IT" => "Italy",
			"JM" => "Jamaica",
			"JP" => "Japan",
			"JE" => "Jersey",
			"JO" => "Jordan",
			"KZ" => "Kazakhstan",
			"KE" => "Kenya",
			"KI" => "Kiribati",
			"KP" => "Korea (the Democratic People's Republic of)",
			"KR" => "Korea (the Republic of)",
			"KW" => "Kuwait",
			"KG" => "Kyrgyzstan",
			"LA" => "Lao People's Democratic Republic (the)",
			"LV" => "Latvia",
			"LB" => "Lebanon",
			"LS" => "Lesotho",
			"LR" => "Liberia",
			"LY" => "Libya",
			"LI" => "Liechtenstein",
			"LT" => "Lithuania",
			"LU" => "Luxembourg",
			"MO" => "Macao",
			"MK" => "Macedonia (the former Yugoslav Republic of)",
			"MG" => "Madagascar",
			"MW" => "Malawi",
			"MY" => "Malaysia",
			"MV" => "Maldives",
			"ML" => "Mali",
			"MT" => "Malta",
			"MH" => "Marshall Islands (the)",
			"MQ" => "Martinique",
			"MR" => "Mauritania",
			"MU" => "Mauritius",
			"YT" => "Mayotte",
			"MX" => "Mexico",
			"FM" => "Micronesia (Federated States of)",
			"MD" => "Moldova (the Republic of)",
			"MC" => "Monaco",
			"MN" => "Mongolia",
			"ME" => "Montenegro",
			"MS" => "Montserrat",
			"MA" => "Morocco",
			"MZ" => "Mozambique",
			"MM" => "Myanmar",
			"NA" => "Namibia",
			"NR" => "Nauru",
			"NP" => "Nepal",
			"NL" => "Netherlands (the)",
			"NC" => "New Caledonia",
			"NZ" => "New Zealand",
			"NI" => "Nicaragua",
			"NE" => "Niger (the)",
			"NG" => "Nigeria",
			"NU" => "Niue",
			"NF" => "Norfolk Island",
			"MP" => "Northern Mariana Islands (the)",
			"NO" => "Norway",
			"OM" => "Oman",
			"PK" => "Pakistan",
			"PW" => "Palau",
			"PS" => "Palestine, State of",
			"PA" => "Panama",
			"PG" => "Papua New Guinea",
			"PY" => "Paraguay",
			"PE" => "Peru",
			"PH" => "Philippines (the)",
			"PN" => "Pitcairn",
			"PL" => "Poland",
			"PT" => "Portugal",
			"PR" => "Puerto Rico",
			"QA" => "Qatar",
			"RE" => "Réunion",
			"RO" => "Romania",
			"RU" => "Russian Federation (the)",
			"RW" => "Rwanda",
			"BL" => "Saint Barthélemy",
			"SH" => "Saint Helena, Ascension and Tristan da Cunha",
			"KN" => "Saint Kitts and Nevis",
			"LC" => "Saint Lucia",
			"MF" => "Saint Martin (French part)",
			"PM" => "Saint Pierre and Miquelon",
			"VC" => "Saint Vincent and the Grenadines",
			"WS" => "Samoa",
			"SM" => "San Marino",
			"ST" => "Sao Tome and Principe",
			"SA" => "Saudi Arabia",
			"SN" => "Senegal",
			"RS" => "Serbia",
			"SC" => "Seychelles",
			"SL" => "Sierra Leone",
			"SG" => "Singapore",
			"SX" => "Sint Maarten (Dutch part)",
			"SK" => "Slovakia",
			"SI" => "Slovenia",
			"SB" => "Solomon Islands",
			"SO" => "Somalia",
			"ZA" => "South Africa",
			"GS" => "South Georgia and the South Sandwich Islands",
			"SS" => "South Sudan",
			"ES" => "Spain",
			"LK" => "Sri Lanka",
			"SD" => "Sudan (the)",
			"SR" => "Suriname",
			"SJ" => "Svalbard and Jan Mayen",
			"SZ" => "Swaziland",
			"SE" => "Sweden",
			"CH" => "Switzerland",
			"SY" => "Syrian Arab Republic",
			"TW" => "Taiwan (Province of China)",
			"TJ" => "Tajikistan",
			"TZ" => "Tanzania, United Republic of",
			"TH" => "Thailand",
			"TL" => "Timor-Leste",
			"TG" => "Togo",
			"TK" => "Tokelau",
			"TO" => "Tonga",
			"TT" => "Trinidad and Tobago",
			"TN" => "Tunisia",
			"TR" => "Turkey",
			"TM" => "Turkmenistan",
			"TC" => "Turks and Caicos Islands (the)",
			"TV" => "Tuvalu",
			"UG" => "Uganda",
			"UA" => "Ukraine",
			"AE" => "United Arab Emirates (the)",
			"GB" => "United Kingdom of Great Britain and Northern Ireland (the)",
			"UM" => "United States Minor Outlying Islands (the)",
			"US" => "United States of America (the)",
			"UY" => "Uruguay",
			"UZ" => "Uzbekistan",
			"VU" => "Vanuatu",
			"VE" => "Venezuela (Bolivarian Republic of)",
			"VN" => "Viet Nam",
			"VG" => "Virgin Islands (British)",
			"VI" => "Virgin Islands (U.S.)",
			"WF" => "Wallis and Futuna",
			"EH" => "Western Sahara*",
			"YE" => "Yemen",
			"ZM" => "Zambia",
			"ZW" => "Zimbabwe",
		);
		
		$country_codes = array_flip($countries);
		$country_codes ['USA'] = $country_codes["United States of America (the)"];
		$country_codes ['american'] = $country_codes["United States of America (the)"];
		$country_codes ['italian'] = $country_codes["Italy"];
		$country_codes ['isr'] = $country_codes["Israel"];
		$country_codes ['england'] = $country_codes["United Kingdom of Great Britain and Northern Ireland (the)"];
		$country_codes ['ustralia'] = $country_codes["Australia"];
		$country_codes ['hol'] = $country_codes["Netherlands (the)"];
		$country_codes ['brasil'] = $country_codes["Brazil"];
		$country_codes ['korea'] = $country_codes["Korea (the Republic of)"];
		$country_codes ['taiwan'] = $country_codes["Taiwan (Province of China)"];
		
		$country_string_lc = strtolower($country_string);
		foreach ($country_codes as $name=>$code)
		{
			$minsize = min(strlen($name), strlen($country_string_lc));
			if (substr ($country_string_lc, 0, $minsize) == substr(strtolower($name), 0, $minsize))
			{
				return $code;
			}
		}
	}
	
	//static function translate_country_code($country_string)
	function get_country_code($country_string)
	{
		if ($country_string && $country_string != "")
		{
			$code = self::translate_country_code($country_string);
			if (!$code)
			{
				$this->message("bad country: " . $country_string);
			}
			return $code;
		}
		return NULL;
	}

	
	public function DestinationKey()
	{
		return MigrateDestinationFieldCollection::getKeySchema();
	}
	

	
	
	public function prepareKey($source_key, $row)
	{
		$key = IpsMigration::prepare_ip_key($this->field_prefix, $row);
		

				
		if ($key == NULL){
			self::message('ip: no id in row with customer '. $row->customer_id . ' in line ' . $row->csvrownum);
		}
		
		return $key;
	
	}
	
	function get_field($field, $row)
	{
		return IpsMigration::static_get_field($this->field_prefix, $field, $row);
	}
	
    public function prepareRow($row) {
		
		$row_key = $this->prepareKey('IP_id', $row);
		if (!$row_key || $row_key['IP_id'] == 'skip')
		{
			return FALSE;
		}
				
		
		$row->IP_id = $row_key ['IP_id'];
		foreach($this->codedFieldMappings as $mapping_key => $mapping)
		{
			$source_field = $mapping->getSourceField();
			if ($source_field && $this->get_field($source_field, $row)){
				$row -> $source_field = $this->get_field($source_field, $row);
			}
			//print "$mapping_key->" . $row->$mapping_key ."\n";
		}
		

		if (empty($row->address_country) )
		{
			//$row->address_country = "Israel";
		}
    }
	
	
  
	public function prepare($entity, stdClass $row) {  //	https://www.drupal.org/node/2487618
		//    parent::prepare($entity, $row);
		// The field collection migration code will have loaded an old revision of
		// the host entity; when it saves the host entity, old field values will
		// overwrite the current ones. Set the most recent revision as the host
		// entity instead.
		if ($hosts = entity_load($entity->hostEntityType(), array($entity->hostEntityId()))) {
			$host = reset($hosts);
			$entity->updateHostEntity($host);
		}
	}

}
