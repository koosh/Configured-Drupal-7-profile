<?php
/**
 * @file
 * permission.context_ajax_block_access.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'context ajax block access',
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
