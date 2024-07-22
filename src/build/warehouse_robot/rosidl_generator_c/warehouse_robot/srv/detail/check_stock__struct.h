// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from warehouse_robot:srv/CheckStock.idl
// generated code does not contain a copyright notice

#ifndef WAREHOUSE_ROBOT__SRV__DETAIL__CHECK_STOCK__STRUCT_H_
#define WAREHOUSE_ROBOT__SRV__DETAIL__CHECK_STOCK__STRUCT_H_

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

/// Struct defined in srv/CheckStock in the package warehouse_robot.
typedef struct warehouse_robot__srv__CheckStock_Request
{
  rosidl_runtime_c__String item_name;
} warehouse_robot__srv__CheckStock_Request;

// Struct for a sequence of warehouse_robot__srv__CheckStock_Request.
typedef struct warehouse_robot__srv__CheckStock_Request__Sequence
{
  warehouse_robot__srv__CheckStock_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_robot__srv__CheckStock_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CheckStock in the package warehouse_robot.
typedef struct warehouse_robot__srv__CheckStock_Response
{
  int32_t stock_level;
} warehouse_robot__srv__CheckStock_Response;

// Struct for a sequence of warehouse_robot__srv__CheckStock_Response.
typedef struct warehouse_robot__srv__CheckStock_Response__Sequence
{
  warehouse_robot__srv__CheckStock_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_robot__srv__CheckStock_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAREHOUSE_ROBOT__SRV__DETAIL__CHECK_STOCK__STRUCT_H_
