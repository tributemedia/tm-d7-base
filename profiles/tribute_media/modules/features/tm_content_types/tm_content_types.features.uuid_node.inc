<?php
/**
 * @file
 * tm_content_types.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function tm_content_types_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Contact',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1397015091,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3d6e04d1-480c-490b-9a87-2967030b9df5',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Thank you for taking time to view this demo site. It\'s purpose is only to show off this particular theme.</p>

<p>If you\'d like more information on how Tribute Media can help you improve your Web presence, get found online or grow your online business, please contact us using the contact information below or with the form at the right.</p>

<p>This particular view of this contact page does not show any imagery or a map to your location. If that is appropriate for your particular website, these items can be added as necessary.</p>

<div class="vcard" id="">
<div class="org">Tribute Media</div>

<div class="adr">
<div class="street-address">136 East Idaho Avenue</div>
Meridian, Idaho 83646-5376</div>

<div class="tel">208-489-0123</div>
</div>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_form_stacked' => array(
    'und' => array(
      0 => array(
        'value' => 'side-by-side',
      ),
    ),
  ),
  'field_remove_navigation' => array(
    'und' => array(
      0 => array(
        'value' => 'no-navigation',
      ),
    ),
  ),
  'meta_canonical' => array(),
  'meta_copyright' => array(),
  'meta_description' => array(),
  'meta_keywords' => array(),
  'meta_robots' => array(
    'und' => array(
      0 => array(
        'metatags_quick' => '',
        'meta_name' => 'robots',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => 3,
    'next_serial' => 1,
    'confirmation' => '<p>Thank you for contacting us. We\'ll be in touch soon.</p>
',
    'confirmation_format' => 'full_html',
    'redirect_url' => '/thank-you-page',
    'status' => 1,
    'block' => 1,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => 'Contact Us',
    'submit_limit' => 1,
    'submit_interval' => 3600,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 0,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 0,
    'progressbar_include_confirmation' => 0,
    'progressbar_label_first' => '',
    'progressbar_label_confirmation' => '',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'full_html',
    'preview_excluded_components' => array(),
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      1 => array(
        'nid' => 3,
        'eid' => 1,
        'email' => 3,
        'subject' => 'Thank you for your submission',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'Thank you for contacting [site:name]. We will be in touch soon. 

For your reference, you submitted the following:
[submission:values]',
        'excluded_components' => array(
          0 => 6,
        ),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
      ),
    ),
    'components' => array(
      2 => array(
        'nid' => 3,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'name',
        'name' => 'Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 1,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 3,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'description' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 3,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'phone',
        'name' => 'Phone',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 3,
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'comments',
        'name' => 'Comments',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'cols' => '',
          'rows' => '',
          'description' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 4,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 3,
        'cid' => 7,
        'pid' => 0,
        'form_key' => 'subscribe_to_our_newsletter',
        'name' => 'Subscribe to our newsletter?',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'Yes|Yes
No|No',
          'multiple' => 0,
          'title_display' => 'inline',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 5,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 3,
        'cid' => 6,
        'pid' => 0,
        'form_key' => 'what_is_2__2',
        'name' => 'What is 2 + 2?',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => 'nosee',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 0,
        'weight' => 6,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'date' => '2014-04-08 21:44:51 -0600',
  'user_uuid' => 'c1f8b3d4-d5c5-4892-832e-bb9c536534a6',
);
  $nodes[] = array(
  'title' => 'About',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1433366132,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a3f7aa12-ff8b-4252-b608-0e8a1150f4e9',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Lorem ipsum dolor sit amet, sed te veri detraxit, dicta graece adipiscing ei cum, nec in suscipit euripidis consetetur. Ei tantas facete suavitate eos, has at exerci tritani verterem. Vim possim dolores ut, per errem ubique id. Duo id commune offendit democritum, duo no augue dicta abhorreant. Nec ut sanctus inermis, etiam senserit in eos. Cu reque everti iriure pri.</p>

<p>Usu ferri verear conceptam ne, cu novum laoreet eligendi per. Has nostrud utroque qualisque ut, case quaeque lucilius et quo, id quo bonorum posidonium. Mei ea paulo accommodare, no maiorum perfecto has. Mei diam quot vide ad.</p>

<p>Nam te invenire scribentur liberavisse, ei vidisse epicurei vulputate vim. Vel at saepe maiestatis, eu noster detraxit has. Et sea erat diceret dignissim. His an fugit referrentur, te adolescens intellegam vel, sea laudem ornatus reprehendunt eu.</p>

<p>Consulatu honestatis eos id. Idque verear nam ad, mundi oblique ut quo. Qui tollit definitiones ut. Debet equidem cu qui. Id omnium pericula constituam mei, an per nonumy nostrud, illud oratio vel ex. Ei velit veritus est, sit cu modo propriae, cu usu odio stet.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(),
  'meta_canonical' => array(),
  'meta_copyright' => array(),
  'meta_description' => array(
    'und' => array(
      0 => array(
        'metatags_quick' => 'test',
        'meta_name' => 'description',
      ),
    ),
  ),
  'meta_keywords' => array(),
  'meta_robots' => array(
    'und' => array(
      0 => array(
        'metatags_quick' => '',
        'meta_name' => 'robots',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '71ba82a5-89ba-4844-b197-97489da2b2c9',
        'uuid' => '71ba82a5-89ba-4844-b197-97489da2b2c9',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-06-03 15:15:32 -0600',
  'user_uuid' => 'c1f8b3d4-d5c5-4892-832e-bb9c536534a6',
);
  $nodes[] = array(
  'title' => 'Thank You Page',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'und',
  'created' => 1455063825,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dd6dfc3e-9bda-47b7-bb4e-13f0f53b9c26',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div style="text-align:center;">
<h2>Thank You!</h2>

<h5>We are grateful that you contacted us.</h5>
</div>

<h5>What now?</h5>

<ol>
	<li>We\'ll be sure to review your message and contact you as appropriate.</li>
	<li>If you need to get in touch with us sooner, please call us from our phone number on our&nbsp;<a href="/contact">contact</a>&nbsp;page.</li>
	<li>Or, you can&nbsp;<a href="/">click here</a>&nbsp;to go to the home page.</li>
</ol>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(),
  'meta_canonical' => array(),
  'meta_copyright' => array(),
  'meta_description' => array(
    'und' => array(
      0 => array(
        'metatags_quick' => 'Thank you page.',
        'meta_name' => 'description',
      ),
    ),
  ),
  'meta_keywords' => array(),
  'meta_robots' => array(
    'und' => array(
      0 => array(
        'metatags_quick' => 'noarchive,nofollow,noindex,noodp,nosnippet,noydir',
        'meta_name' => 'robots',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '71ba82a5-89ba-4844-b197-97489da2b2c9',
        'uuid' => '71ba82a5-89ba-4844-b197-97489da2b2c9',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-02-09 17:23:45 -0700',
  'user_uuid' => 'c1f8b3d4-d5c5-4892-832e-bb9c536534a6',
);
  return $nodes;
}
