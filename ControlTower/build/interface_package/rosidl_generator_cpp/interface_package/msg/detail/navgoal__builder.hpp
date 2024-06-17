// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/Navgoal.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__NAVGOAL__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__NAVGOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/navgoal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_Navgoal_y
{
public:
  explicit Init_Navgoal_y(::interface_package::msg::Navgoal & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::Navgoal y(::interface_package::msg::Navgoal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::Navgoal msg_;
};

class Init_Navgoal_x
{
public:
  explicit Init_Navgoal_x(::interface_package::msg::Navgoal & msg)
  : msg_(msg)
  {}
  Init_Navgoal_y x(::interface_package::msg::Navgoal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Navgoal_y(msg_);
  }

private:
  ::interface_package::msg::Navgoal msg_;
};

class Init_Navgoal_order_id
{
public:
  Init_Navgoal_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navgoal_x order_id(::interface_package::msg::Navgoal::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return Init_Navgoal_x(msg_);
  }

private:
  ::interface_package::msg::Navgoal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::Navgoal>()
{
  return interface_package::msg::builder::Init_Navgoal_order_id();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__NAVGOAL__BUILDER_HPP_
