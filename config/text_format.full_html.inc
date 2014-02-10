<?php
/**
 * @file
 * text_format.full_html.inc
 */

$api = '2.0.0';

$data = (object) array(
  'cache' => '1',
  'filters' => array(
    'filter_autop' => array(
      'settings' => array(),
      'status' => '1',
      'weight' => '1',
    ),
    'filter_htmlcorrector' => array(
      'settings' => array(),
      'status' => '1',
      'weight' => '10',
    ),
    'filter_url' => array(
      'settings' => array(
        'filter_url_length' => '72',
      ),
      'status' => '1',
      'weight' => '0',
    ),
    'media_filter' => array(
      'settings' => array(),
      'status' => '1',
      'weight' => '10',
    ),
  ),
  'format' => 'full_html',
  'name' => 'Full HTML',
  'status' => '1',
  'weight' => '1',
);

$dependencies = array();

$optional = array(
  'permission.use_text_format_full_html' => 'permission.use_text_format_full_html',
  'wysiwyg.full_html' => 'wysiwyg.full_html',
);

$modules = array(
  0 => 'filter',
  1 => 'media',
);
