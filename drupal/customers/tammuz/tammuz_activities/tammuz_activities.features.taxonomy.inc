<?php
/**
 * @file
 * tammuz_activities.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tammuz_activities_taxonomy_default_vocabularies() {
  return array(
    'serverity' => array(
      'name' => 'Serverity',
      'machine_name' => 'serverity',
      'description' => 'Describes comments, tests, etc',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
