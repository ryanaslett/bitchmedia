/* These truncates should only happen at the start of all genre queries */
TRUNCATE TABLE field_revision_field_genre;
TRUNCATE TABLE field_data_field_genre;

TRUNCATE TABLE field_revision_field_general_topic;
TRUNCATE TABLE field_data_field_general_topic;

TRUNCATE TABLE field_revision_field_specific_topic;
TRUNCATE TABLE field_data_field_specific_topic;

TRUNCATE TABLE field_revision_field_column_series;
TRUNCATE TABLE field_data_field_column_series;

/* Genre tags for blog post types */
SET @curRow := 0;
SET @curType := '';
INSERT INTO field_data_field_genre
  SELECT
    'node'    AS entity_type,
    'article' AS bundle,
    0         AS deleted,
    entity_id,
    revision_id,
    'und'     AS language,
    delta,
    field_genre_target_id
  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  ttd.tid    AS field_genre_target_id

                FROM bitch_d7.migrate_map_modbitchmedianodeblog mm
                  LEFT JOIN bitch_prod.term_node tn ON tn.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data td ON td.tid = tn.tid and td.vid IN (1,2,3)
                  LEFT JOIN bitch_d7.zz_tagmap tm ON (UPPER(tm.original_tag) = UPPER(td.name)) AND tm.genre != ''
                  LEFT JOIN bitch_d7.taxonomy_term_data ttd ON UPPER(ttd.name) = UPPER(tm.genre) AND ttd.vid = 1
                WHERE  tm.original_tag IS NOT NULL
                ORDER BY mm.destid1 ASC
              ) zz
       ) zx;
/* End Genre tags for blog post types */

/* Genre tags for article post types */
SET @curRow := 0;
SET @curType := '';
INSERT INTO field_data_field_genre
  SELECT
    'node'    AS entity_type,
    'article' AS bundle,
    0         AS deleted,
    entity_id,
    revision_id,
    'und'     AS language,
    delta,
    field_genre_target_id
  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  ttd.tid    AS field_genre_target_id

                FROM bitch_d7.migrate_map_modbitchmedianodearticle mm
                  LEFT JOIN bitch_prod.term_node tn ON tn.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data td ON td.tid = tn.tid AND td.vid IN (1,2,3)
                  LEFT JOIN bitch_d7.zz_tagmap tm ON (UPPER(tm.original_tag) = UPPER(td.name)) AND tm.genre != ''
                  LEFT JOIN bitch_d7.taxonomy_term_data ttd ON UPPER(ttd.name) = UPPER(tm.genre) AND ttd.vid = 1
                WHERE tm.original_tag IS NOT NULL
                ORDER BY mm.destid1 ASC
              ) zz
       ) zx;
/* End Genre Tags for article post types */


/* General Topic tags for blog post types */
SET @curRow := 0;
SET @curType := '';
INSERT INTO field_data_field_general_topic
  SELECT
    'node'    AS entity_type,
    'article' AS bundle,
    0         AS deleted,
    entity_id,
    revision_id,
    'und'     AS language,
    delta,
    field_general_topic_target_id

  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  ttd.tid    AS field_general_topic_target_id

                FROM bitch_d7.migrate_map_modbitchmedianodeblog mm
                  LEFT JOIN bitch_prod.term_node tn ON tn.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data td ON td.tid = tn.tid AND td.vid IN (1,2,3)
                  LEFT JOIN bitch_d7.zz_tagmap tm ON tm.original_tag = td.name
                  LEFT JOIN bitch_d7.taxonomy_term_data ttd
                    ON ttd.name = tm.general_topic AND ttd.vid = 6
                WHERE  tm.original_tag IS NOT NULL
                      AND tm.general_topic != ''
                ORDER BY mm.destid1 ASC
              ) zz
       ) zx;
/* END General Topic tags for blog post types */

/* General Topic tags for article post types */
SET @curRow := 0;
SET @curType := '';
INSERT INTO field_data_field_general_topic
  SELECT
    'node'    AS entity_type,
    'article' AS bundle,
    0         AS deleted,
    entity_id,
    revision_id,
    'und'     AS language,
    delta,
    field_general_topic_target_id

  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  ttd.tid    AS field_general_topic_target_id

                FROM bitch_d7.migrate_map_modbitchmedianodearticle mm
                  LEFT JOIN bitch_prod.term_node tn ON tn.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data td ON td.tid = tn.tid AND td.vid IN (2,3)
                  LEFT JOIN bitch_d7.zz_tagmap tm ON tm.original_tag = td.name
                  LEFT JOIN bitch_d7.taxonomy_term_data ttd
                    ON ttd.name = tm.general_topic AND ttd.vid = 6
                WHERE tm.original_tag IS NOT NULL
                      AND tm.general_topic != ''
                ORDER BY mm.destid1 ASC
              ) zz
       ) zx;
/* END General Topic tags for article post types */


/* Specific Topic tags for blog post types */
SET @curRow := 0;
SET @curType := '';
INSERT INTO field_data_field_specific_topic
  SELECT
    'node'    AS entity_type,
    'article' AS bundle,
    0         AS deleted,
    entity_id,
    revision_id,
    'und'     AS language,
    delta,
    field_specific_topic_target_id
  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  ttd.tid    AS field_specific_topic_target_id
                FROM bitch_d7.migrate_map_modbitchmedianodeblog mm
                  LEFT JOIN bitch_prod.term_node tn ON tn.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data td ON td.tid = tn.tid AND td.vid IN (1,2,3)
                  LEFT JOIN bitch_d7.zz_tagmap tm ON UPPER(tm.original_tag) = UPPER(td.name)
                  LEFT JOIN bitch_d7.taxonomy_term_data ttd
                    ON UPPER(ttd.name) = UPPER(tm.specific_tag) and ttd.vid = 4
                WHERE  tm.original_tag IS NOT NULL
                       AND tm.specific_tag != ''
                ORDER BY mm.destid1 ASC
              ) zz
       ) zx;
/* END Specific Topic tags for blog post types */

/* Specific Topic tags for article post types */
SET @curRow := 0;
SET @curType := '';
# INSERT INTO field_data_field_specific_topic
  SELECT
    'node'    AS entity_type,
    'article' AS bundle,
    0         AS deleted,
    entity_id,
    revision_id,
    'und'     AS language,
    delta,
    field_specific_topic_target_id
  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  ttd.tid    AS field_specific_topic_target_id,
                  ttd.*
                FROM bitch_d7.migrate_map_modbitchmedianodearticle mm
                  LEFT JOIN bitch_prod.term_node tn ON tn.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data td ON td.tid = tn.tid AND td.vid IN (1,2,3)
                  LEFT JOIN bitch_d7.zz_tagmap tm ON tm.original_tag = td.name
                  LEFT JOIN bitch_d7.taxonomy_term_data ttd
                    ON UPPER(ttd.name) = UPPER(tm.specific_tag) and ttd.vid = 4
                WHERE  tm.original_tag IS NOT NULL
                       AND tm.specific_tag != ''
                ORDER BY mm.destid1 ASC
              ) zz
       ) zx;
/* END Specific Topic tags for article post types */


/* Column/Series tags for blog post types */
/* There isnt one for articles as they dont have column/series */
SET @curRow := 0;
SET @curType := '';
INSERT INTO field_data_field_column_series
  SELECT
    'node'    AS entity_type,
    'article' AS bundle,
    0         AS deleted,
    entity_id,
    revision_id,
    'und'     AS language,
    delta,
    field_column_series_target_id

  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  newtermdata.tid    AS field_column_series_target_id
                FROM bitch_d7.migrate_map_modbitchmedianodeblog mm
                  LEFT JOIN bitch_prod.term_node oldtermnodemap ON oldtermnodemap.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data oldtermdata ON oldtermdata.tid = oldtermnodemap.tid
                  LEFT JOIN bitch_d7.zz_tagmap oldtag_to_newtag ON oldtag_to_newtag.original_tag = oldtermdata.name
                  LEFT JOIN bitch_d7.taxonomy_term_data newtermdata
                    ON newtermdata.name = oldtag_to_newtag.column_name AND newtermdata.vid = 5
                WHERE oldtermdata.vid REGEXP '2|3'
                      AND oldtermnodemap.nid IS NOT NULL
                      AND oldtag_to_newtag.original_tag IS NOT NULL
                      AND newtermdata.name IS NOT NULL
                ORDER BY mm.destid1 ASC
              ) zz
       ) zx;
/* END Column/Series tags for blog post types */

/* Update the revisions from the data */
INSERT INTO field_revision_field_genre
  SELECT * FROM field_data_field_genre;

INSERT INTO field_revision_field_general_topic
  SELECT * FROM field_data_field_general_topic;

INSERT INTO field_revision_field_specific_topic
  SELECT * FROM field_data_field_specific_topic;

INSERT INTO field_revision_field_column_series
  SELECT * FROM field_data_field_column_series;


