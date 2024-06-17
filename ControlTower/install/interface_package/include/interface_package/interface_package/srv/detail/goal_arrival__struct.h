// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:srv/GoalArrival.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__GOAL_ARRIVAL__STRUCT_H_
#define INTERFACE_PACKAGE__SRV__DETAIL__GOAL_ARRIVAL__STRUCT_H_

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
// Member 'robot_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GoalArrival in the package interface_package.
typedef struct interface_package__srv__GoalArrival_Request
{
  int64_t status;
  rosidl_runtime_c__String order_id;
  rosidl_runtime_c__String robot_id;
} interface_package__srv__GoalArrival_Request;

// Struct for a sequence of interface_package__srv__GoalArrival_Request.
typedef struct interface_package__srv__GoalArrival_Request__Sequence
{
  interface_package__srv__GoalArrival_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__GoalArrival_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'robot_id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GoalArrival in the package interface_package.
typedef struct interface_package__srv__GoalArrival_Response
{
  rosidl_runtime_c__String robot_id;
  bool success;
} interface_package__srv__GoalArrival_Response;

// Struct for a sequence of interface_package__srv__GoalArrival_Response.
typedef struct interface_package__srv__GoalArrival_Response__Sequence
{
  interface_package__srv__GoalArrival_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__GoalArrival_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__GOAL_ARRIVAL__STRUCT_H_
