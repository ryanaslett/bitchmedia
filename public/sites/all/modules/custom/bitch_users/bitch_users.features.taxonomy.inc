<?php
/**
 * @file
 * bitch_users.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function bitch_users_taxonomy_default_vocabularies() {
  return array(
    'social_media_websites' => array(
      'name' => 'Social Media Websites',
      'machine_name' => 'social_media_websites',
      'description' => 'Social media sites used by bitch',
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
