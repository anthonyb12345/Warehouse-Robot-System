import rclpy
import time
from rclpy.node import Node
from warehouse_robot.action import DeliverItem
from warehouse_robot.srv import CheckStock
from rclpy.action import ActionServer
from rclpy.action.server import ServerGoalHandle
from warehouse_robot_py.stock_checker_client import StockCheckerClient


class DeliveryActionServer(Node):

    def __init__(self):
        super().__init__('delivery_action_server')
        self._action_server = ActionServer(
            self,
            DeliverItem,
            'deliver_item',
            self.execute_callback
        )
        # Create an instance of StockCheckerClient as a member
        self.stock_checker_client = StockCheckerClient()

    def execute_callback(self, goal_handle):
        # Get request from goal
        item_name = goal_handle.request.item_name
        quantity = goal_handle.request.quantity

         # Check stock level
        stock_level = self.stock_checker_client.check_stock(item_name)
        self.get_logger().info(f"Stock level for '{item_name}': {stock_level}")

        # Execute the action
        self.get_logger().info("Executing the goal")
        if stock_level <= 0:
            goal_handle.abort()
            self.get_logger().info(f"Aborted: Item {item_name} not found in stock.")
            result = DeliverItem.Result()
            result.success = False
            result.message = f"Item {item_name} not found in stock."
            return result

        if stock_level < quantity:
            goal_handle.abort()
            self.get_logger().info(f"Aborted: Not enough stock for {item_name}. Requested: {quantity}, Available: {stock_level}")
            result = DeliverItem.Result()
            result.success = False
            result.message = f"Not enough stock for {item_name}. Requested: {quantity}, Available: {stock_level}"
            return result
        
        # Simulate delivery
        for i in range(1, quantity + 1):
            time.sleep(1)
            feedback_msg = DeliverItem.Feedback()
            feedback_msg.status = f'Delivered {i}/{quantity} {item_name}'
            goal_handle.publish_feedback(feedback_msg)
        # self.get_logger().info(feedback_msg.status)
        
        goal_handle.succeed()
        result = DeliverItem.Result()
        result.success = True
        result.message = 'Delivery completed successfully'
        self.get_logger().info('Delivery completed successfully')
        return result


def main(args=None):
    rclpy.init(args=args)
    node = DeliveryActionServer()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
