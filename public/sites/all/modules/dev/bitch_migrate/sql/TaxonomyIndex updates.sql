INSERT INTO taxonomy_index
  SELECT t.entity_id AS nid, t.field_genre_target_id AS tid, 0 AS sticky, UNIX_TIMESTAMP() as created
  FROM bitch_d7.field_data_field_genre t;
INSERT INTO taxonomy_index
  SELECT t.entity_id AS nid, t.field_general_topic_target_id AS tid, 0 AS sticky, UNIX_TIMESTAMP() as created
  FROM bitch_d7.field_data_field_general_topic t;
INSERT INTO taxonomy_index
  SELECT t.entity_id AS nid, t.field_specific_topic_target_id AS tid, 0 AS sticky, UNIX_TIMESTAMP() as created
  FROM bitch_d7.field_data_field_specific_topic t;
INSERT INTO taxonomy_index
  SELECT t.entity_id AS nid, t.field_column_series_target_id AS tid, 0 AS sticky, UNIX_TIMESTAMP() as created
  FROM bitch_d7.field_data_field_column_series t;
INSERT INTO taxonomy_index
  SELECT t.entity_id AS nid, t.field_store_category_target_id AS tid, 0 AS sticky, UNIX_TIMESTAMP() as created
  FROM bitch_d7.field_data_field_store_category t;
