// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:srv/GoalArrival.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__GOAL_ARRIVAL__STRUCT_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__GOAL_ARRIVAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__srv__GoalArrival_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__GoalArrival_Request __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GoalArrival_Request_
{
  using Type = GoalArrival_Request_<ContainerAllocator>;

  explicit GoalArrival_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ll;
      this->order_id = "";
      this->robot_id = "";
    }
  }

  explicit GoalArrival_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : order_id(_alloc),
    robot_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0ll;
      this->order_id = "";
      this->robot_id = "";
    }
  }

  // field types and members
  using _status_type =
    int64_t;
  _status_type status;
  using _order_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _order_id_type order_id;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;

  // setters for named parameter idiom
  Type & set__status(
    const int64_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__order_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->order_id = _arg;
    return *this;
  }
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::srv::GoalArrival_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::GoalArrival_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::GoalArrival_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::GoalArrival_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::GoalArrival_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::GoalArrival_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::GoalArrival_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::GoalArrival_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::GoalArrival_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::GoalArrival_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__GoalArrival_Request
    std::shared_ptr<interface_package::srv::GoalArrival_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__GoalArrival_Request
    std::shared_ptr<interface_package::srv::GoalArrival_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalArrival_Request_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->order_id != other.order_id) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalArrival_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalArrival_Request_

// alias to use template instance with default allocator
using GoalArrival_Request =
  interface_package::srv::GoalArrival_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package


#ifndef _WIN32
# define DEPRECATED__interface_package__srv__GoalArrival_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__GoalArrival_Response __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GoalArrival_Response_
{
  using Type = GoalArrival_Response_<ContainerAllocator>;

  explicit GoalArrival_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->success = false;
    }
  }

  explicit GoalArrival_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->success = false;
    }
  }

  // field types and members
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::srv::GoalArrival_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::GoalArrival_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::GoalArrival_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::GoalArrival_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::GoalArrival_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::GoalArrival_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::GoalArrival_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::GoalArrival_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::GoalArrival_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::GoalArrival_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__GoalArrival_Response
    std::shared_ptr<interface_package::srv::GoalArrival_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__GoalArrival_Response
    std::shared_ptr<interface_package::srv::GoalArrival_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalArrival_Response_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalArrival_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalArrival_Response_

// alias to use template instance with default allocator
using GoalArrival_Response =
  interface_package::srv::GoalArrival_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package

namespace interface_package
{

namespace srv
{

struct GoalArrival
{
  using Request = interface_package::srv::GoalArrival_Request;
  using Response = interface_package::srv::GoalArrival_Response;
};

}  // namespace srv

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__GOAL_ARRIVAL__STRUCT_HPP_
