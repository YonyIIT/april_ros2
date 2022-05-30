// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sim_sem_interfaces:msg/RobotArmKinematic.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/robot_arm_kinematic__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sim_sem_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sim_sem_interfaces/msg/detail/robot_arm_kinematic__struct.h"
#include "sim_sem_interfaces/msg/detail/robot_arm_kinematic__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // acceleration, forces, position, velocity
#include "rosidl_runtime_c/string_functions.h"  // acceleration, forces, position, velocity

// forward declare type support functions


using _RobotArmKinematic__ros_msg_type = sim_sem_interfaces__msg__RobotArmKinematic;

static bool _RobotArmKinematic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotArmKinematic__ros_msg_type * ros_message = static_cast<const _RobotArmKinematic__ros_msg_type *>(untyped_ros_message);
  // Field name: position
  {
    const rosidl_runtime_c__String * str = &ros_message->position;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: velocity
  {
    const rosidl_runtime_c__String * str = &ros_message->velocity;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: acceleration
  {
    const rosidl_runtime_c__String * str = &ros_message->acceleration;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: forces
  {
    const rosidl_runtime_c__String * str = &ros_message->forces;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _RobotArmKinematic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotArmKinematic__ros_msg_type * ros_message = static_cast<_RobotArmKinematic__ros_msg_type *>(untyped_ros_message);
  // Field name: position
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->position.data) {
      rosidl_runtime_c__String__init(&ros_message->position);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->position,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'position'\n");
      return false;
    }
  }

  // Field name: velocity
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->velocity.data) {
      rosidl_runtime_c__String__init(&ros_message->velocity);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->velocity,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'velocity'\n");
      return false;
    }
  }

  // Field name: acceleration
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->acceleration.data) {
      rosidl_runtime_c__String__init(&ros_message->acceleration);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->acceleration,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'acceleration'\n");
      return false;
    }
  }

  // Field name: forces
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->forces.data) {
      rosidl_runtime_c__String__init(&ros_message->forces);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->forces,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'forces'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sim_sem_interfaces
size_t get_serialized_size_sim_sem_interfaces__msg__RobotArmKinematic(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotArmKinematic__ros_msg_type * ros_message = static_cast<const _RobotArmKinematic__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name position
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->position.size + 1);
  // field.name velocity
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->velocity.size + 1);
  // field.name acceleration
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->acceleration.size + 1);
  // field.name forces
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->forces.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RobotArmKinematic__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sim_sem_interfaces__msg__RobotArmKinematic(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sim_sem_interfaces
size_t max_serialized_size_sim_sem_interfaces__msg__RobotArmKinematic(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: position
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: velocity
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: acceleration
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: forces
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotArmKinematic__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sim_sem_interfaces__msg__RobotArmKinematic(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotArmKinematic = {
  "sim_sem_interfaces::msg",
  "RobotArmKinematic",
  _RobotArmKinematic__cdr_serialize,
  _RobotArmKinematic__cdr_deserialize,
  _RobotArmKinematic__get_serialized_size,
  _RobotArmKinematic__max_serialized_size
};

static rosidl_message_type_support_t _RobotArmKinematic__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotArmKinematic,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sim_sem_interfaces, msg, RobotArmKinematic)() {
  return &_RobotArmKinematic__type_support;
}

#if defined(__cplusplus)
}
#endif