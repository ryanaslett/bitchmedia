<?php

/**
 * @file
 * Contains the MultifieldMigrateFieldHandler class.
 *
 * Requires Migrate 2.4 or later. To migrate into fields inside of a multifield,
 * use the field name as the subfield:
 *
 * @code
 * $this->addFieldMapping('field_my_multifield:field_label', 'label');
 * $this->addFieldMapping('field_my_multifield:field_slug', 'slug');
 * $this->addFieldMapping('field_my_multifield:field_description', 'description');
 * @endcode
 *
 * Within each subfield, you can use the field type's usual subfields, just like
 * you would if the field were not nested inside a multifield. For example, to
 * set the summary and text format on a long text field:
 *
 * @code
 * $this->addFieldMapping('field_my_multifield:field_description', 'description');
 * $this->addFieldMapping('field_my_multifield:field_description:summary', 'short_description');
 * $this->addFieldMapping('field_my_multifield:field_description:format')
 *   ->defaultValue('plain_text');
 * @endcode
 *
 */

/**
 * Migrate field handler class for multifield.
 */
class MultifieldMigrateFieldHandler extends MigrateFieldHandler {

  /**
   * {@inheritdoc}
   */
  public function __construct() {
    $types = array();

    // Register this as the handler for all multifield types.
    $field_types = field_info_field_types();
    foreach ($field_types as $type => $type_info) {
      if ($type_info['module'] == 'multifield') {
        $types[] = $type;
      }
    }

    $this->registerTypes($types);
  }

  /**
   * {@inheritdoc}
   */
  public function fields($type, $instance, $migration = NULL) {
    $output = array();

    $handler = new MigrateFieldsEntityHandler();
    // Display the field label and name for each field in a multifield.
    $fields = call_user_func(array($handler, 'fields'), 'multifield', $type, $migration);

    return $fields;
  }

  /**
   * {@inheritdoc}
   *
   * Each set of subfield values will be in its own array; each of these arrays
   * should be the same length:
   *
   * @code
   * $arguments = array(
   *   'field_label' => array('value 1', 'value 2', 'value 3'),
   *   'field_slug' => array('value_1', 'value_2', 'value_3'),
   *   'field_description' => array('first description', '', 'third description'),
   * );
   * @endcode
   *
   * These need to be collated into three multifield arrays:
   *
   * @code
   * $multifield_values = array(
   *   0 => array(
   *     'field_label' => 'value 1',
   *     'field_slug' => 'value_1',
   *     'field_description' => 'first description',
   *   ),
   *   1 => array(
   *     'field_label' => 'value 2',
   *     'field_slug' => 'value_2',
   *     'field_description' => '',
   *   ),
   *   2 => array(
   *     'field_label' => 'value 3',
   *     'field_slug' => 'value_3',
   *     'field_description' => 'third description',
   *   ),
   * );
   * @endcode
   *
   * Then, each set of multifield values can be migrated in using the
   * appropriate field handlers.
   *
   */
  public function prepare($entity, array $field_info, array $instance, array $values) {
    // Get the subfield arguments.
    $arguments = $entity->{$field_info['field_name']}['arguments'];

    // Collate the subfield values.
    $multifield_values = array();
    // Step through by field.
    foreach ($arguments as $field_name => &$field_values) {
      // Normalize values to arrays.
      if (!is_array($field_values)) {
        $field_values = array($field_values);
      }

      // Add each field value to a separate multifield.
      foreach ($field_values as $delta => $value) {
        if (!isset($multifield_values[$delta])) {
          $multifield_values[$delta] = new stdclass;
        }
        if(!empty($value)){
          $multifield_values[$delta]->$field_name = array($value);
        }
      }
    }

    // Migrate each set of subfields.
    // @see MigrateFieldsEntityHandler::prepare()
    $language = $this->getFieldLanguage($entity, $field_info, $arguments);
    // Get all of the subfields associated multifield type
    $instances = field_info_instances('multifield', $field_info['type']);
    // Loop through the values that we were passed in
    foreach ($multifield_values as $delta => $fake_entity) {
      // Loop through the fields on this multifield
      foreach ($instances as $machine_name => $instance) {
        // If we were passed a value that matches one we should have,
        if (property_exists($fake_entity, $machine_name)) {
          $field_info = field_info_field($machine_name);
          // Then pass our fake entity through migrate field handler so it can handle migrating the subfield
          $fake_entity->$machine_name = migrate_field_handler_invoke_all($fake_entity, $field_info, $instance, $fake_entity->$machine_name);
        }
      }
      $return[$language][$delta] = (array) $fake_entity;
    }

    return isset($return) ? $return : NULL;
  }
}
