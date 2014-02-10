<?php
/**
 * @file
 * text_format.filtered_html.inc
 */

$api = '2.0.0';

$data = (object) array(
  'cache' => '1',
  'filters' => array(
    'filter_autop' => array(
      'settings' => array(),
      'status' => '1',
      'weight' => '2',
    ),
    'filter_html' => array(
      'settings' => array(
        'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <h2> <h3> <pre> <object> <embed> <iframe> <param> <p> <br>',
        'filter_html_help' => 1,
        'filter_html_nofollow' => 0,
      ),
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
  'format' => 'filtered_html',
  'name' => 'Filtered HTML',
  'status' => '1',
  'weight' => '0',
);

$dependencies = array();

$optional = array(
  'permission.use_text_format_filtered_html' => 'permission.use_text_format_filtered_html',
  'wysiwyg.filtered_html' => 'wysiwyg.filtered_html',
);

$modules = array(
  0 => 'filter',
  1 => 'media',
);
