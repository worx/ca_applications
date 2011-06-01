<?php

/**
 * Define the ca_applications_admin_settings_form() function.
 */
function ca_applications_admin_settings_form() {
  $form = array();

  $form['application_list'] = array(
    '#type' => 'select',
    '#title' => t('Application\'s List Template'),
    '#description' => t('This effects the look and feel for the Page Manager page at the path "applications"'),
    '#options' => array(
      'ca_applications_application_list_template_one' => t('Template One'),
      'ca_applications_application_list_template_two' => t('Template Two'),
      'ca_applications_application_list_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_applications_application_list_template', 'ca_applications_application_list_template_one'),
    '#required' => TRUE,
  );
  $form['application_node'] = array(
    '#type' => 'select',
    '#title' => t('Application\'s Node Template'),
    '#description' => t('This effects the look and feel for the "ca_applications" Node Type.'),
    '#options' => array(
      'ca_applications_application_node_template_one' => t('Template One'),
      'ca_applications_application_node_template_two' => t('Template Two'),
      'ca_applications_application_node_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_applications_application_node_template', 'ca_applications_application_node_template_one'),
    '#required' => TRUE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('ca_applications_admin_settings_form_submit'),
  );

  return $form;
}

/**
 * Define the ca_applications_admin_settings_form_submit() function.
 */
function ca_applications_admin_settings_form_submit($form, $form_state) {
  variable_set('ca_applications_application_list_template', $form_state['values']['application_list']);
  variable_set('ca_applications_application_node_template', $form_state['values']['application_node']);
  drupal_set_message('Configuration has been saved.');
}
