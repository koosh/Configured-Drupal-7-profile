<?php
/**
 * @file
 * permission.block_ip_addresses.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'block IP addresses',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'system',
);
