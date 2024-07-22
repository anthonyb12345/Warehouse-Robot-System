# Warehouse-Robot-System

## Overview

This project consists of two ROS 2 packages:

1. **warehouse_robot**: Contains the action and service definitions.
2. **warehouse_robot_py**: Contains the Python implementation of the nodes and the launch file.

## Package Structure

### warehouse_robot
- **action/DeliverItem.action**
- **srv/CheckStock.srv**
- **CMakeLists.txt**

### warehouse_robot_py
- **launch/warehouse_robot_launch.py**
- **src/warehouse_robot_py/item_delivery_client.py**
- **src/warehouse_robot_py/item_delivery_server.py**
- **src/warehouse_robot_py/stock_checker_client.py**
- **src/warehouse_robot_py/stock_checker_server.py**

## Requirements

- ROS 2 (Galactic, Humble, or any other compatible version)
- Python 3.8 or higher
- matplotlib for plotting (can be installed via pip)

## Installation

1. **Create a ROS 2 workspace (if you don't have one already)**:
    ```sh
    mkdir -p ~/ros2_ws/src
    cd ~/ros2_ws
    ```

2. **Clone the repository**:
    ```sh
    cd ~/ros2_ws/src
    git clone git@github.com:anthonyb12345/Warehouse-Robot-System.git 
    ```

3. **Install dependencies**:
    ```sh
    cd ~/ros2_ws
    rosdep install --from-paths src --ignore-src -r -y
    ```

4. **Build the workspace**:
    ```sh
    colcon build
    ```

## Running the Nodes

1. **Source the workspace**:
    ```sh
    source ~/ros2_ws/install/setup.bash
    ```

2. **Launch the nodes**:
    ```sh
    ros2 launch warehouse_robot_py warehouse_robot_launch.py
    ```


