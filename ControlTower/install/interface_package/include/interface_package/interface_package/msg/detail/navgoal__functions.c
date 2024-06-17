// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_package:msg/Navgoal.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/navgoal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `order_id`
#include "rosidl_runtime_c/string_functions.h"

bool
interface_package__msg__Navgoal__init(interface_package__msg__Navgoal * msg)
{
  if (!msg) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__init(&msg->order_id)) {
    interface_package__msg__Navgoal__fini(msg);
    return false;
  }
  // x
  // y
  return true;
}

void
interface_package__msg__Navgoal__fini(interface_package__msg__Navgoal * msg)
{
  if (!msg) {
    return;
  }
  // order_id
  rosidl_runtime_c__String__fini(&msg->order_id);
  // x
  // y
}

bool
interface_package__msg__Navgoal__are_equal(const interface_package__msg__Navgoal * lhs, const interface_package__msg__Navgoal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->order_id), &(rhs->order_id)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
interface_package__msg__Navgoal__copy(
  const interface_package__msg__Navgoal * input,
  interface_package__msg__Navgoal * output)
{
  if (!input || !output) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__copy(
      &(input->order_id), &(output->order_id)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

interface_package__msg__Navgoal *
interface_package__msg__Navgoal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__Navgoal * msg = (interface_package__msg__Navgoal *)allocator.allocate(sizeof(interface_package__msg__Navgoal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__msg__Navgoal));
  bool success = interface_package__msg__Navgoal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__msg__Navgoal__destroy(interface_package__msg__Navgoal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__msg__Navgoal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__msg__Navgoal__Sequence__init(interface_package__msg__Navgoal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__Navgoal * data = NULL;

  if (size) {
    data = (interface_package__msg__Navgoal *)allocator.zero_allocate(size, sizeof(interface_package__msg__Navgoal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__msg__Navgoal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__msg__Navgoal__fini(&data[i - 1]);
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
interface_package__msg__Navgoal__Sequence__fini(interface_package__msg__Navgoal__Sequence * array)
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
      interface_package__msg__Navgoal__fini(&array->data[i]);
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

interface_package__msg__Navgoal__Sequence *
interface_package__msg__Navgoal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__Navgoal__Sequence * array = (interface_package__msg__Navgoal__Sequence *)allocator.allocate(sizeof(interface_package__msg__Navgoal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__msg__Navgoal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__msg__Navgoal__Sequence__destroy(interface_package__msg__Navgoal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__msg__Navgoal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__msg__Navgoal__Sequence__are_equal(const interface_package__msg__Navgoal__Sequence * lhs, const interface_package__msg__Navgoal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__msg__Navgoal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__msg__Navgoal__Sequence__copy(
  const interface_package__msg__Navgoal__Sequence * input,
  interface_package__msg__Navgoal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__msg__Navgoal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__msg__Navgoal * data =
      (interface_package__msg__Navgoal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__msg__Navgoal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__msg__Navgoal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__msg__Navgoal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
