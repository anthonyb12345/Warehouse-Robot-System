import rclpy
from rclpy.node import Node
from warehouse_robot.action import DeliverItem
from rclpy.action import ActionClient

class ItemDeliveryClient(Node):

    def __init__(self):
        super().__init__('item_delivery_client')
        self._action_client = ActionClient(self, DeliverItem, 'deliver_item')
        self.get_logger().info('Action client created')

    def send_goal(self, item_name, quantity):
        # Wait for the action server to be available
        if not self._action_client.wait_for_server(timeout_sec=10.0):
            self.get_logger().error('Action server not available')
            return

        # Create the goal message
        goal_msg = DeliverItem.Goal()
        goal_msg.item_name = item_name
        goal_msg.quantity = quantity

        # Send the goal
        self.get_logger().info(f'Sending goal: {item_name}, quantity: {quantity}')
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        rclpy.spin_until_future_complete(self, self._send_goal_future)

        goal_handle = self._send_goal_future.result()
        if not goal_handle.accepted:
            self.get_logger().error('Goal rejected')
            return

        self.get_logger().info('Goal accepted, waiting for result...')
        self._get_result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, self._get_result_future)
        result = self._get_result_future.result().result

        # Process the result
        if result.success:
            self.get_logger().info(f'Result: {result.message}')
        else:
            self.get_logger().error(f'Failed: {result.message}')
        
    def feedback_callback(self, feedback_msg):
        # Handle feedback from the action server
        self.get_logger().info(f'Feedback: {feedback_msg.feedback.status}')

def main(args=None):
    rclpy.init(args=args)
    item_delivery_client = ItemDeliveryClient()

    # Send a test goal
    item_delivery_client.send_goal('item1', 3)

    # Spin to process callbacks
    rclpy.spin(item_delivery_client)

    # Clean up
    rclpy.shutdown()

if __name__ == '__main__':
    main()