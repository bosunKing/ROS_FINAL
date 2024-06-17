// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/DeliveryBox.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__DELIVERY_BOX__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__DELIVERY_BOX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/delivery_box__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_DeliveryBox_Request_robot_id
{
public:
  explicit Init_DeliveryBox_Request_robot_id(::interface_package::srv::DeliveryBox_Request & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::DeliveryBox_Request robot_id(::interface_package::srv::DeliveryBox_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::DeliveryBox_Request msg_;
};

class Init_DeliveryBox_Request_order_id
{
public:
  explicit Init_DeliveryBox_Request_order_id(::interface_package::srv::DeliveryBox_Request & msg)
  : msg_(msg)
  {}
  Init_DeliveryBox_Request_robot_id order_id(::interface_package::srv::DeliveryBox_Request::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return Init_DeliveryBox_Request_robot_id(msg_);
  }

private:
  ::interface_package::srv::DeliveryBox_Request msg_;
};

class Init_DeliveryBox_Request_status
{
public:
  Init_DeliveryBox_Request_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryBox_Request_order_id status(::interface_package::srv::DeliveryBox_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DeliveryBox_Request_order_id(msg_);
  }

private:
  ::interface_package::srv::DeliveryBox_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::DeliveryBox_Request>()
{
  return interface_package::srv::builder::Init_DeliveryBox_Request_status();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_DeliveryBox_Response_success
{
public:
  explicit Init_DeliveryBox_Response_success(::interface_package::srv::DeliveryBox_Response & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::DeliveryBox_Response success(::interface_package::srv::DeliveryBox_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::DeliveryBox_Response msg_;
};

class Init_DeliveryBox_Response_robot_id
{
public:
  Init_DeliveryBox_Response_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryBox_Response_success robot_id(::interface_package::srv::DeliveryBox_Response::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_DeliveryBox_Response_success(msg_);
  }

private:
  ::interface_package::srv::DeliveryBox_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::DeliveryBox_Response>()
{
  return interface_package::srv::builder::Init_DeliveryBox_Response_robot_id();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__DELIVERY_BOX__BUILDER_HPP_
