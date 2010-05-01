<?php

/**
 * Form builder function for module settings.
 */
function wfwarning_admin_settings() {
  $form['wftitle'] = array(
    '#type' => 'textfield',
    '#title' => t('Workflow Title'),
    '#default_value' => variable_get('wfwarning_title', 'Non-Production'),
    '#description' => t('Enter the title for the banner to be displayed at the top of all pages of the site. e.g. Development, Staging, Testing'),
  );
  $form['wfdescr'] = array(
    '#type' => 'textfield',
    '#title' => t('Workflow Description'),
    '#default_value' => variable_get('wfwarning_descr', 'This is a non-production environment.'),
    '#description' => t('Enter a short description of the environment you are in. e.g. This is a development environment.'),
  );  
  $form = system_settings_form($form);
  return $form;
}


