// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/Navgoal.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__NAVGOAL__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__NAVGOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'order_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Navgoal in the package interface_package.
typedef struct interface_package__msg__Navgoal
{
  rosidl_runtime_c__String order_id;
  float x;
  float y;
} interface_package__msg__Navgoal;

// Struct for a sequence of interface_package__msg__Navgoal.
typedef struct interface_package__msg__Navgoal__Sequence
{
  interface_package__msg__Navgoal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__Navgoal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__NAVGOAL__STRUCT_H_
