// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aircraft_msgs:msg/AircraftState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aircraft_msgs/msg/aircraft_state.h"


#ifndef AIRCRAFT_MSGS__MSG__DETAIL__AIRCRAFT_STATE__STRUCT_H_
#define AIRCRAFT_MSGS__MSG__DETAIL__AIRCRAFT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/AircraftState in the package aircraft_msgs.
/**
  * TODO Define suitable msg type
 */
typedef struct aircraft_msgs__msg__AircraftState
{
  uint8_t structure_needs_at_least_one_member;
} aircraft_msgs__msg__AircraftState;

// Struct for a sequence of aircraft_msgs__msg__AircraftState.
typedef struct aircraft_msgs__msg__AircraftState__Sequence
{
  aircraft_msgs__msg__AircraftState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aircraft_msgs__msg__AircraftState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIRCRAFT_MSGS__MSG__DETAIL__AIRCRAFT_STATE__STRUCT_H_
