<?php
/**
 * @file
 * permission.administer_contexts.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer contexts',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'context_ui',
);
