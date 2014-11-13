<?php
/**
 * @file
 * bitch_issues.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bitch_issues_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_article'
  $field_bases['field_article'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_article',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'field_default_token' => array(
            'status' => TRUE,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'DESC',
          'property' => 'nid',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'article' => 'article',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_author_text'
  $field_bases['field_author_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_author_text',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_bitch_list'
  $field_bases['field_bitch_list'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bitch_list',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_book_movie_album_title'
  $field_bases['field_book_movie_album_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_book_movie_album_title',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_book_reviews'
  $field_bases['field_book_reviews'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_book_reviews',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'field_article_node' => array(
        'columns' => array(
          'field_article_target_id' => 'nid',
        ),
        'table' => 'node',
      ),
      'field_book_movie_album_title_format' => array(
        'columns' => array(
          'field_book_movie_album_title_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_creator_format' => array(
        'columns' => array(
          'field_creator_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_organization_format' => array(
        'columns' => array(
          'field_organization_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_review_author_format' => array(
        'columns' => array(
          'field_review_author_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'field_article_target_id' => array(
        0 => 'field_article_target_id',
      ),
      'field_book_movie_album_title_format' => array(
        0 => 'field_book_movie_album_title_format',
      ),
      'field_creator_format' => array(
        0 => 'field_creator_format',
      ),
      'field_organization_format' => array(
        0 => 'field_organization_format',
      ),
      'field_review_author_format' => array(
        0 => 'field_review_author_format',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
    ),
    'translatable' => 0,
    'type' => 'magazine_review',
  );

  // Exported field_base: 'field_columns'
  $field_bases['field_columns'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_columns',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'field_article_node' => array(
        'columns' => array(
          'field_article_target_id' => 'nid',
        ),
        'table' => 'node',
      ),
      'field_author_text_format' => array(
        'columns' => array(
          'field_author_text_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_headline_format' => array(
        'columns' => array(
          'field_headline_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_subhead_format' => array(
        'columns' => array(
          'field_subhead_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'field_article_target_id' => array(
        0 => 'field_article_target_id',
      ),
      'field_author_text_format' => array(
        0 => 'field_author_text_format',
      ),
      'field_headline_format' => array(
        0 => 'field_headline_format',
      ),
      'field_subhead_format' => array(
        0 => 'field_subhead_format',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
    ),
    'translatable' => 0,
    'type' => 'magazine_content',
  );

  // Exported field_base: 'field_cover_lines'
  $field_bases['field_cover_lines'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cover_lines',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_creator'
  $field_bases['field_creator'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_creator',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_features'
  $field_bases['field_features'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_features',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'field_article_node' => array(
        'columns' => array(
          'field_article_target_id' => 'nid',
        ),
        'table' => 'node',
      ),
      'field_author_text_format' => array(
        'columns' => array(
          'field_author_text_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_headline_format' => array(
        'columns' => array(
          'field_headline_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_subhead_format' => array(
        'columns' => array(
          'field_subhead_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'field_article_target_id' => array(
        0 => 'field_article_target_id',
      ),
      'field_author_text_format' => array(
        0 => 'field_author_text_format',
      ),
      'field_headline_format' => array(
        0 => 'field_headline_format',
      ),
      'field_subhead_format' => array(
        0 => 'field_subhead_format',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
    ),
    'translatable' => 0,
    'type' => 'magazine_content',
  );

  // Exported field_base: 'field_headline'
  $field_bases['field_headline'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_headline',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_in_every_issue'
  $field_bases['field_in_every_issue'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_in_every_issue',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_issue_cover'
  $field_bases['field_issue_cover'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_issue_cover',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_issue_number'
  $field_bases['field_issue_number'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_issue_number',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 3,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_issue_season_and_year'
  $field_bases['field_issue_season_and_year'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_issue_season_and_year',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_issue_year'
  $field_bases['field_issue_year'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_issue_year',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_love_it_shove_it'
  $field_bases['field_love_it_shove_it'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_love_it_shove_it',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'field_article_node' => array(
        'columns' => array(
          'field_article_target_id' => 'nid',
        ),
        'table' => 'node',
      ),
      'field_author_text_format' => array(
        'columns' => array(
          'field_author_text_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_headline_format' => array(
        'columns' => array(
          'field_headline_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_subhead_format' => array(
        'columns' => array(
          'field_subhead_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'field_article_target_id' => array(
        0 => 'field_article_target_id',
      ),
      'field_author_text_format' => array(
        0 => 'field_author_text_format',
      ),
      'field_headline_format' => array(
        0 => 'field_headline_format',
      ),
      'field_subhead_format' => array(
        0 => 'field_subhead_format',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
    ),
    'translatable' => 0,
    'type' => 'magazine_content',
  );

  // Exported field_base: 'field_music_reviews'
  $field_bases['field_music_reviews'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_music_reviews',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'field_article_node' => array(
        'columns' => array(
          'field_article_target_id' => 'nid',
        ),
        'table' => 'node',
      ),
      'field_book_movie_album_title_format' => array(
        'columns' => array(
          'field_book_movie_album_title_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_creator_format' => array(
        'columns' => array(
          'field_creator_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_organization_format' => array(
        'columns' => array(
          'field_organization_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_review_author_format' => array(
        'columns' => array(
          'field_review_author_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'field_article_target_id' => array(
        0 => 'field_article_target_id',
      ),
      'field_book_movie_album_title_format' => array(
        0 => 'field_book_movie_album_title_format',
      ),
      'field_creator_format' => array(
        0 => 'field_creator_format',
      ),
      'field_organization_format' => array(
        0 => 'field_organization_format',
      ),
      'field_review_author_format' => array(
        0 => 'field_review_author_format',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
    ),
    'translatable' => 0,
    'type' => 'magazine_review',
  );

  // Exported field_base: 'field_organization'
  $field_bases['field_organization'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_product_images'
  $field_bases['field_product_images'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_product_images',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_review_author'
  $field_bases['field_review_author'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_review_author',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_screen_reviews'
  $field_bases['field_screen_reviews'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_screen_reviews',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'field_article_node' => array(
        'columns' => array(
          'field_article_target_id' => 'nid',
        ),
        'table' => 'node',
      ),
      'field_book_movie_album_title_format' => array(
        'columns' => array(
          'field_book_movie_album_title_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_creator_format' => array(
        'columns' => array(
          'field_creator_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_organization_format' => array(
        'columns' => array(
          'field_organization_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
      'field_review_author_format' => array(
        'columns' => array(
          'field_review_author_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'field_article_target_id' => array(
        0 => 'field_article_target_id',
      ),
      'field_book_movie_album_title_format' => array(
        0 => 'field_book_movie_album_title_format',
      ),
      'field_creator_format' => array(
        0 => 'field_creator_format',
      ),
      'field_organization_format' => array(
        0 => 'field_organization_format',
      ),
      'field_review_author_format' => array(
        0 => 'field_review_author_format',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id',
      ),
    ),
    'translatable' => 0,
    'type' => 'magazine_review',
  );

  // Exported field_base: 'field_sold_out_flag'
  $field_bases['field_sold_out_flag'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sold_out_flag',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_store_category'
  $field_bases['field_store_category'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_store_category',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'taxonomy_term_data' => array(
        'columns' => array(
          'target_id' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'field_default_token' => array(
            'status' => TRUE,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'store_category' => 'store_category',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_subhead'
  $field_bases['field_subhead'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subhead',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
