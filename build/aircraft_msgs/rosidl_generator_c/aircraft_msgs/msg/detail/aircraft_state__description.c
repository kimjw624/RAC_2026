// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aircraft_msgs:msg/AircraftState.idl
// generated code does not contain a copyright notice

#include "aircraft_msgs/msg/detail/aircraft_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aircraft_msgs
const rosidl_type_hash_t *
aircraft_msgs__msg__AircraftState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x61, 0x33, 0xf3, 0xba, 0xce, 0x0d, 0x63, 0x9b,
      0x53, 0x48, 0x88, 0x71, 0xc8, 0x81, 0xd3, 0xbb,
      0x5b, 0x4f, 0xcb, 0x02, 0x6f, 0x69, 0x7f, 0xc1,
      0xbe, 0x3f, 0xea, 0x44, 0x6d, 0xb1, 0x43, 0x21,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aircraft_msgs__msg__AircraftState__TYPE_NAME[] = "aircraft_msgs/msg/AircraftState";

// Define type names, field names, and default values
static char aircraft_msgs__msg__AircraftState__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field aircraft_msgs__msg__AircraftState__FIELDS[] = {
  {
    {aircraft_msgs__msg__AircraftState__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
aircraft_msgs__msg__AircraftState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {aircraft_msgs__msg__AircraftState__TYPE_NAME, 31, 31},
      {aircraft_msgs__msg__AircraftState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# TODO Define suitable msg type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aircraft_msgs__msg__AircraftState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {aircraft_msgs__msg__AircraftState__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aircraft_msgs__msg__AircraftState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *aircraft_msgs__msg__AircraftState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
