// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/RobotCall.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__ROBOT_CALL__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__ROBOT_CALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/robot_call__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_RobotCall_Request_robot_id
{
public:
  explicit Init_RobotCall_Request_robot_id(::interface_package::srv::RobotCall_Request & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::RobotCall_Request robot_id(::interface_package::srv::RobotCall_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::RobotCall_Request msg_;
};

class Init_RobotCall_Request_uid
{
public:
  explicit Init_RobotCall_Request_uid(::interface_package::srv::RobotCall_Request & msg)
  : msg_(msg)
  {}
  Init_RobotCall_Request_robot_id uid(::interface_package::srv::RobotCall_Request::_uid_type arg)
  {
    msg_.uid = std::move(arg);
    return Init_RobotCall_Request_robot_id(msg_);
  }

private:
  ::interface_package::srv::RobotCall_Request msg_;
};

class Init_RobotCall_Request_kiosk_id
{
public:
  explicit Init_RobotCall_Request_kiosk_id(::interface_package::srv::RobotCall_Request & msg)
  : msg_(msg)
  {}
  Init_RobotCall_Request_uid kiosk_id(::interface_package::srv::RobotCall_Request::_kiosk_id_type arg)
  {
    msg_.kiosk_id = std::move(arg);
    return Init_RobotCall_Request_uid(msg_);
  }

private:
  ::interface_package::srv::RobotCall_Request msg_;
};

class Init_RobotCall_Request_store_id
{
public:
  explicit Init_RobotCall_Request_store_id(::interface_package::srv::RobotCall_Request & msg)
  : msg_(msg)
  {}
  Init_RobotCall_Request_kiosk_id store_id(::interface_package::srv::RobotCall_Request::_store_id_type arg)
  {
    msg_.store_id = std::move(arg);
    return Init_RobotCall_Request_kiosk_id(msg_);
  }

private:
  ::interface_package::srv::RobotCall_Request msg_;
};

class Init_RobotCall_Request_order_id
{
public:
  Init_RobotCall_Request_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCall_Request_store_id order_id(::interface_package::srv::RobotCall_Request::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return Init_RobotCall_Request_store_id(msg_);
  }

private:
  ::interface_package::srv::RobotCall_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::RobotCall_Request>()
{
  return interface_package::srv::builder::Init_RobotCall_Request_order_id();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_RobotCall_Response_success
{
public:
  Init_RobotCall_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::srv::RobotCall_Response success(::interface_package::srv::RobotCall_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::RobotCall_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::RobotCall_Response>()
{
  return interface_package::srv::builder::Init_RobotCall_Response_success();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__ROBOT_CALL__BUILDER_HPP_
