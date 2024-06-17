// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/Navresult.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__NAVRESULT__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__NAVRESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/navresult__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_Navresult_result
{
public:
  Init_Navresult_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::msg::Navresult result(::interface_package::msg::Navresult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::Navresult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::Navresult>()
{
  return interface_package::msg::builder::Init_Navresult_result();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__NAVRESULT__BUILDER_HPP_
