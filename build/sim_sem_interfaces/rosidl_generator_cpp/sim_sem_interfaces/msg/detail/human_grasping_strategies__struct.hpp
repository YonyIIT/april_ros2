// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sim_sem_interfaces:msg/HumanGraspingStrategies.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_GRASPING_STRATEGIES__STRUCT_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_GRASPING_STRATEGIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sim_sem_interfaces__msg__HumanGraspingStrategies __attribute__((deprecated))
#else
# define DEPRECATED__sim_sem_interfaces__msg__HumanGraspingStrategies __declspec(deprecated)
#endif

namespace sim_sem_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanGraspingStrategies_
{
  using Type = HumanGraspingStrategies_<ContainerAllocator>;

  explicit HumanGraspingStrategies_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->type.resize(3);
      this->type = {{"power"}, {"pinch"}, {"three_fingers"}};
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->location = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = "";
    }
  }

  explicit HumanGraspingStrategies_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->type.resize(3);
      this->type = {{"power"}, {"pinch"}, {"three_fingers"}};
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->location = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = "";
    }
  }

  // field types and members
  using _type_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _type_type type;
  using _location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _location_type location;

  // setters for named parameter idiom
  Type & set__type(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator> *;
  using ConstRawPtr =
    const sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sim_sem_interfaces__msg__HumanGraspingStrategies
    std::shared_ptr<sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sim_sem_interfaces__msg__HumanGraspingStrategies
    std::shared_ptr<sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanGraspingStrategies_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanGraspingStrategies_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanGraspingStrategies_

// alias to use template instance with default allocator
using HumanGraspingStrategies =
  sim_sem_interfaces::msg::HumanGraspingStrategies_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_GRASPING_STRATEGIES__STRUCT_HPP_