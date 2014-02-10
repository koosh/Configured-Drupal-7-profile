<?php
/**
 * @file
 * permission.customize_shortcut_links.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'customize shortcut links',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'shortcut',
);
