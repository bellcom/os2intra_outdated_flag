<?php
/**
 * @file
 * os2intra_outdated_flag.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function os2intra_outdated_flag_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-post-field_os2intra_outdated_date'
  $field_instances['node-post-field_os2intra_outdated_date'] = array(
    'bundle' => 'post',
    'deleted' => 0,
    'description' => 'Vælg den dato hvor dette indhold bliver forældet. Forældet indhold vil derefter blive markeret som forældet, indhold vil IKKE blive afpubliseret/slettet.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 10,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_in_partial_form' => 0,
    'entity_type' => 'node',
    'field_name' => 'field_os2intra_outdated_date',
    'label' => 'Forældet dato',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 14,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Forældet dato');
  t('Vælg den dato hvor dette indhold bliver forældet. Forældet indhold vil derefter blive markeret som forældet, indhold vil IKKE blive afpubliseret/slettet.');

  return $field_instances;
}
