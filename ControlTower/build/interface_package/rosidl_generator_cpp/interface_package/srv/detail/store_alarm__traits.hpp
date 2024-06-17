// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:srv/StoreAlarm.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__STORE_ALARM__TRAITS_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__STORE_ALARM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/srv/detail/store_alarm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const StoreAlarm_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: order_id
  {
    out << "order_id: ";
    rosidl_generator_traits::value_to_yaml(msg.order_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StoreAlarm_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: order_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order_id: ";
    rosidl_generator_traits::value_to_yaml(msg.order_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StoreAlarm_Request & msg, bool use_flow_style = false)
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
  const interface_package::srv::StoreAlarm_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::StoreAlarm_Request & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::StoreAlarm_Request>()
{
  return "interface_package::srv::StoreAlarm_Request";
}

template<>
inline const char * name<interface_package::srv::StoreAlarm_Request>()
{
  return "interface_package/srv/StoreAlarm_Request";
}

template<>
struct has_fixed_size<interface_package::srv::StoreAlarm_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_package::srv::StoreAlarm_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_package::srv::StoreAlarm_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const StoreAlarm_Response & msg,
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
  const StoreAlarm_Response & msg,
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

inline std::string to_yaml(const StoreAlarm_Response & msg, bool use_flow_style = false)
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
  const interface_package::srv::StoreAlarm_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::StoreAlarm_Response & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::StoreAlarm_Response>()
{
  return "interface_package::srv::StoreAlarm_Response";
}

template<>
inline const char * name<interface_package::srv::StoreAlarm_Response>()
{
  return "interface_package/srv/StoreAlarm_Response";
}

template<>
struct has_fixed_size<interface_package::srv::StoreAlarm_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_package::srv::StoreAlarm_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_package::srv::StoreAlarm_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_package::srv::StoreAlarm>()
{
  return "interface_package::srv::StoreAlarm";
}

template<>
inline const char * name<interface_package::srv::StoreAlarm>()
{
  return "interface_package/srv/StoreAlarm";
}

template<>
struct has_fixed_size<interface_package::srv::StoreAlarm>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_package::srv::StoreAlarm_Request>::value &&
    has_fixed_size<interface_package::srv::StoreAlarm_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_package::srv::StoreAlarm>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_package::srv::StoreAlarm_Request>::value &&
    has_bounded_size<interface_package::srv::StoreAlarm_Response>::value
  >
{
};

template<>
struct is_service<interface_package::srv::StoreAlarm>
  : std::true_type
{
};

template<>
struct is_service_request<interface_package::srv::StoreAlarm_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_package::srv::StoreAlarm_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__STORE_ALARM__TRAITS_HPP_
