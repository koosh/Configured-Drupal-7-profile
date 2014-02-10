<?php
/**
 * @file
 * permission.administer_permissions.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer permissions',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'user',
);
