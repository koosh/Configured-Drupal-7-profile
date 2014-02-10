<?php
/**
 * @file
 * permission.display_drupal_links.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'display drupal links',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'admin_menu',
);
