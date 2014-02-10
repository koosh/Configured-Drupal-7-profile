<?php
/**
 * @file
 * permission.administer_file_types.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer file types',
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
