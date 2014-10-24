<?php

/**
 * @file
 * Token integration for the multifield module.
 */

/**
 * Implements hook_token_info().
 */
function multifield_token_info() {
  include_once drupal_get_path('module', 'entity_token') . '/entity_token.tokens.inc';

  $info = array();

  $multifields = multifield_load_all();
  $multifield_subfields = multifield_get_subfields();
  $multifield_subfield_definitions = entity_get_all_property_info('multifield');
  $fields = field_info_fields();

  foreach ($multifields as $fieldname => $multifield) {
    $info['types'][$fieldname] = array(
      'name' => $multifield->label,
      'description' => t('Tokens related to the ') . $multifield->label . t(' Multifield data type'),
      'needs-data' => $fieldname,
    );
    foreach ($multifield_subfields[$fieldname] as $subfield) {
      $multifield_subfield_definitions[$subfield];
      $multifield_subfield_definitions[$subfield] += array('type' => 'text', 'description' => $multifield_subfield_definitions[$subfield]['label']);
      $property_token_type = _entity_token_map_to_token_type($multifield_subfield_definitions[$subfield]);
      if ($multifield_subfield_definitions[$subfield]['type'] == 'field_item_image') {
        $property_token_type = 'image-field';

      }

      $info['tokens'][$fieldname][$subfield] = array(
        'type' =>  $property_token_type,
        'name' => $multifield_subfield_definitions[$subfield]['label'],
        'description' => $multifield_subfield_definitions[$subfield]['description'],
        'multifield-token' => TRUE,
      );
    }
  }
  return $info;
}

/**
 * Implements hook_token_info_alter().
 */
function multifield_token_info_alter(&$info) {

  $multifields = multifield_load_all();
  // Modifies multifield tokens on fields to designate them as multifield types.
  $all_multifields = multifield_get_fields();
  $token_field_info = _token_field_info();
  foreach ($token_field_info as $field_name => $field) {
    // If this field is a multifield field
    if(in_array($field_name,array_keys($all_multifields))){
      // Loop over the bundles this multifield is connected to
      foreach (array_keys($field['bundles']) as $token_type) {
        $info['tokens'][$token_type][$field_name]['type'] = $all_multifields[$field_name];
      }
    }
  }
}

/**
 * Implements hook_tokens().
 */
function multifield_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();
  // Make use of token module's token cache if available.
  $info = module_exists('token') ? token_get_info() : token_info();

  // Grab a bunch of shit and hope something's useful.
  $multifields_loaded = multifield_load_all();
  $multifield_subfields = multifield_get_subfields();
  $multifield_subfield_definitions = entity_get_all_property_info('multifield');

  $langcode = isset($options['language']) ? $options['language']->language : NULL;

  // Entity tokens.
  if ($type == 'entity' && !empty($data['entity_type']) && !empty($data['entity']) && !empty($data['token_type'])) {
    $entity_type = $data['entity_type'];
    $multifields =  multifield_get_fields();

    foreach ($tokens as $name => $original) {
        $parts = explode(':', $name);
        $parent_token = $parts[0];
      // Is this token a multifield token?
      if (in_array($parent_token, array_keys($multifields))) {
        $bundle = $multifields[$parent_token];
        $fields = field_info_instances('multifield', $bundle);

        //If this token is a multifield token, and the parts[1] token is an image field,
        // then we should call the image fielding shit.

        $field = field_info_field($parts[1]);
        if (count($parts) > 2) {
          if ($field['type'] == 'image') {
            $image_field_tokens = token_find_with_prefix($tokens, $parent_token);
            $image_style_tokens = token_find_with_prefix($image_field_tokens, $parts[1]);
            $field_object = field_get_items($data['entity_type'], $data['entity'], $parent_token);
            $field_object = $field_object[0][$parts[1]][LANGUAGE_NONE];
            if ($image_field_tokens && $field_object) {
              $replacements += token_generate('image-field', $image_style_tokens, array('image-field' => $field_object), $options);
            }
          }
        }
        else {
          // The field API does weird stuff to the entity, so let's clone it.
          $entity = clone $data['entity'];

          // Reset the prepared view flag in case token generation is called from
          // inside field_attach_view().
          unset($entity->_field_view_prepared);
          $multifield_output = field_view_field($entity_type, $entity, $parent_token, 'token', $langcode);
          if (isset($multifield_output[0][$parts[1]])) {
            $field_output = $multifield_output[0][$parts[1]];
            $field_output['#token_options'] = $options;
            $field_output['#pre_render'][] = 'token_pre_render_field_token';
            $replacements[$original] = drupal_render($field_output);
          }
          // Remove the cloned object from memory.
          unset($entity);
        }
        //Doesnt work with: 'node', 'node entity' 'field_metadata'
        // where $parent_token *is* a multifield instance/bundle
        // 'user', user entity, field_google_plus *does work*. *why*?
        //
      }
    }
  }
  return $replacements;
}
