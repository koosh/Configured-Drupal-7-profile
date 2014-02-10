<?php
/**
 * @file
 * permission.administer_shortcuts.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer shortcuts',
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
