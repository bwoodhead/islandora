<?php

/**
 * @file
 * Islandora admin forms.
 */

/**
 * Creates the main islandora admin form. Called by drupal_get_form.
 *
 * @return The admin form.
 */
function islandora_admin_settings($form, &$form_state) {


  $form = array();

  $form['settings'] = array(
    '#type' => 'vertical_tabs',
  );

  $form['general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General'),
    '#weight' => -10,
    '#group' => 'settings',
  );

  $form['general']['fedora_repository_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Default collection name'),
    '#default_value' => variable_get('fedora_repository_name', 'Islandora demos collection'),
    '#description' => t('The Name of the collection to grab the list of items from'),
    '#required' => TRUE,
    '#weight' => -2
  );

  $form['general']['fedora_repository_pid'] = array(
    '#type' => 'textfield',
    '#title' => t('Default collection PID'),
    '#default_value' => variable_get('fedora_repository_pid', 'islandora:top'),
    '#description' => t('The PID of the collection object to grab the list of items from'),
    '#required' => TRUE,
    '#weight' => -2
  );


  $form['advanced'] = array(
    '#type' => 'fieldset',
    '#title' => t('Advanced'),
    '#weight' => -9,
    '#group' => 'settings',
  );

  $form['advanced']['fedora_collection_model_pid'] = array(
    '#type' => 'textfield',
    '#title' => t('Default Collection Model PID'),
    '#default_value' => variable_get('fedora_collection_model_pid', 'islandora:collectionCModel'),
    '#description' => t('The PID of the default Collection Model Object'),
    '#required' => TRUE,
    '#weight' => -2
  );

  $form['advanced']['fedora_content_model_collection_pid'] = array(
    '#type' => 'textfield',
    '#title' => t('Default Content Model Collection PID'),
    '#default_value' => variable_get('fedora_content_model_collection_pid', 'islandora:ContentModelCollection'),
    '#description' => t('The PID of the Content Model Collection Object'),
    '#required' => TRUE,
    '#weight' => -2
  );

  return system_settings_form($form);
}