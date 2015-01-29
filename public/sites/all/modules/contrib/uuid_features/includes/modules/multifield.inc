<?php
/**
 * @file
 * uuid features hooks on behalf of the multifield module.
 */

/**
 * Implements hook_uuid_entity_features_export_render_alter().
 * TODO: the classes that get created should be turned back into regular ol arrays at this stage.
 */
function multifield_uuid_entity_features_export_render_alter($entity_type, &$export, &$entity, $module) {

  // prevent recursive loop
  if ($entity_type == 'multifield') {
    return;
  }
  $multifields = multifield_get_field_items_iterator($export, $entity_type);
  $module = 'multifield';
  foreach ($multifields as $multifield_type) {
    foreach ($multifield_type as $language => $multifield_instances) {
      foreach ($multifield_instances as $multifield_instance) {
        $type = 'multifield';
        drupal_alter('uuid_entity_features_export_render', $type, $multifield_instance, $multifield_instance, $module);
      }
    }
  }
   #_entity_reference_uuid_entity_features_export_set_uuid_references($fields);
  $foo = '';
}

/**
 * Implements hook_uuid_entity_features_rebuild_alter().
 * TODO: the classes that get created should be turned back into regular ol arrays at this stage.
 */
function multifield_uuid_entity_features_rebuild_alter($entity_type, &$export, &$entity, $module) {
  if ($entity_type == 'multifield') {
    return;
  }
  $multifields = multifield_get_field_items_iterator($export, $entity_type);
  $module = 'multifield';
  foreach ($multifields as $multifield_type) {
    foreach ($multifield_type as $language => &$multifield_instances) {
      foreach ($multifield_instances as &$multifield_instance) {
        $type = 'multifield';
        drupal_alter('uuid_entity_features_rebuild', $type, $multifield_instance, $multifield_instance, $module);
        // Convert the multifield back to an array.
        $multifield_instance = (array) $multifield_instance;
      }
    }
  }
}

/**
 * Helper function to get multifields on an entity.
 *
 * @param object $export
 *   The entity object to export e.g. a node.
 *
 * @return array
 *   A filtered list of fields of the same type.
 */
function multifield_get_field_items_iterator(&$export, $entity_type) {
  // Get all the field definitions off of the parent entity
  list($entity_id, $revision_id, $export_bundle) = entity_extract_ids($entity_type, $export);
  $field_definitions = field_info_instances($entity_type, $export_bundle);
  if (!isset($export_bundle)) {
    $field_definitions = reset($field_definitions);
  }
  $return = array();
  // Load up all the field definitions and find the multifield ones
  foreach ($field_definitions as $field_instance) {
    // Get the info for a specific field so we can see
    // if it is a multifield or not.
    $info = field_info_field($field_instance['field_name']);
    // If the field is a multifield, proceed.
    if ($info['module'] == 'multifield') {
      // If the field is set.
      if (isset($export->{$info['field_name']})) {
        // Sets field to a reference on the export.
        $field = &$export->{$info['field_name']};
        // Gather all the ids from the export.

        foreach ($field as $language => &$field_items) {
          $ids = multifield_items_extract_ids($field_items);
          $entities = array_values(entity_load('multifield', $ids));
          $field[$language] = $entities;
        }
      }
      $return[$info['field_name']] = $field;
    }
  }

//$return['field_site_social_media']['und']['1868090']->field_social_media_reference['und'][0]['target_id'] = "FOOQINGA";
  return $return;
}
