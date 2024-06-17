// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/RobotDispatch.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__ROBOT_DISPATCH__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__ROBOT_DISPATCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/robot_dispatch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_RobotDispatch_Request_order_id
{
public:
  Init_RobotDispatch_Request_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::srv::RobotDispatch_Request order_id(::interface_package::srv::RobotDispatch_Request::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::RobotDispatch_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::RobotDispatch_Request>()
{
  return interface_package::srv::builder::Init_RobotDispatch_Request_order_id();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_RobotDispatch_Response_success
{
public:
  Init_RobotDispatch_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::srv::RobotDispatch_Response success(::interface_package::srv::RobotDispatch_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::RobotDispatch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::RobotDispatch_Response>()
{
  return interface_package::srv::builder::Init_RobotDispatch_Response_success();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__ROBOT_DISPATCH__BUILDER_HPP_
