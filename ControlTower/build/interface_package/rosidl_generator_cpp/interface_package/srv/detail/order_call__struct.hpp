// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:srv/OrderCall.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__ORDER_CALL__STRUCT_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__ORDER_CALL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__srv__OrderCall_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__OrderCall_Request __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OrderCall_Request_
{
  using Type = OrderCall_Request_<ContainerAllocator>;

  explicit OrderCall_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->order_no = "";
    }
  }

  explicit OrderCall_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ip(_alloc),
    order_no(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->order_no = "";
    }
  }

  // field types and members
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _order_no_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _order_no_type order_no;

  // setters for named parameter idiom
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
    return *this;
  }
  Type & set__order_no(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->order_no = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::srv::OrderCall_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::OrderCall_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::OrderCall_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::OrderCall_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::OrderCall_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::OrderCall_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::OrderCall_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::OrderCall_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::OrderCall_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::OrderCall_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__OrderCall_Request
    std::shared_ptr<interface_package::srv::OrderCall_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__OrderCall_Request
    std::shared_ptr<interface_package::srv::OrderCall_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrderCall_Request_ & other) const
  {
    if (this->ip != other.ip) {
      return false;
    }
    if (this->order_no != other.order_no) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrderCall_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrderCall_Request_

// alias to use template instance with default allocator
using OrderCall_Request =
  interface_package::srv::OrderCall_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package


#ifndef _WIN32
# define DEPRECATED__interface_package__srv__OrderCall_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__OrderCall_Response __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OrderCall_Response_
{
  using Type = OrderCall_Response_<ContainerAllocator>;

  explicit OrderCall_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit OrderCall_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::srv::OrderCall_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::OrderCall_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::OrderCall_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::OrderCall_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::OrderCall_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::OrderCall_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::OrderCall_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::OrderCall_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::OrderCall_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::OrderCall_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__OrderCall_Response
    std::shared_ptr<interface_package::srv::OrderCall_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__OrderCall_Response
    std::shared_ptr<interface_package::srv::OrderCall_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrderCall_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrderCall_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrderCall_Response_

// alias to use template instance with default allocator
using OrderCall_Response =
  interface_package::srv::OrderCall_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package

namespace interface_package
{

namespace srv
{

struct OrderCall
{
  using Request = interface_package::srv::OrderCall_Request;
  using Response = interface_package::srv::OrderCall_Response;
};

}  // namespace srv

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__ORDER_CALL__STRUCT_HPP_
