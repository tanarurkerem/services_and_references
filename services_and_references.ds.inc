<?php
/**
 * @file
 * services_and_references.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function services_and_references_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|szolg_ltat_s|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'szolg_ltat_s';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'references' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|szolg_ltat_s|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function services_and_references_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass;
  $ds_field->api_version = 1;
  $ds_field->field = 'references';
  $ds_field->label = 'References';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'views|related_references-block',
    'block_render' => '2',
  );
  $export['references'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function services_and_references_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|referencia|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'referencia';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 1,
    'regions' => array(
      'right' => array(
        0 => 'body',
        1 => 'field_related_services',
      ),
      'left' => array(
        0 => 'field_gallery',
      ),
    ),
    'fields' => array(
      'body' => 'right',
      'field_gallery' => 'left',
      'field_related_services' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|referencia|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|szolg_ltat_s|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'szolg_ltat_s';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 1,
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        0 => 'references',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'references' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|szolg_ltat_s|default'] = $ds_layout;

  return $export;
}
