// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/Navfeedback.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__NAVFEEDBACK__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__NAVFEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/navfeedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_Navfeedback_distance_remaining
{
public:
  Init_Navfeedback_distance_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::msg::Navfeedback distance_remaining(::interface_package::msg::Navfeedback::_distance_remaining_type arg)
  {
    msg_.distance_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::Navfeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::Navfeedback>()
{
  return interface_package::msg::builder::Init_Navfeedback_distance_remaining();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__NAVFEEDBACK__BUILDER_HPP_
