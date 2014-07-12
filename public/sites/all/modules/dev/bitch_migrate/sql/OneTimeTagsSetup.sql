DELETE FROM bitch_d7.taxonomy_term_data where vid = 4;
/* This query adds the specific tags to the term data */
INSERT INTO bitch_d7.taxonomy_term_data
  SELECT DISTINCT NULL,'4' AS vid, tm.specific_tag as name, '' as description, 'plain_text' as format, 0 as weight
  FROM zz_tagmap tm
  WHERE tm.specific_tag != '';

/* Add tags into the tagmap that happen to contain a keyword that matches a genre */
/* this is a prep function that only needed to be run once */
/* It may need to be run again if I reimport the tagmap spreadsheet */
INSERT INTO zz_tagmap (original_tag,genre)
  SELECT DISTINCT td.name AS original_tag, ttd.name AS genre
  FROM bitch_prod.term_data td
    LEFT JOIN taxonomy_term_data ttd on td.name LIKE CONCAT('%', ttd.name, '%')
    LEFT JOIN zz_tagmap tm ON UPPER(tm.original_tag) = UPPER(td.name)
  WHERE td.vid = 2 and ttd.vid =1
        AND original_tag IS NULL;
