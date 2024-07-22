from setuptools import find_packages
from setuptools import setup

setup(
    name='warehouse_robot',
    version='0.0.0',
    packages=find_packages(
        include=('warehouse_robot', 'warehouse_robot.*')),
)
