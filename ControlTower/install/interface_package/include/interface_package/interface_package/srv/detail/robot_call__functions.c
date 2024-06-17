// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_package:srv/RobotCall.idl
// generated code does not contain a copyright notice
#include "interface_package/srv/detail/robot_call__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `order_id`
// Member `store_id`
// Member `kiosk_id`
// Member `uid`
// Member `robot_id`
#include "rosidl_runtime_c/string_functions.h"

bool
interface_package__srv__RobotCall_Request__init(interface_package__srv__RobotCall_Request * msg)
{
  if (!msg) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__init(&msg->order_id)) {
    interface_package__srv__RobotCall_Request__fini(msg);
    return false;
  }
  // store_id
  if (!rosidl_runtime_c__String__init(&msg->store_id)) {
    interface_package__srv__RobotCall_Request__fini(msg);
    return false;
  }
  // kiosk_id
  if (!rosidl_runtime_c__String__init(&msg->kiosk_id)) {
    interface_package__srv__RobotCall_Request__fini(msg);
    return false;
  }
  // uid
  if (!rosidl_runtime_c__String__init(&msg->uid)) {
    interface_package__srv__RobotCall_Request__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    interface_package__srv__RobotCall_Request__fini(msg);
    return false;
  }
  return true;
}

void
interface_package__srv__RobotCall_Request__fini(interface_package__srv__RobotCall_Request * msg)
{
  if (!msg) {
    return;
  }
  // order_id
  rosidl_runtime_c__String__fini(&msg->order_id);
  // store_id
  rosidl_runtime_c__String__fini(&msg->store_id);
  // kiosk_id
  rosidl_runtime_c__String__fini(&msg->kiosk_id);
  // uid
  rosidl_runtime_c__String__fini(&msg->uid);
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
}

bool
interface_package__srv__RobotCall_Request__are_equal(const interface_package__srv__RobotCall_Request * lhs, const interface_package__srv__RobotCall_Request * rhs)
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
  // store_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->store_id), &(rhs->store_id)))
  {
    return false;
  }
  // kiosk_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->kiosk_id), &(rhs->kiosk_id)))
  {
    return false;
  }
  // uid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uid), &(rhs->uid)))
  {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  return true;
}

bool
interface_package__srv__RobotCall_Request__copy(
  const interface_package__srv__RobotCall_Request * input,
  interface_package__srv__RobotCall_Request * output)
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
  // store_id
  if (!rosidl_runtime_c__String__copy(
      &(input->store_id), &(output->store_id)))
  {
    return false;
  }
  // kiosk_id
  if (!rosidl_runtime_c__String__copy(
      &(input->kiosk_id), &(output->kiosk_id)))
  {
    return false;
  }
  // uid
  if (!rosidl_runtime_c__String__copy(
      &(input->uid), &(output->uid)))
  {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  return true;
}

interface_package__srv__RobotCall_Request *
interface_package__srv__RobotCall_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__srv__RobotCall_Request * msg = (interface_package__srv__RobotCall_Request *)allocator.allocate(sizeof(interface_package__srv__RobotCall_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__srv__RobotCall_Request));
  bool success = interface_package__srv__RobotCall_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__srv__RobotCall_Request__destroy(interface_package__srv__RobotCall_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__srv__RobotCall_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__srv__RobotCall_Request__Sequence__init(interface_package__srv__RobotCall_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__srv__RobotCall_Request * data = NULL;

  if (size) {
    data = (interface_package__srv__RobotCall_Request *)allocator.zero_allocate(size, sizeof(interface_package__srv__RobotCall_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__srv__RobotCall_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__srv__RobotCall_Request__fini(&data[i - 1]);
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
interface_package__srv__RobotCall_Request__Sequence__fini(interface_package__srv__RobotCall_Request__Sequence * array)
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
      interface_package__srv__RobotCall_Request__fini(&array->data[i]);
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

interface_package__srv__RobotCall_Request__Sequence *
interface_package__srv__RobotCall_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__srv__RobotCall_Request__Sequence * array = (interface_package__srv__RobotCall_Request__Sequence *)allocator.allocate(sizeof(interface_package__srv__RobotCall_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__srv__RobotCall_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__srv__RobotCall_Request__Sequence__destroy(interface_package__srv__RobotCall_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__srv__RobotCall_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__srv__RobotCall_Request__Sequence__are_equal(const interface_package__srv__RobotCall_Request__Sequence * lhs, const interface_package__srv__RobotCall_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__srv__RobotCall_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__srv__RobotCall_Request__Sequence__copy(
  const interface_package__srv__RobotCall_Request__Sequence * input,
  interface_package__srv__RobotCall_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__srv__RobotCall_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__srv__RobotCall_Request * data =
      (interface_package__srv__RobotCall_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__srv__RobotCall_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__srv__RobotCall_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__srv__RobotCall_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
interface_package__srv__RobotCall_Response__init(interface_package__srv__RobotCall_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
interface_package__srv__RobotCall_Response__fini(interface_package__srv__RobotCall_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
interface_package__srv__RobotCall_Response__are_equal(const interface_package__srv__RobotCall_Response * lhs, const interface_package__srv__RobotCall_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
interface_package__srv__RobotCall_Response__copy(
  const interface_package__srv__RobotCall_Response * input,
  interface_package__srv__RobotCall_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

interface_package__srv__RobotCall_Response *
interface_package__srv__RobotCall_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__srv__RobotCall_Response * msg = (interface_package__srv__RobotCall_Response *)allocator.allocate(sizeof(interface_package__srv__RobotCall_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__srv__RobotCall_Response));
  bool success = interface_package__srv__RobotCall_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__srv__RobotCall_Response__destroy(interface_package__srv__RobotCall_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__srv__RobotCall_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__srv__RobotCall_Response__Sequence__init(interface_package__srv__RobotCall_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__srv__RobotCall_Response * data = NULL;

  if (size) {
    data = (interface_package__srv__RobotCall_Response *)allocator.zero_allocate(size, sizeof(interface_package__srv__RobotCall_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__srv__RobotCall_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__srv__RobotCall_Response__fini(&data[i - 1]);
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
interface_package__srv__RobotCall_Response__Sequence__fini(interface_package__srv__RobotCall_Response__Sequence * array)
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
      interface_package__srv__RobotCall_Response__fini(&array->data[i]);
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

interface_package__srv__RobotCall_Response__Sequence *
interface_package__srv__RobotCall_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__srv__RobotCall_Response__Sequence * array = (interface_package__srv__RobotCall_Response__Sequence *)allocator.allocate(sizeof(interface_package__srv__RobotCall_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__srv__RobotCall_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__srv__RobotCall_Response__Sequence__destroy(interface_package__srv__RobotCall_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__srv__RobotCall_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__srv__RobotCall_Response__Sequence__are_equal(const interface_package__srv__RobotCall_Response__Sequence * lhs, const interface_package__srv__RobotCall_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__srv__RobotCall_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__srv__RobotCall_Response__Sequence__copy(
  const interface_package__srv__RobotCall_Response__Sequence * input,
  interface_package__srv__RobotCall_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__srv__RobotCall_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__srv__RobotCall_Response * data =
      (interface_package__srv__RobotCall_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__srv__RobotCall_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__srv__RobotCall_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__srv__RobotCall_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
