<?php
/**
 * @file
 * permission.delete_any_document_files.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any document files',
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
  0 => 'file_entity',
);
