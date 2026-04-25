// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aircraft_msgs:msg/AircraftState.idl
// generated code does not contain a copyright notice
#include "aircraft_msgs/msg/detail/aircraft_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aircraft_msgs__msg__AircraftState__init(aircraft_msgs__msg__AircraftState * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
aircraft_msgs__msg__AircraftState__fini(aircraft_msgs__msg__AircraftState * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
aircraft_msgs__msg__AircraftState__are_equal(const aircraft_msgs__msg__AircraftState * lhs, const aircraft_msgs__msg__AircraftState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
aircraft_msgs__msg__AircraftState__copy(
  const aircraft_msgs__msg__AircraftState * input,
  aircraft_msgs__msg__AircraftState * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

aircraft_msgs__msg__AircraftState *
aircraft_msgs__msg__AircraftState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aircraft_msgs__msg__AircraftState * msg = (aircraft_msgs__msg__AircraftState *)allocator.allocate(sizeof(aircraft_msgs__msg__AircraftState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aircraft_msgs__msg__AircraftState));
  bool success = aircraft_msgs__msg__AircraftState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aircraft_msgs__msg__AircraftState__destroy(aircraft_msgs__msg__AircraftState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aircraft_msgs__msg__AircraftState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aircraft_msgs__msg__AircraftState__Sequence__init(aircraft_msgs__msg__AircraftState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aircraft_msgs__msg__AircraftState * data = NULL;

  if (size) {
    data = (aircraft_msgs__msg__AircraftState *)allocator.zero_allocate(size, sizeof(aircraft_msgs__msg__AircraftState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aircraft_msgs__msg__AircraftState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aircraft_msgs__msg__AircraftState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aircraft_msgs__msg__AircraftState__Sequence__fini(aircraft_msgs__msg__AircraftState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aircraft_msgs__msg__AircraftState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aircraft_msgs__msg__AircraftState__Sequence *
aircraft_msgs__msg__AircraftState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aircraft_msgs__msg__AircraftState__Sequence * array = (aircraft_msgs__msg__AircraftState__Sequence *)allocator.allocate(sizeof(aircraft_msgs__msg__AircraftState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aircraft_msgs__msg__AircraftState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aircraft_msgs__msg__AircraftState__Sequence__destroy(aircraft_msgs__msg__AircraftState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aircraft_msgs__msg__AircraftState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aircraft_msgs__msg__AircraftState__Sequence__are_equal(const aircraft_msgs__msg__AircraftState__Sequence * lhs, const aircraft_msgs__msg__AircraftState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aircraft_msgs__msg__AircraftState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aircraft_msgs__msg__AircraftState__Sequence__copy(
  const aircraft_msgs__msg__AircraftState__Sequence * input,
  aircraft_msgs__msg__AircraftState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aircraft_msgs__msg__AircraftState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aircraft_msgs__msg__AircraftState * data =
      (aircraft_msgs__msg__AircraftState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aircraft_msgs__msg__AircraftState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aircraft_msgs__msg__AircraftState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aircraft_msgs__msg__AircraftState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
