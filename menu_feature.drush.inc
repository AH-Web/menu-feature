<?php
/**
 * @file
 * commons_main_menu.drush.inc
 */

/**
 * Implements hook_drush_command().
 */
function commons_main_menu_drush_command() {
  $items = array();

  $items['menu-feature-import-menus'] = array(
    'description' => 'Import menus.',
    'drupal dependencies' => array('menu_import', 'menu_feature'),
    'aliases' => array('mf-import'),
  );

   $items['menu-feature-export-menus'] = array(
    'description' => 'Export menus.',
    'drupal dependencies' => array('menu_import', 'menu_feature'),
    'aliases' => array('mf-import'),
  );

  return $items;
}

/**
 * Drush command to import menus from commons_main_menu.
 */
function drush_menu_feature_import_menus() {
   $menu_files = menu_feature_menus();
   menu_feature_import_menus($menu_files);
}

/**
 * Drush command to import menus from commons_main_menu.
 */
function drush_menu_feature_export_menus() {
   $menu_files = menu_feature_menus();
   menu_feature_export_menus($menu_files);
}
