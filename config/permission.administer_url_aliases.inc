<?php
/**
 * @file
 * permission.administer_url_aliases.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer url aliases',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'path',
);
