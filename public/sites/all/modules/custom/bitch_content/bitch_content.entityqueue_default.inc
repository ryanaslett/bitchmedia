<?php
/**
 * @file
 * bitch_content.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function bitch_content_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'genre_queue';
  $queue->label = 'Genre Queue';
  $queue->language = 'en';
  $queue->handler = 'multiple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'article' => 'article',
      'podcast' => 'podcast',
    ),
    'min_size' => '0',
    'max_size' => '3',
    'act_as_queue' => 0,
  );
  $export['genre_queue'] = $queue;

  return $export;
}
