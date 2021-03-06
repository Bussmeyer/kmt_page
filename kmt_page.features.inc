<?php
/**
 * @file
 * kmt_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kmt_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function kmt_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
