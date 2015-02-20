<?php
/**
 * @file
 * uuid features hooks on behalf of the multifield module.
 */

/**
 * Implements hook_uuid_entity_features_export_render_alter().
 */
function multifield_uuid_entity_features_export_render_alter($entity_type, &$export, &$entity, $module) {

  // Prevent Recursion.
  if ($entity_type == 'multifield') {
    return;
  }
  $multifields = multifield_get_field_items_iterator($export, $entity_type);
  $module = 'multifield';
  foreach ($multifields as $multifield_type) {
    foreach ($multifield_type as $language => &$multifield_instances) {
      foreach ($multifield_instances as &$multifield_instance) {
        $type = 'multifield';
        drupal_alter('uuid_entity_features_export_render', $type, $multifield_instance, $multifield_instance, $module);
        $multifield_instance = _multifield_field_entity_to_item($multifield_instance);
      }
    }
  }
}

/**
 * Implements hook_uuid_entity_features_rebuild_alter().
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
        $multifield_instance = _multifield_field_entity_to_item($multifield_instance);
      }
    }
  }
}

/**
 * Helper function to get multifields on an entity.
 *
 * @param object $export
 *   The entity object to export e.g. a node/bean/etc.
 *
 * @return array
 *   An array of multifields as entities.
 */
function multifield_get_field_items_iterator(&$export, $entity_type) {
  // Get the field definitions from the parent entity.
  list($entity_id, $revision_id, $export_bundle) = entity_extract_ids($entity_type, $export);
  $field_definitions = field_info_instances($entity_type, $export_bundle);
  if (!isset($export_bundle)) {
    $field_definitions = reset($field_definitions);
  }
  $return = array();
  // Loop through the field definitions and find the multifields.
  foreach ($field_definitions as $field_instance) {
    // Get the info for a specific field so we can see
    // if it is a multifield or not.
    $info = field_info_field($field_instance['field_name']);
    // If the field is a multifield, proceed.
    if ($info['module'] == 'multifield') {
      $multifield_machine_name = multifield_extract_multifield_machine_name($info);
      // If the field is set.
      if (isset($export->{$info['field_name']})) {
        // Sets field to a reference on the export.
        $field = &$export->{$info['field_name']};
        // Add the field type to the entities and make them pseudo entities.
        foreach ($field as $language => &$field_items) {
          foreach ($field_items as &$multifield) {
            $multifield = _multifield_field_item_to_entity($multifield_machine_name, $multifield);
          }
          $field[$language] = $field_items;
        }
      }
      $return[$info['field_name']] = $field;
    }
  }
  return $return;
}
