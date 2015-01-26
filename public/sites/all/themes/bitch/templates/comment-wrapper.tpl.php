<?php
/**
 * @file
 * Returns the HTML for a wrapping container around comments.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728230
 */

// Render the comments and form first to see if we need headings.
$comments = render($content['comments']);
$comment_form = render($content['comment_form']);
$comment_count = render($node->comment_count);
?>
<section id="comments" class="comments <?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>

  <?php if ($comments && $node->type != 'forum'): ?>
    <?php if ($comment_count == '1'): ?>
      <h2 class="comments__title title"><?php print t('1 Comment Has Been Posted'); ?></h2>
    <?php else: ?>
      <h2 class="comments__title title"><?php print $comment_count . t(' Comments Have Been Posted'); ?></h2>      
    <?php endif; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div id="comments-inner">
    <?php print $comments; ?>

    <?php if ($comment_form): ?>
      <h2 class="comments__form-title title comment-form"><?php print t('Add new comment'); ?></h2>
      <?php print $comment_form; ?>
    <?php endif; ?>
  </div>
</section>
