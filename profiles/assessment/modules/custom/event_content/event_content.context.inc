<?php
/**
 * @file
 * event_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function event_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'upcomingevents';
  $context->description = 'Upcoming Eventsc';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-upcoming_event-block' => array(
          'module' => 'views',
          'delta' => 'upcoming_event-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Upcoming Eventsc');
  $export['upcomingevents'] = $context;

  return $export;
}
