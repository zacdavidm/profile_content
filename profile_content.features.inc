<?php
/**
 * @file
 * profile_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function profile_content_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Profile'),
      'base' => 'node_content',
      'description' => t('A profile for a person, or organization.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
