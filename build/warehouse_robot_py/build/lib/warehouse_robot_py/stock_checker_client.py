import rclpy
from rclpy.node import Node
from warehouse_robot.srv import CheckStock

class StockCheckerClient(Node):
    '''
    def __init__(self):
        super().__init__('stock_checker_service_client')
        self.cli = self.create_client(CheckStock, 'check_stock')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = CheckStock.Request()


    def send_request(self, item_name):
        self.req.item_name = item_name
        self.future = self.cli.call_async(self.req)
        self.future.add_done_callback(self.get_response_callback)

    def get_response_callback(self, future):
        response = future.result()
        self.stock = response.stock_level
        self.get_logger().info('Stock level: {0}'.format(response.stock_level))

    '''
    def __init__(self):
        super().__init__('stock_checker_client_node')
        self.client = self.create_client(CheckStock, 'check_stock')

        # Wait for the service to be available
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('StockChecker service not available, waiting again...')
    def check_stock(self, item_name):
        request = CheckStock.Request()
        request.item_name = item_name
        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        return future.result().stock_level
        
    
    
        

def main(args=None):
    rclpy.init(args=args)
    stock_checker_service_client = StockCheckerClient()
    stock_checker_service_client.send_request('item1')
    rclpy.spin(stock_checker_service_client)
    stock_checker_service_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
