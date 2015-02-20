<?php
/**
 * @file
 * bitch_bitchmart.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function bitch_bitchmart_taxonomy_default_vocabularies() {
  return array(
    'store_category' => array(
      'name' => 'Store Category',
      'machine_name' => 'store_category',
      'description' => 'List of the categories in the store',
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
