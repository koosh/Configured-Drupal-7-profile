<?php
/**
 * @file
 * permission.import_media.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'import media',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'media',
);
