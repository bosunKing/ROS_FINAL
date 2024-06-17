// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/OrderCall.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__ORDER_CALL__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__ORDER_CALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/order_call__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_OrderCall_Request_order_no
{
public:
  explicit Init_OrderCall_Request_order_no(::interface_package::srv::OrderCall_Request & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::OrderCall_Request order_no(::interface_package::srv::OrderCall_Request::_order_no_type arg)
  {
    msg_.order_no = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::OrderCall_Request msg_;
};

class Init_OrderCall_Request_ip
{
public:
  Init_OrderCall_Request_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrderCall_Request_order_no ip(::interface_package::srv::OrderCall_Request::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_OrderCall_Request_order_no(msg_);
  }

private:
  ::interface_package::srv::OrderCall_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::OrderCall_Request>()
{
  return interface_package::srv::builder::Init_OrderCall_Request_ip();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_OrderCall_Response_success
{
public:
  Init_OrderCall_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::srv::OrderCall_Response success(::interface_package::srv::OrderCall_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::OrderCall_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::OrderCall_Response>()
{
  return interface_package::srv::builder::Init_OrderCall_Response_success();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__ORDER_CALL__BUILDER_HPP_
