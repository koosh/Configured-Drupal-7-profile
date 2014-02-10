<?php
/**
 * @file
 * field.node.body.page.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'active' => '1',
    'cardinality' => '1',
    'columns' => array(
      'format' => array(
        'length' => 255,
        'not null' => FALSE,
        'type' => 'varchar',
      ),
      'summary' => array(
        'not null' => FALSE,
        'size' => 'big',
        'type' => 'text',
      ),
      'value' => array(
        'not null' => FALSE,
        'size' => 'big',
        'type' => 'text',
      ),
    ),
    'deleted' => '0',
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => '0',
    'module' => 'text',
    'settings' => array(),
    'storage' => array(
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_body' => array(
              'format' => 'body_format',
              'summary' => 'body_summary',
              'value' => 'body_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_body' => array(
              'format' => 'body_format',
              'summary' => 'body_summary',
              'value' => 'body_value',
            ),
          ),
        ),
      ),
      'module' => 'field_sql_storage',
      'settings' => array(),
      'type' => 'field_sql_storage',
    ),
    'translatable' => '0',
    'type' => 'text_with_summary',
  ),
  'field_instance' => array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  ),
);

$dependencies = array(
  'content_type.page' => 'content_type.page',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
