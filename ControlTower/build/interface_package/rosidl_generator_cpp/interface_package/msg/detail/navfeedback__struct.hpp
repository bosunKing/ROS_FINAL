// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/Navfeedback.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__NAVFEEDBACK__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__NAVFEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__msg__Navfeedback __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__Navfeedback __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Navfeedback_
{
  using Type = Navfeedback_<ContainerAllocator>;

  explicit Navfeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_remaining = 0.0;
    }
  }

  explicit Navfeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_remaining = 0.0;
    }
  }

  // field types and members
  using _distance_remaining_type =
    double;
  _distance_remaining_type distance_remaining;

  // setters for named parameter idiom
  Type & set__distance_remaining(
    const double & _arg)
  {
    this->distance_remaining = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::Navfeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::Navfeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::Navfeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::Navfeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::Navfeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::Navfeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::Navfeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::Navfeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::Navfeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::Navfeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__Navfeedback
    std::shared_ptr<interface_package::msg::Navfeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__Navfeedback
    std::shared_ptr<interface_package::msg::Navfeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navfeedback_ & other) const
  {
    if (this->distance_remaining != other.distance_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navfeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navfeedback_

// alias to use template instance with default allocator
using Navfeedback =
  interface_package::msg::Navfeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__NAVFEEDBACK__STRUCT_HPP_
