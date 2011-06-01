<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_applications_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ca_applications_imagecache_default_presets() {
  $items = array(
    'ca_applications_a_scale_200w' => array(
      'presetname' => 'ca_applications_a_scale_200w',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'ca_applications_a_scale_crop_150w_100h' => array(
      'presetname' => 'ca_applications_a_scale_crop_150w_100h',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '150',
            'height' => '100',
          ),
        ),
      ),
    ),
    'ca_applications_a_thumb_45w_45h' => array(
      'presetname' => 'ca_applications_a_thumb_45w_45h',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_resize',
          'data' => array(
            'width' => '45',
            'height' => '45',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function ca_applications_node_info() {
  $items = array(
    'ca_applications' => array(
      'name' => t('CA Applications'),
      'module' => 'features',
      'description' => t('This content type is used to associate a product with a particular application.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ca_applications_views_api() {
  return array(
    'api' => '2',
  );
}
