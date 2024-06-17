// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/OrderInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__ORDER_INFO__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__ORDER_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/order_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_OrderInfo_Request_uid
{
public:
  explicit Init_OrderInfo_Request_uid(::interface_package::srv::OrderInfo_Request & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::OrderInfo_Request uid(::interface_package::srv::OrderInfo_Request::_uid_type arg)
  {
    msg_.uid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::OrderInfo_Request msg_;
};

class Init_OrderInfo_Request_order_id
{
public:
  Init_OrderInfo_Request_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrderInfo_Request_uid order_id(::interface_package::srv::OrderInfo_Request::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return Init_OrderInfo_Request_uid(msg_);
  }

private:
  ::interface_package::srv::OrderInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::OrderInfo_Request>()
{
  return interface_package::srv::builder::Init_OrderInfo_Request_order_id();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_OrderInfo_Response_success
{
public:
  Init_OrderInfo_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::srv::OrderInfo_Response success(::interface_package::srv::OrderInfo_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::OrderInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::OrderInfo_Response>()
{
  return interface_package::srv::builder::Init_OrderInfo_Response_success();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__ORDER_INFO__BUILDER_HPP_
