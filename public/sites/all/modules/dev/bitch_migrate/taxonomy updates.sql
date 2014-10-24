

TRUNCATE TABLE field_revision_field_general_topic;
SET @curRow := 0;

SET @curType := '';

INSERT INTO field_revision_field_general_topic SELECT   'node' AS entity_type,  'article' AS bundle, 0 AS deleted, entity_id, revision_id, 'und' AS language, delta, field_general_topic_target_id
FROM (
  SELECT *,
  @curRow := if(@curType = entity_id, @curRow +1, 0) as delta,
  @curType := entity_id
  FROM (
    SELECT DISTINCT mm.destid1 AS entity_id, mm.destid1 AS revision_id,  ttd.tid AS field_general_topic_target_id

    FROM bitch_d7.`migrate_map_modbitchmedianodeblog` mm
/* Get all the imported nodes */
LEFT JOIN bitch_prod.term_node tn on tn.nid = mm.sourceid1
/* Join in the terms associated with the original nodes */
LEFT JOIN bitch_prod.term_data td on td.tid = tn.tid
/* Join in the term data so we can filter it by vocabulary */
LEFT JOIN bitch_d7.tagmap tm on tm.original_tag = td.name
/* Join in the tag map such that the original tag on the tagname associated with the original node */
LEFT JOIN bitch_d7.taxonomy_term_data ttd on ttd.name = tm.general_topic and ttd.vid=6
WHERE td.vid = 2
and tm.original_tag IS NOT NULL
/* Finally add in the taxonomy term data where the general topic in the mapping equals the general topic of the d7 taxonomy */
AND tm.general_topic != ''
/* only for the ones that have a general topic */
AND tm.subtopic = ''
ORDER BY mm.destid1 ASC/* not the ones with a subtopic */
) zz
) zx;
