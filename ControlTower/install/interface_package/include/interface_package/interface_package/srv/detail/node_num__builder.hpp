// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/NodeNum.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__NODE_NUM__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__NODE_NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/node_num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_NodeNum_Request_nodenum
{
public:
  Init_NodeNum_Request_nodenum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::srv::NodeNum_Request nodenum(::interface_package::srv::NodeNum_Request::_nodenum_type arg)
  {
    msg_.nodenum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::NodeNum_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::NodeNum_Request>()
{
  return interface_package::srv::builder::Init_NodeNum_Request_nodenum();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_NodeNum_Response_success
{
public:
  Init_NodeNum_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::srv::NodeNum_Response success(::interface_package::srv::NodeNum_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::NodeNum_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::NodeNum_Response>()
{
  return interface_package::srv::builder::Init_NodeNum_Response_success();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__NODE_NUM__BUILDER_HPP_
