<?php
/**
 * @file
 * role.editor.inc
 */

$api = '2.0.0';

$data = (object) array(
  'machine_name' => 'editor',
  'name' => 'editor',
  'weight' => '2',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'role_export',
);
