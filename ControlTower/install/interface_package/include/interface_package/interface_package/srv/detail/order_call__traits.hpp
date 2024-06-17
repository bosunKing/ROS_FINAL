// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:srv/OrderCall.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__ORDER_CALL__TRAITS_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__ORDER_CALL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/srv/detail/order_call__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const OrderCall_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ip
  {
    out << "ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ip, out);
    out << ", ";
  }

  // member: order_no
  {
    out << "order_no: ";
    rosidl_generator_traits::value_to_yaml(msg.order_no, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OrderCall_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ip, out);
    out << "\n";
  }

  // member: order_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order_no: ";
    rosidl_generator_traits::value_to_yaml(msg.order_no, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OrderCall_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::srv::OrderCall_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::OrderCall_Request & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::OrderCall_Request>()
{
  return "interface_package::srv::OrderCall_Request";
}

template<>
inline const char * name<interface_package::srv::OrderCall_Request>()
{
  return "interface_package/srv/OrderCall_Request";
}

template<>
struct has_fixed_size<interface_package::srv::OrderCall_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::srv::OrderCall_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::srv::OrderCall_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const OrderCall_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OrderCall_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OrderCall_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::srv::OrderCall_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::OrderCall_Response & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::OrderCall_Response>()
{
  return "interface_package::srv::OrderCall_Response";
}

template<>
inline const char * name<interface_package::srv::OrderCall_Response>()
{
  return "interface_package/srv/OrderCall_Response";
}

template<>
struct has_fixed_size<interface_package::srv::OrderCall_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_package::srv::OrderCall_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_package::srv::OrderCall_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_package::srv::OrderCall>()
{
  return "interface_package::srv::OrderCall";
}

template<>
inline const char * name<interface_package::srv::OrderCall>()
{
  return "interface_package/srv/OrderCall";
}

template<>
struct has_fixed_size<interface_package::srv::OrderCall>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_package::srv::OrderCall_Request>::value &&
    has_fixed_size<interface_package::srv::OrderCall_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_package::srv::OrderCall>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_package::srv::OrderCall_Request>::value &&
    has_bounded_size<interface_package::srv::OrderCall_Response>::value
  >
{
};

template<>
struct is_service<interface_package::srv::OrderCall>
  : std::true_type
{
};

template<>
struct is_service_request<interface_package::srv::OrderCall_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_package::srv::OrderCall_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__ORDER_CALL__TRAITS_HPP_
