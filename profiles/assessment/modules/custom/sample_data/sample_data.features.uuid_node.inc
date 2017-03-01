<?php
/**
 * @file
 * sample_data.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function sample_data_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Event 1 - Wednesday event city1',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'event',
  'language' => 'und',
  'created' => 1488366260,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '28abdf67-25b2-40cf-801e-a46c470f2020',
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => 1485907200,
        'value2' => 1485907200,
        'timezone' => 'Africa/Abidjan',
        'timezone_db' => 'Africa/Abidjan',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_event_details' => array(
    'und' => array(
      0 => array(
        'value' => 'Event 1',
        'format' => NULL,
      ),
    ),
  ),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'AL',
        'sub_administrative_area' => NULL,
        'locality' => 'event city1',
        'dependent_locality' => '',
        'postal_code' => 11111,
        'thoroughfare' => 'event add1',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_event_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Event 1',
        'format' => NULL,
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
  'comment_count' => 0,
  'date' => '2017-03-01 11:04:20 +0000',
  'user_uuid' => '1c81e4b3-b306-4d8e-854a-5eb666e87d8b',
);
  $nodes[] = array(
  'title' => 'Event 2 - Wednesday event city2',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'event',
  'language' => 'und',
  'created' => 1488366390,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4398b58f-4410-453b-92c3-8b04bbf5a542',
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => 1489536000,
        'value2' => 1489536000,
        'timezone' => 'Africa/Abidjan',
        'timezone_db' => 'Africa/Abidjan',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_event_details' => array(
    'und' => array(
      0 => array(
        'value' => 'Event 2',
        'format' => NULL,
      ),
    ),
  ),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'AL',
        'sub_administrative_area' => NULL,
        'locality' => 'event city2',
        'dependent_locality' => '',
        'postal_code' => 11111,
        'thoroughfare' => 'event add2',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_event_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Event 2',
        'format' => NULL,
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
  'comment_count' => 0,
  'date' => '2017-03-01 11:06:30 +0000',
  'user_uuid' => '1c81e4b3-b306-4d8e-854a-5eb666e87d8b',
);
  $nodes[] = array(
  'title' => 'Event 4 - Friday event city4',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'event',
  'language' => 'und',
  'created' => 1488366530,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9ad223a6-f12e-4da2-9a8b-70cd16a767cf',
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => 1489104000,
        'value2' => 1489104000,
        'timezone' => 'Africa/Abidjan',
        'timezone_db' => 'Africa/Abidjan',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_event_details' => array(
    'und' => array(
      0 => array(
        'value' => 'Event 4',
        'format' => NULL,
      ),
    ),
  ),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'AL',
        'sub_administrative_area' => NULL,
        'locality' => 'event city4',
        'dependent_locality' => '',
        'postal_code' => 11111,
        'thoroughfare' => 'event add4',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_event_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Event 4',
        'format' => NULL,
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
  'comment_count' => 0,
  'date' => '2017-03-01 11:08:50 +0000',
  'user_uuid' => '1c81e4b3-b306-4d8e-854a-5eb666e87d8b',
);
  $nodes[] = array(
  'title' => 'Event 5 - Monday event city5',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'event',
  'language' => 'und',
  'created' => 1488366592,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9ecff2dc-099d-4a7c-af7d-12ea83d0ed7e',
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => 1489968000,
        'value2' => 1489968000,
        'timezone' => 'Africa/Abidjan',
        'timezone_db' => 'Africa/Abidjan',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_event_details' => array(
    'und' => array(
      0 => array(
        'value' => 'Event 5',
        'format' => NULL,
      ),
    ),
  ),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'AL',
        'sub_administrative_area' => NULL,
        'locality' => 'event city5',
        'dependent_locality' => '',
        'postal_code' => 11111,
        'thoroughfare' => 'event add5',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_event_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Event 5',
        'format' => NULL,
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
  'comment_count' => 0,
  'date' => '2017-03-01 11:09:52 +0000',
  'user_uuid' => '1c81e4b3-b306-4d8e-854a-5eb666e87d8b',
);
  $nodes[] = array(
  'title' => 'Event 3 - Wednesday event city3',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'event',
  'language' => 'und',
  'created' => 1488366467,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bbe9a154-a4ba-4f21-a07b-d9f79e70e900',
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => 1491350400,
        'value2' => 1491782400,
        'timezone' => 'Africa/Abidjan',
        'timezone_db' => 'Africa/Abidjan',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_event_details' => array(
    'und' => array(
      0 => array(
        'value' => 'Event 3',
        'format' => NULL,
      ),
    ),
  ),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'AL',
        'sub_administrative_area' => NULL,
        'locality' => 'event city3',
        'dependent_locality' => '',
        'postal_code' => 11111,
        'thoroughfare' => 'event add3',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_event_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Event 3',
        'format' => NULL,
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
  'comment_count' => 0,
  'date' => '2017-03-01 11:07:47 +0000',
  'user_uuid' => '1c81e4b3-b306-4d8e-854a-5eb666e87d8b',
);
  return $nodes;
}
