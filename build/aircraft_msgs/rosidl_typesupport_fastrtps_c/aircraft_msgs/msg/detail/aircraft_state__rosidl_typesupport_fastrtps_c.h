// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from aircraft_msgs:msg/AircraftState.idl
// generated code does not contain a copyright notice
#ifndef AIRCRAFT_MSGS__MSG__DETAIL__AIRCRAFT_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define AIRCRAFT_MSGS__MSG__DETAIL__AIRCRAFT_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "aircraft_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aircraft_msgs/msg/detail/aircraft_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aircraft_msgs
bool cdr_serialize_aircraft_msgs__msg__AircraftState(
  const aircraft_msgs__msg__AircraftState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aircraft_msgs
bool cdr_deserialize_aircraft_msgs__msg__AircraftState(
  eprosima::fastcdr::Cdr &,
  aircraft_msgs__msg__AircraftState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aircraft_msgs
size_t get_serialized_size_aircraft_msgs__msg__AircraftState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aircraft_msgs
size_t max_serialized_size_aircraft_msgs__msg__AircraftState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aircraft_msgs
bool cdr_serialize_key_aircraft_msgs__msg__AircraftState(
  const aircraft_msgs__msg__AircraftState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aircraft_msgs
size_t get_serialized_size_key_aircraft_msgs__msg__AircraftState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aircraft_msgs
size_t max_serialized_size_key_aircraft_msgs__msg__AircraftState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aircraft_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aircraft_msgs, msg, AircraftState)();

#ifdef __cplusplus
}
#endif

#endif  // AIRCRAFT_MSGS__MSG__DETAIL__AIRCRAFT_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
