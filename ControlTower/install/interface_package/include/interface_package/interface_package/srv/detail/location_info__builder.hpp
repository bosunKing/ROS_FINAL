// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/LocationInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__LOCATION_INFO__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__LOCATION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/location_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_LocationInfo_Request_kiosk_id
{
public:
  explicit Init_LocationInfo_Request_kiosk_id(::interface_package::srv::LocationInfo_Request & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::LocationInfo_Request kiosk_id(::interface_package::srv::LocationInfo_Request::_kiosk_id_type arg)
  {
    msg_.kiosk_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::LocationInfo_Request msg_;
};

class Init_LocationInfo_Request_store_id
{
public:
  Init_LocationInfo_Request_store_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocationInfo_Request_kiosk_id store_id(::interface_package::srv::LocationInfo_Request::_store_id_type arg)
  {
    msg_.store_id = std::move(arg);
    return Init_LocationInfo_Request_kiosk_id(msg_);
  }

private:
  ::interface_package::srv::LocationInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::LocationInfo_Request>()
{
  return interface_package::srv::builder::Init_LocationInfo_Request_store_id();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_LocationInfo_Response_success
{
public:
  Init_LocationInfo_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::srv::LocationInfo_Response success(::interface_package::srv::LocationInfo_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::LocationInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::LocationInfo_Response>()
{
  return interface_package::srv::builder::Init_LocationInfo_Response_success();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__LOCATION_INFO__BUILDER_HPP_
