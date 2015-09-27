<?php
/**
 * @file
 * intoto_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function intoto_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: thumb_tiny.
  $styles['thumb_tiny'] = array(
    'label' => 'thumb_tiny',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnail_square.
  $styles['thumbnail_square'] = array(
    'label' => 'thumbnail_square',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
