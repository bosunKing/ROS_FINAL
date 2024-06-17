// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:srv/LocationInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__LOCATION_INFO__STRUCT_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__LOCATION_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__srv__LocationInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__LocationInfo_Request __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LocationInfo_Request_
{
  using Type = LocationInfo_Request_<ContainerAllocator>;

  explicit LocationInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->store_id = "";
      this->kiosk_id = "";
    }
  }

  explicit LocationInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : store_id(_alloc),
    kiosk_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->store_id = "";
      this->kiosk_id = "";
    }
  }

  // field types and members
  using _store_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _store_id_type store_id;
  using _kiosk_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _kiosk_id_type kiosk_id;

  // setters for named parameter idiom
  Type & set__store_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->store_id = _arg;
    return *this;
  }
  Type & set__kiosk_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->kiosk_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::srv::LocationInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::LocationInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::LocationInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::LocationInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::LocationInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::LocationInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::LocationInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::LocationInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::LocationInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::LocationInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__LocationInfo_Request
    std::shared_ptr<interface_package::srv::LocationInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__LocationInfo_Request
    std::shared_ptr<interface_package::srv::LocationInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocationInfo_Request_ & other) const
  {
    if (this->store_id != other.store_id) {
      return false;
    }
    if (this->kiosk_id != other.kiosk_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocationInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocationInfo_Request_

// alias to use template instance with default allocator
using LocationInfo_Request =
  interface_package::srv::LocationInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package


#ifndef _WIN32
# define DEPRECATED__interface_package__srv__LocationInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__LocationInfo_Response __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LocationInfo_Response_
{
  using Type = LocationInfo_Response_<ContainerAllocator>;

  explicit LocationInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit LocationInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interface_package::srv::LocationInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::LocationInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::LocationInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::LocationInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::LocationInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::LocationInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::LocationInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::LocationInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::LocationInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::LocationInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__LocationInfo_Response
    std::shared_ptr<interface_package::srv::LocationInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__LocationInfo_Response
    std::shared_ptr<interface_package::srv::LocationInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocationInfo_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocationInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocationInfo_Response_

// alias to use template instance with default allocator
using LocationInfo_Response =
  interface_package::srv::LocationInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package

namespace interface_package
{

namespace srv
{

struct LocationInfo
{
  using Request = interface_package::srv::LocationInfo_Request;
  using Response = interface_package::srv::LocationInfo_Response;
};

}  // namespace srv

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__LOCATION_INFO__STRUCT_HPP_
