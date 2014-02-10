<?php
/**
 * @file
 * permission.bypass_node_access.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'bypass node access',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'node',
);
