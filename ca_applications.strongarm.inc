<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_applications_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_applications';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '1',
    'revision_information' => '2',
    'author' => '3',
    'options' => '4',
    'menu' => '0',
    'path' => '5',
    'page_title' => '-4',
  );

  $export['content_extra_weights_ca_applications'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_ca_applications';
  $strongarm->value = 'form-474b537a8e4d2b7e603d0d0b8a825be4';

  $export['form_build_id_ca_applications'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_applications';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_applications'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_applications_pattern';
  $strongarm->value = '[ca-applications-related-app-reference-path]/[title-raw]';

  $export['pathauto_node_ca_applications_pattern'] = $strongarm;
  return $export;
}
