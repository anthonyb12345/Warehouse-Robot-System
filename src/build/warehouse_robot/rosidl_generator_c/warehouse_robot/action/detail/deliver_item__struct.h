// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from warehouse_robot:action/DeliverItem.idl
// generated code does not contain a copyright notice

#ifndef WAREHOUSE_ROBOT__ACTION__DETAIL__DELIVER_ITEM__STRUCT_H_
#define WAREHOUSE_ROBOT__ACTION__DETAIL__DELIVER_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'item_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/DeliverItem in the package warehouse_robot.
typedef struct warehouse_robot__action__DeliverItem_Goal
{
  rosidl_runtime_c__String item_name;
  int32_t quantity;
} warehouse_robot__action__DeliverItem_Goal;

// Struct for a sequence of warehouse_robot__action__DeliverItem_Goal.
typedef struct warehouse_robot__action__DeliverItem_Goal__Sequence
{
  warehouse_robot__action__DeliverItem_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_robot__action__DeliverItem_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/DeliverItem in the package warehouse_robot.
typedef struct warehouse_robot__action__DeliverItem_Result
{
  bool success;
  rosidl_runtime_c__String message;
} warehouse_robot__action__DeliverItem_Result;

// Struct for a sequence of warehouse_robot__action__DeliverItem_Result.
typedef struct warehouse_robot__action__DeliverItem_Result__Sequence
{
  warehouse_robot__action__DeliverItem_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_robot__action__DeliverItem_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/DeliverItem in the package warehouse_robot.
typedef struct warehouse_robot__action__DeliverItem_Feedback
{
  rosidl_runtime_c__String status;
} warehouse_robot__action__DeliverItem_Feedback;

// Struct for a sequence of warehouse_robot__action__DeliverItem_Feedback.
typedef struct warehouse_robot__action__DeliverItem_Feedback__Sequence
{
  warehouse_robot__action__DeliverItem_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_robot__action__DeliverItem_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "warehouse_robot/action/detail/deliver_item__struct.h"

/// Struct defined in action/DeliverItem in the package warehouse_robot.
typedef struct warehouse_robot__action__DeliverItem_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  warehouse_robot__action__DeliverItem_Goal goal;
} warehouse_robot__action__DeliverItem_SendGoal_Request;

// Struct for a sequence of warehouse_robot__action__DeliverItem_SendGoal_Request.
typedef struct warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence
{
  warehouse_robot__action__DeliverItem_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DeliverItem in the package warehouse_robot.
typedef struct warehouse_robot__action__DeliverItem_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} warehouse_robot__action__DeliverItem_SendGoal_Response;

// Struct for a sequence of warehouse_robot__action__DeliverItem_SendGoal_Response.
typedef struct warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence
{
  warehouse_robot__action__DeliverItem_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DeliverItem in the package warehouse_robot.
typedef struct warehouse_robot__action__DeliverItem_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} warehouse_robot__action__DeliverItem_GetResult_Request;

// Struct for a sequence of warehouse_robot__action__DeliverItem_GetResult_Request.
typedef struct warehouse_robot__action__DeliverItem_GetResult_Request__Sequence
{
  warehouse_robot__action__DeliverItem_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_robot__action__DeliverItem_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "warehouse_robot/action/detail/deliver_item__struct.h"

/// Struct defined in action/DeliverItem in the package warehouse_robot.
typedef struct warehouse_robot__action__DeliverItem_GetResult_Response
{
  int8_t status;
  warehouse_robot__action__DeliverItem_Result result;
} warehouse_robot__action__DeliverItem_GetResult_Response;

// Struct for a sequence of warehouse_robot__action__DeliverItem_GetResult_Response.
typedef struct warehouse_robot__action__DeliverItem_GetResult_Response__Sequence
{
  warehouse_robot__action__DeliverItem_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_robot__action__DeliverItem_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "warehouse_robot/action/detail/deliver_item__struct.h"

/// Struct defined in action/DeliverItem in the package warehouse_robot.
typedef struct warehouse_robot__action__DeliverItem_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  warehouse_robot__action__DeliverItem_Feedback feedback;
} warehouse_robot__action__DeliverItem_FeedbackMessage;

// Struct for a sequence of warehouse_robot__action__DeliverItem_FeedbackMessage.
typedef struct warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence
{
  warehouse_robot__action__DeliverItem_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAREHOUSE_ROBOT__ACTION__DETAIL__DELIVER_ITEM__STRUCT_H_
