<?php
/**
 * @file
 * permission.administer_files.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer files',
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
