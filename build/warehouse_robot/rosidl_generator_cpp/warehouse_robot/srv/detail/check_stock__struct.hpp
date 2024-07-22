// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from warehouse_robot:srv/CheckStock.idl
// generated code does not contain a copyright notice

#ifndef WAREHOUSE_ROBOT__SRV__DETAIL__CHECK_STOCK__STRUCT_HPP_
#define WAREHOUSE_ROBOT__SRV__DETAIL__CHECK_STOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__warehouse_robot__srv__CheckStock_Request __attribute__((deprecated))
#else
# define DEPRECATED__warehouse_robot__srv__CheckStock_Request __declspec(deprecated)
#endif

namespace warehouse_robot
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckStock_Request_
{
  using Type = CheckStock_Request_<ContainerAllocator>;

  explicit CheckStock_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->item_name = "";
    }
  }

  explicit CheckStock_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : item_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->item_name = "";
    }
  }

  // field types and members
  using _item_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _item_name_type item_name;

  // setters for named parameter idiom
  Type & set__item_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->item_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    warehouse_robot::srv::CheckStock_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const warehouse_robot::srv::CheckStock_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<warehouse_robot::srv::CheckStock_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<warehouse_robot::srv::CheckStock_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      warehouse_robot::srv::CheckStock_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<warehouse_robot::srv::CheckStock_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      warehouse_robot::srv::CheckStock_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<warehouse_robot::srv::CheckStock_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<warehouse_robot::srv::CheckStock_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<warehouse_robot::srv::CheckStock_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__warehouse_robot__srv__CheckStock_Request
    std::shared_ptr<warehouse_robot::srv::CheckStock_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__warehouse_robot__srv__CheckStock_Request
    std::shared_ptr<warehouse_robot::srv::CheckStock_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckStock_Request_ & other) const
  {
    if (this->item_name != other.item_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckStock_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckStock_Request_

// alias to use template instance with default allocator
using CheckStock_Request =
  warehouse_robot::srv::CheckStock_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace warehouse_robot


#ifndef _WIN32
# define DEPRECATED__warehouse_robot__srv__CheckStock_Response __attribute__((deprecated))
#else
# define DEPRECATED__warehouse_robot__srv__CheckStock_Response __declspec(deprecated)
#endif

namespace warehouse_robot
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckStock_Response_
{
  using Type = CheckStock_Response_<ContainerAllocator>;

  explicit CheckStock_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stock_level = 0l;
    }
  }

  explicit CheckStock_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stock_level = 0l;
    }
  }

  // field types and members
  using _stock_level_type =
    int32_t;
  _stock_level_type stock_level;

  // setters for named parameter idiom
  Type & set__stock_level(
    const int32_t & _arg)
  {
    this->stock_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    warehouse_robot::srv::CheckStock_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const warehouse_robot::srv::CheckStock_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<warehouse_robot::srv::CheckStock_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<warehouse_robot::srv::CheckStock_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      warehouse_robot::srv::CheckStock_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<warehouse_robot::srv::CheckStock_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      warehouse_robot::srv::CheckStock_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<warehouse_robot::srv::CheckStock_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<warehouse_robot::srv::CheckStock_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<warehouse_robot::srv::CheckStock_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__warehouse_robot__srv__CheckStock_Response
    std::shared_ptr<warehouse_robot::srv::CheckStock_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__warehouse_robot__srv__CheckStock_Response
    std::shared_ptr<warehouse_robot::srv::CheckStock_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckStock_Response_ & other) const
  {
    if (this->stock_level != other.stock_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckStock_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckStock_Response_

// alias to use template instance with default allocator
using CheckStock_Response =
  warehouse_robot::srv::CheckStock_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace warehouse_robot

namespace warehouse_robot
{

namespace srv
{

struct CheckStock
{
  using Request = warehouse_robot::srv::CheckStock_Request;
  using Response = warehouse_robot::srv::CheckStock_Response;
};

}  // namespace srv

}  // namespace warehouse_robot

#endif  // WAREHOUSE_ROBOT__SRV__DETAIL__CHECK_STOCK__STRUCT_HPP_
