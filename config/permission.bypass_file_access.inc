<?php
/**
 * @file
 * permission.bypass_file_access.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'bypass file access',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'file_entity',
);
