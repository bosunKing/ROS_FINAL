// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/OrderTracking.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__ORDER_TRACKING__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__ORDER_TRACKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/order_tracking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_OrderTracking_Request_status
{
public:
  explicit Init_OrderTracking_Request_status(::interface_package::srv::OrderTracking_Request & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::OrderTracking_Request status(::interface_package::srv::OrderTracking_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::OrderTracking_Request msg_;
};

class Init_OrderTracking_Request_order_id
{
public:
  Init_OrderTracking_Request_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrderTracking_Request_status order_id(::interface_package::srv::OrderTracking_Request::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return Init_OrderTracking_Request_status(msg_);
  }

private:
  ::interface_package::srv::OrderTracking_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::OrderTracking_Request>()
{
  return interface_package::srv::builder::Init_OrderTracking_Request_order_id();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_OrderTracking_Response_success
{
public:
  Init_OrderTracking_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::srv::OrderTracking_Response success(::interface_package::srv::OrderTracking_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::OrderTracking_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::OrderTracking_Response>()
{
  return interface_package::srv::builder::Init_OrderTracking_Response_success();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__ORDER_TRACKING__BUILDER_HPP_
