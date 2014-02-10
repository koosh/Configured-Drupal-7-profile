<?php
/**
 * @file
 * permission.administer_module_filter.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer module filter',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'module_filter',
);
