// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:srv/OrderInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__ORDER_INFO__STRUCT_H_
#define INTERFACE_PACKAGE__SRV__DETAIL__ORDER_INFO__STRUCT_H_

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
// Member 'uid'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/OrderInfo in the package interface_package.
typedef struct interface_package__srv__OrderInfo_Request
{
  rosidl_runtime_c__String order_id;
  rosidl_runtime_c__String uid;
} interface_package__srv__OrderInfo_Request;

// Struct for a sequence of interface_package__srv__OrderInfo_Request.
typedef struct interface_package__srv__OrderInfo_Request__Sequence
{
  interface_package__srv__OrderInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__OrderInfo_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/OrderInfo in the package interface_package.
typedef struct interface_package__srv__OrderInfo_Response
{
  bool success;
} interface_package__srv__OrderInfo_Response;

// Struct for a sequence of interface_package__srv__OrderInfo_Response.
typedef struct interface_package__srv__OrderInfo_Response__Sequence
{
  interface_package__srv__OrderInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__OrderInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__ORDER_INFO__STRUCT_H_
