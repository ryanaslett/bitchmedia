<?php

/**
 * @file
 * Default theme implementation to display a tracked link.
 *
 * Note to all my future selves: 'field_analytics_event' should have been 'field_analytics_category'.
 * Its the analytics category.
 */
$foo = 'bar';
?>

<a href="<?php print render($variables['items'][0]['field_link_url']); ?>" title="<?php print render($variables['items'][0]['field_link_title']); ?>" onClick="_gaq.push(['_trackEvent', '<?php print render($variables['items'][0]['field_analytics_event']); ?>', '<?php print render($variables['items'][0]['field_analytics_action']); ?>', '<?php print render($variables['items'][0]['field_analytics_label']); ?>']);"><?php print render($variables['items'][0]['field_link_label']); ?></a>"
