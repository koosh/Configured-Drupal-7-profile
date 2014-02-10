<?php
/**
 * @file
 * permission.switch_shortcut_sets.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'switch shortcut sets',
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
