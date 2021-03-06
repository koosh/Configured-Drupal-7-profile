<?php
/**
 * @file
 * permission.revert_revisions.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'revert revisions',
  'roles' => array(
    0 => 'administrator',
    1 => 'editor',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
  'role.editor' => 'role.editor',
);

$optional = array();

$modules = array(
  0 => 'node',
);
