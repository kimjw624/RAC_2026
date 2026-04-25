// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aircraft_msgs:msg/AircraftState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aircraft_msgs/msg/aircraft_state.hpp"


#ifndef AIRCRAFT_MSGS__MSG__DETAIL__AIRCRAFT_STATE__TRAITS_HPP_
#define AIRCRAFT_MSGS__MSG__DETAIL__AIRCRAFT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aircraft_msgs/msg/detail/aircraft_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aircraft_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AircraftState & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AircraftState & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AircraftState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace aircraft_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aircraft_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aircraft_msgs::msg::AircraftState & msg,
  std::ostream & out, size_t indentation = 0)
{
  aircraft_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aircraft_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aircraft_msgs::msg::AircraftState & msg)
{
  return aircraft_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aircraft_msgs::msg::AircraftState>()
{
  return "aircraft_msgs::msg::AircraftState";
}

template<>
inline const char * name<aircraft_msgs::msg::AircraftState>()
{
  return "aircraft_msgs/msg/AircraftState";
}

template<>
struct has_fixed_size<aircraft_msgs::msg::AircraftState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aircraft_msgs::msg::AircraftState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aircraft_msgs::msg::AircraftState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIRCRAFT_MSGS__MSG__DETAIL__AIRCRAFT_STATE__TRAITS_HPP_
