// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/Navgoal.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__NAVGOAL__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__NAVGOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__msg__Navgoal __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__Navgoal __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Navgoal_
{
  using Type = Navgoal_<ContainerAllocator>;

  explicit Navgoal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit Navgoal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : order_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _order_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _order_id_type order_id;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__order_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->order_id = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::Navgoal_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::Navgoal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::Navgoal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::Navgoal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::Navgoal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::Navgoal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::Navgoal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::Navgoal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::Navgoal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::Navgoal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__Navgoal
    std::shared_ptr<interface_package::msg::Navgoal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__Navgoal
    std::shared_ptr<interface_package::msg::Navgoal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navgoal_ & other) const
  {
    if (this->order_id != other.order_id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navgoal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navgoal_

// alias to use template instance with default allocator
using Navgoal =
  interface_package::msg::Navgoal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__NAVGOAL__STRUCT_HPP_
