from setuptools import find_packages
from setuptools import setup

setup(
    name='sim',
    version='0.0.1',
    packages=find_packages(
        include=('sim', 'sim.*')),
)