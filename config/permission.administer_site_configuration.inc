<?php
/**
 * @file
 * permission.administer_site_configuration.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer site configuration',
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
