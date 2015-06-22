<?php
/**
 * @file
 * crm_entity_types_improved.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function crm_entity_types_improved_taxonomy_default_vocabularies() {
  return array(
    'document_type' => array(
      'name' => 'Document Type',
      'machine_name' => 'document_type',
      'description' => 'Type of documents attached to contacts or entities',
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
