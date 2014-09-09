<?php
/**
 * @file
 * gsb_feature_insight_display.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function gsb_feature_insight_display_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'insights_label_insights';
  $ds_field->label = 'Insights Idea Story label';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'idea_story|teaser
offsite_idea_story|teaser';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h2 class="insights-label insights">Insights</h2>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['insights_label_insights'] = $ds_field;

  return $export;
}
