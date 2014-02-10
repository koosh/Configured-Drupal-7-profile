<?php
/**
 * @file
 * role.administrator.inc
 */

$api = '2.0.0';

$data = (object) array(
  'machine_name' => 'administrator',
  'name' => 'administrator',
  'weight' => '3',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'role_export',
);
