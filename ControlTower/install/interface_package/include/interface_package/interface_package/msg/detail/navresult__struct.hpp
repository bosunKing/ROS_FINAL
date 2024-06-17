// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/Navresult.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__NAVRESULT__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__NAVRESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__msg__Navresult __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__Navresult __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Navresult_
{
  using Type = Navresult_<ContainerAllocator>;

  explicit Navresult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0.0;
    }
  }

  explicit Navresult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0.0;
    }
  }

  // field types and members
  using _result_type =
    double;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const double & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::Navresult_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::Navresult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::Navresult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::Navresult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::Navresult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::Navresult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::Navresult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::Navresult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::Navresult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::Navresult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__Navresult
    std::shared_ptr<interface_package::msg::Navresult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__Navresult
    std::shared_ptr<interface_package::msg::Navresult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navresult_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navresult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navresult_

// alias to use template instance with default allocator
using Navresult =
  interface_package::msg::Navresult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__NAVRESULT__STRUCT_HPP_
