// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aircraft_msgs:msg/AircraftState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aircraft_msgs/msg/aircraft_state.hpp"


#ifndef AIRCRAFT_MSGS__MSG__DETAIL__AIRCRAFT_STATE__STRUCT_HPP_
#define AIRCRAFT_MSGS__MSG__DETAIL__AIRCRAFT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aircraft_msgs__msg__AircraftState __attribute__((deprecated))
#else
# define DEPRECATED__aircraft_msgs__msg__AircraftState __declspec(deprecated)
#endif

namespace aircraft_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AircraftState_
{
  using Type = AircraftState_<ContainerAllocator>;

  explicit AircraftState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit AircraftState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    aircraft_msgs::msg::AircraftState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aircraft_msgs::msg::AircraftState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aircraft_msgs::msg::AircraftState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aircraft_msgs::msg::AircraftState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aircraft_msgs::msg::AircraftState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aircraft_msgs::msg::AircraftState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aircraft_msgs::msg::AircraftState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aircraft_msgs::msg::AircraftState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aircraft_msgs::msg::AircraftState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aircraft_msgs::msg::AircraftState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aircraft_msgs__msg__AircraftState
    std::shared_ptr<aircraft_msgs::msg::AircraftState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aircraft_msgs__msg__AircraftState
    std::shared_ptr<aircraft_msgs::msg::AircraftState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AircraftState_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const AircraftState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AircraftState_

// alias to use template instance with default allocator
using AircraftState =
  aircraft_msgs::msg::AircraftState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aircraft_msgs

#endif  // AIRCRAFT_MSGS__MSG__DETAIL__AIRCRAFT_STATE__STRUCT_HPP_
