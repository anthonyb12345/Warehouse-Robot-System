// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from warehouse_robot:action/DeliverItem.idl
// generated code does not contain a copyright notice
#include "warehouse_robot/action/detail/deliver_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `item_name`
#include "rosidl_runtime_c/string_functions.h"

bool
warehouse_robot__action__DeliverItem_Goal__init(warehouse_robot__action__DeliverItem_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // item_name
  if (!rosidl_runtime_c__String__init(&msg->item_name)) {
    warehouse_robot__action__DeliverItem_Goal__fini(msg);
    return false;
  }
  // quantity
  return true;
}

void
warehouse_robot__action__DeliverItem_Goal__fini(warehouse_robot__action__DeliverItem_Goal * msg)
{
  if (!msg) {
    return;
  }
  // item_name
  rosidl_runtime_c__String__fini(&msg->item_name);
  // quantity
}

bool
warehouse_robot__action__DeliverItem_Goal__are_equal(const warehouse_robot__action__DeliverItem_Goal * lhs, const warehouse_robot__action__DeliverItem_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // item_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->item_name), &(rhs->item_name)))
  {
    return false;
  }
  // quantity
  if (lhs->quantity != rhs->quantity) {
    return false;
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_Goal__copy(
  const warehouse_robot__action__DeliverItem_Goal * input,
  warehouse_robot__action__DeliverItem_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // item_name
  if (!rosidl_runtime_c__String__copy(
      &(input->item_name), &(output->item_name)))
  {
    return false;
  }
  // quantity
  output->quantity = input->quantity;
  return true;
}

warehouse_robot__action__DeliverItem_Goal *
warehouse_robot__action__DeliverItem_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_Goal * msg = (warehouse_robot__action__DeliverItem_Goal *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_robot__action__DeliverItem_Goal));
  bool success = warehouse_robot__action__DeliverItem_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_robot__action__DeliverItem_Goal__destroy(warehouse_robot__action__DeliverItem_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_robot__action__DeliverItem_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_robot__action__DeliverItem_Goal__Sequence__init(warehouse_robot__action__DeliverItem_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_Goal * data = NULL;

  if (size) {
    data = (warehouse_robot__action__DeliverItem_Goal *)allocator.zero_allocate(size, sizeof(warehouse_robot__action__DeliverItem_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_robot__action__DeliverItem_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_robot__action__DeliverItem_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_robot__action__DeliverItem_Goal__Sequence__fini(warehouse_robot__action__DeliverItem_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_robot__action__DeliverItem_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_robot__action__DeliverItem_Goal__Sequence *
warehouse_robot__action__DeliverItem_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_Goal__Sequence * array = (warehouse_robot__action__DeliverItem_Goal__Sequence *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_robot__action__DeliverItem_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_robot__action__DeliverItem_Goal__Sequence__destroy(warehouse_robot__action__DeliverItem_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_robot__action__DeliverItem_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_robot__action__DeliverItem_Goal__Sequence__are_equal(const warehouse_robot__action__DeliverItem_Goal__Sequence * lhs, const warehouse_robot__action__DeliverItem_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_Goal__Sequence__copy(
  const warehouse_robot__action__DeliverItem_Goal__Sequence * input,
  warehouse_robot__action__DeliverItem_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_robot__action__DeliverItem_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_robot__action__DeliverItem_Goal * data =
      (warehouse_robot__action__DeliverItem_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_robot__action__DeliverItem_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_robot__action__DeliverItem_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
warehouse_robot__action__DeliverItem_Result__init(warehouse_robot__action__DeliverItem_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    warehouse_robot__action__DeliverItem_Result__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_robot__action__DeliverItem_Result__fini(warehouse_robot__action__DeliverItem_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
warehouse_robot__action__DeliverItem_Result__are_equal(const warehouse_robot__action__DeliverItem_Result * lhs, const warehouse_robot__action__DeliverItem_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_Result__copy(
  const warehouse_robot__action__DeliverItem_Result * input,
  warehouse_robot__action__DeliverItem_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

warehouse_robot__action__DeliverItem_Result *
warehouse_robot__action__DeliverItem_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_Result * msg = (warehouse_robot__action__DeliverItem_Result *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_robot__action__DeliverItem_Result));
  bool success = warehouse_robot__action__DeliverItem_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_robot__action__DeliverItem_Result__destroy(warehouse_robot__action__DeliverItem_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_robot__action__DeliverItem_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_robot__action__DeliverItem_Result__Sequence__init(warehouse_robot__action__DeliverItem_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_Result * data = NULL;

  if (size) {
    data = (warehouse_robot__action__DeliverItem_Result *)allocator.zero_allocate(size, sizeof(warehouse_robot__action__DeliverItem_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_robot__action__DeliverItem_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_robot__action__DeliverItem_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_robot__action__DeliverItem_Result__Sequence__fini(warehouse_robot__action__DeliverItem_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_robot__action__DeliverItem_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_robot__action__DeliverItem_Result__Sequence *
warehouse_robot__action__DeliverItem_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_Result__Sequence * array = (warehouse_robot__action__DeliverItem_Result__Sequence *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_robot__action__DeliverItem_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_robot__action__DeliverItem_Result__Sequence__destroy(warehouse_robot__action__DeliverItem_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_robot__action__DeliverItem_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_robot__action__DeliverItem_Result__Sequence__are_equal(const warehouse_robot__action__DeliverItem_Result__Sequence * lhs, const warehouse_robot__action__DeliverItem_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_Result__Sequence__copy(
  const warehouse_robot__action__DeliverItem_Result__Sequence * input,
  warehouse_robot__action__DeliverItem_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_robot__action__DeliverItem_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_robot__action__DeliverItem_Result * data =
      (warehouse_robot__action__DeliverItem_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_robot__action__DeliverItem_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_robot__action__DeliverItem_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
warehouse_robot__action__DeliverItem_Feedback__init(warehouse_robot__action__DeliverItem_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    warehouse_robot__action__DeliverItem_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_robot__action__DeliverItem_Feedback__fini(warehouse_robot__action__DeliverItem_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
warehouse_robot__action__DeliverItem_Feedback__are_equal(const warehouse_robot__action__DeliverItem_Feedback * lhs, const warehouse_robot__action__DeliverItem_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_Feedback__copy(
  const warehouse_robot__action__DeliverItem_Feedback * input,
  warehouse_robot__action__DeliverItem_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

warehouse_robot__action__DeliverItem_Feedback *
warehouse_robot__action__DeliverItem_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_Feedback * msg = (warehouse_robot__action__DeliverItem_Feedback *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_robot__action__DeliverItem_Feedback));
  bool success = warehouse_robot__action__DeliverItem_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_robot__action__DeliverItem_Feedback__destroy(warehouse_robot__action__DeliverItem_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_robot__action__DeliverItem_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_robot__action__DeliverItem_Feedback__Sequence__init(warehouse_robot__action__DeliverItem_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_Feedback * data = NULL;

  if (size) {
    data = (warehouse_robot__action__DeliverItem_Feedback *)allocator.zero_allocate(size, sizeof(warehouse_robot__action__DeliverItem_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_robot__action__DeliverItem_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_robot__action__DeliverItem_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_robot__action__DeliverItem_Feedback__Sequence__fini(warehouse_robot__action__DeliverItem_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_robot__action__DeliverItem_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_robot__action__DeliverItem_Feedback__Sequence *
warehouse_robot__action__DeliverItem_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_Feedback__Sequence * array = (warehouse_robot__action__DeliverItem_Feedback__Sequence *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_robot__action__DeliverItem_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_robot__action__DeliverItem_Feedback__Sequence__destroy(warehouse_robot__action__DeliverItem_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_robot__action__DeliverItem_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_robot__action__DeliverItem_Feedback__Sequence__are_equal(const warehouse_robot__action__DeliverItem_Feedback__Sequence * lhs, const warehouse_robot__action__DeliverItem_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_Feedback__Sequence__copy(
  const warehouse_robot__action__DeliverItem_Feedback__Sequence * input,
  warehouse_robot__action__DeliverItem_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_robot__action__DeliverItem_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_robot__action__DeliverItem_Feedback * data =
      (warehouse_robot__action__DeliverItem_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_robot__action__DeliverItem_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_robot__action__DeliverItem_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "warehouse_robot/action/detail/deliver_item__functions.h"

bool
warehouse_robot__action__DeliverItem_SendGoal_Request__init(warehouse_robot__action__DeliverItem_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    warehouse_robot__action__DeliverItem_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!warehouse_robot__action__DeliverItem_Goal__init(&msg->goal)) {
    warehouse_robot__action__DeliverItem_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_robot__action__DeliverItem_SendGoal_Request__fini(warehouse_robot__action__DeliverItem_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  warehouse_robot__action__DeliverItem_Goal__fini(&msg->goal);
}

bool
warehouse_robot__action__DeliverItem_SendGoal_Request__are_equal(const warehouse_robot__action__DeliverItem_SendGoal_Request * lhs, const warehouse_robot__action__DeliverItem_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!warehouse_robot__action__DeliverItem_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_SendGoal_Request__copy(
  const warehouse_robot__action__DeliverItem_SendGoal_Request * input,
  warehouse_robot__action__DeliverItem_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!warehouse_robot__action__DeliverItem_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

warehouse_robot__action__DeliverItem_SendGoal_Request *
warehouse_robot__action__DeliverItem_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_SendGoal_Request * msg = (warehouse_robot__action__DeliverItem_SendGoal_Request *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_robot__action__DeliverItem_SendGoal_Request));
  bool success = warehouse_robot__action__DeliverItem_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_robot__action__DeliverItem_SendGoal_Request__destroy(warehouse_robot__action__DeliverItem_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_robot__action__DeliverItem_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence__init(warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_SendGoal_Request * data = NULL;

  if (size) {
    data = (warehouse_robot__action__DeliverItem_SendGoal_Request *)allocator.zero_allocate(size, sizeof(warehouse_robot__action__DeliverItem_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_robot__action__DeliverItem_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_robot__action__DeliverItem_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence__fini(warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_robot__action__DeliverItem_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence *
warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence * array = (warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence__destroy(warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence__are_equal(const warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence * lhs, const warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence__copy(
  const warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence * input,
  warehouse_robot__action__DeliverItem_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_robot__action__DeliverItem_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_robot__action__DeliverItem_SendGoal_Request * data =
      (warehouse_robot__action__DeliverItem_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_robot__action__DeliverItem_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_robot__action__DeliverItem_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
warehouse_robot__action__DeliverItem_SendGoal_Response__init(warehouse_robot__action__DeliverItem_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    warehouse_robot__action__DeliverItem_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_robot__action__DeliverItem_SendGoal_Response__fini(warehouse_robot__action__DeliverItem_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
warehouse_robot__action__DeliverItem_SendGoal_Response__are_equal(const warehouse_robot__action__DeliverItem_SendGoal_Response * lhs, const warehouse_robot__action__DeliverItem_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_SendGoal_Response__copy(
  const warehouse_robot__action__DeliverItem_SendGoal_Response * input,
  warehouse_robot__action__DeliverItem_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

warehouse_robot__action__DeliverItem_SendGoal_Response *
warehouse_robot__action__DeliverItem_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_SendGoal_Response * msg = (warehouse_robot__action__DeliverItem_SendGoal_Response *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_robot__action__DeliverItem_SendGoal_Response));
  bool success = warehouse_robot__action__DeliverItem_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_robot__action__DeliverItem_SendGoal_Response__destroy(warehouse_robot__action__DeliverItem_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_robot__action__DeliverItem_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence__init(warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_SendGoal_Response * data = NULL;

  if (size) {
    data = (warehouse_robot__action__DeliverItem_SendGoal_Response *)allocator.zero_allocate(size, sizeof(warehouse_robot__action__DeliverItem_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_robot__action__DeliverItem_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_robot__action__DeliverItem_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence__fini(warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_robot__action__DeliverItem_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence *
warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence * array = (warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence__destroy(warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence__are_equal(const warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence * lhs, const warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence__copy(
  const warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence * input,
  warehouse_robot__action__DeliverItem_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_robot__action__DeliverItem_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_robot__action__DeliverItem_SendGoal_Response * data =
      (warehouse_robot__action__DeliverItem_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_robot__action__DeliverItem_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_robot__action__DeliverItem_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
warehouse_robot__action__DeliverItem_GetResult_Request__init(warehouse_robot__action__DeliverItem_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    warehouse_robot__action__DeliverItem_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_robot__action__DeliverItem_GetResult_Request__fini(warehouse_robot__action__DeliverItem_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
warehouse_robot__action__DeliverItem_GetResult_Request__are_equal(const warehouse_robot__action__DeliverItem_GetResult_Request * lhs, const warehouse_robot__action__DeliverItem_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_GetResult_Request__copy(
  const warehouse_robot__action__DeliverItem_GetResult_Request * input,
  warehouse_robot__action__DeliverItem_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

warehouse_robot__action__DeliverItem_GetResult_Request *
warehouse_robot__action__DeliverItem_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_GetResult_Request * msg = (warehouse_robot__action__DeliverItem_GetResult_Request *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_robot__action__DeliverItem_GetResult_Request));
  bool success = warehouse_robot__action__DeliverItem_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_robot__action__DeliverItem_GetResult_Request__destroy(warehouse_robot__action__DeliverItem_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_robot__action__DeliverItem_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_robot__action__DeliverItem_GetResult_Request__Sequence__init(warehouse_robot__action__DeliverItem_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_GetResult_Request * data = NULL;

  if (size) {
    data = (warehouse_robot__action__DeliverItem_GetResult_Request *)allocator.zero_allocate(size, sizeof(warehouse_robot__action__DeliverItem_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_robot__action__DeliverItem_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_robot__action__DeliverItem_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_robot__action__DeliverItem_GetResult_Request__Sequence__fini(warehouse_robot__action__DeliverItem_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_robot__action__DeliverItem_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_robot__action__DeliverItem_GetResult_Request__Sequence *
warehouse_robot__action__DeliverItem_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_GetResult_Request__Sequence * array = (warehouse_robot__action__DeliverItem_GetResult_Request__Sequence *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_robot__action__DeliverItem_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_robot__action__DeliverItem_GetResult_Request__Sequence__destroy(warehouse_robot__action__DeliverItem_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_robot__action__DeliverItem_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_robot__action__DeliverItem_GetResult_Request__Sequence__are_equal(const warehouse_robot__action__DeliverItem_GetResult_Request__Sequence * lhs, const warehouse_robot__action__DeliverItem_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_GetResult_Request__Sequence__copy(
  const warehouse_robot__action__DeliverItem_GetResult_Request__Sequence * input,
  warehouse_robot__action__DeliverItem_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_robot__action__DeliverItem_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_robot__action__DeliverItem_GetResult_Request * data =
      (warehouse_robot__action__DeliverItem_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_robot__action__DeliverItem_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_robot__action__DeliverItem_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "warehouse_robot/action/detail/deliver_item__functions.h"

bool
warehouse_robot__action__DeliverItem_GetResult_Response__init(warehouse_robot__action__DeliverItem_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!warehouse_robot__action__DeliverItem_Result__init(&msg->result)) {
    warehouse_robot__action__DeliverItem_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_robot__action__DeliverItem_GetResult_Response__fini(warehouse_robot__action__DeliverItem_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  warehouse_robot__action__DeliverItem_Result__fini(&msg->result);
}

bool
warehouse_robot__action__DeliverItem_GetResult_Response__are_equal(const warehouse_robot__action__DeliverItem_GetResult_Response * lhs, const warehouse_robot__action__DeliverItem_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!warehouse_robot__action__DeliverItem_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_GetResult_Response__copy(
  const warehouse_robot__action__DeliverItem_GetResult_Response * input,
  warehouse_robot__action__DeliverItem_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!warehouse_robot__action__DeliverItem_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

warehouse_robot__action__DeliverItem_GetResult_Response *
warehouse_robot__action__DeliverItem_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_GetResult_Response * msg = (warehouse_robot__action__DeliverItem_GetResult_Response *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_robot__action__DeliverItem_GetResult_Response));
  bool success = warehouse_robot__action__DeliverItem_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_robot__action__DeliverItem_GetResult_Response__destroy(warehouse_robot__action__DeliverItem_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_robot__action__DeliverItem_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_robot__action__DeliverItem_GetResult_Response__Sequence__init(warehouse_robot__action__DeliverItem_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_GetResult_Response * data = NULL;

  if (size) {
    data = (warehouse_robot__action__DeliverItem_GetResult_Response *)allocator.zero_allocate(size, sizeof(warehouse_robot__action__DeliverItem_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_robot__action__DeliverItem_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_robot__action__DeliverItem_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_robot__action__DeliverItem_GetResult_Response__Sequence__fini(warehouse_robot__action__DeliverItem_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_robot__action__DeliverItem_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_robot__action__DeliverItem_GetResult_Response__Sequence *
warehouse_robot__action__DeliverItem_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_GetResult_Response__Sequence * array = (warehouse_robot__action__DeliverItem_GetResult_Response__Sequence *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_robot__action__DeliverItem_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_robot__action__DeliverItem_GetResult_Response__Sequence__destroy(warehouse_robot__action__DeliverItem_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_robot__action__DeliverItem_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_robot__action__DeliverItem_GetResult_Response__Sequence__are_equal(const warehouse_robot__action__DeliverItem_GetResult_Response__Sequence * lhs, const warehouse_robot__action__DeliverItem_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_GetResult_Response__Sequence__copy(
  const warehouse_robot__action__DeliverItem_GetResult_Response__Sequence * input,
  warehouse_robot__action__DeliverItem_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_robot__action__DeliverItem_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_robot__action__DeliverItem_GetResult_Response * data =
      (warehouse_robot__action__DeliverItem_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_robot__action__DeliverItem_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_robot__action__DeliverItem_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "warehouse_robot/action/detail/deliver_item__functions.h"

bool
warehouse_robot__action__DeliverItem_FeedbackMessage__init(warehouse_robot__action__DeliverItem_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    warehouse_robot__action__DeliverItem_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!warehouse_robot__action__DeliverItem_Feedback__init(&msg->feedback)) {
    warehouse_robot__action__DeliverItem_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
warehouse_robot__action__DeliverItem_FeedbackMessage__fini(warehouse_robot__action__DeliverItem_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  warehouse_robot__action__DeliverItem_Feedback__fini(&msg->feedback);
}

bool
warehouse_robot__action__DeliverItem_FeedbackMessage__are_equal(const warehouse_robot__action__DeliverItem_FeedbackMessage * lhs, const warehouse_robot__action__DeliverItem_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!warehouse_robot__action__DeliverItem_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_FeedbackMessage__copy(
  const warehouse_robot__action__DeliverItem_FeedbackMessage * input,
  warehouse_robot__action__DeliverItem_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!warehouse_robot__action__DeliverItem_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

warehouse_robot__action__DeliverItem_FeedbackMessage *
warehouse_robot__action__DeliverItem_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_FeedbackMessage * msg = (warehouse_robot__action__DeliverItem_FeedbackMessage *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_robot__action__DeliverItem_FeedbackMessage));
  bool success = warehouse_robot__action__DeliverItem_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_robot__action__DeliverItem_FeedbackMessage__destroy(warehouse_robot__action__DeliverItem_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_robot__action__DeliverItem_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence__init(warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_FeedbackMessage * data = NULL;

  if (size) {
    data = (warehouse_robot__action__DeliverItem_FeedbackMessage *)allocator.zero_allocate(size, sizeof(warehouse_robot__action__DeliverItem_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_robot__action__DeliverItem_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_robot__action__DeliverItem_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence__fini(warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_robot__action__DeliverItem_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence *
warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence * array = (warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence *)allocator.allocate(sizeof(warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence__destroy(warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence__are_equal(const warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence * lhs, const warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence__copy(
  const warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence * input,
  warehouse_robot__action__DeliverItem_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(warehouse_robot__action__DeliverItem_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_robot__action__DeliverItem_FeedbackMessage * data =
      (warehouse_robot__action__DeliverItem_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_robot__action__DeliverItem_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_robot__action__DeliverItem_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_robot__action__DeliverItem_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
