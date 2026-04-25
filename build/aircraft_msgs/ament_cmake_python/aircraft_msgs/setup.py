from setuptools import find_packages
from setuptools import setup

setup(
    name='aircraft_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('aircraft_msgs', 'aircraft_msgs.*')),
)
