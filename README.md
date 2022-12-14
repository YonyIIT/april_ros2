# IIT - APRIL SEM SIM GALACTIC WORKSPACE

# Table of Contents  
* [SOCIAL INTERACTION MODULE](/src/sim/)
* [SAFETY AND ERGONOMICS MANAGER](/src/sem/)  
* [NUROMORPHIC CAMERA CONTROLLER](/src/nc_controller/)  
* [RGB CAMERA PACKAGE](/src/rgb_camera/)
* [FATIGUE PACKAGE](/src/fatigue/)  
* [GRASP PACKAGE](/src/grasp/)  
* [MOVEMENT PACKAGE](/src/mov/)  
* [APRIL MESSAGES](https://github.com/aprilprojecteu/april_msgs/tree/galactic/msg_ros1/)

## Contact
[Jonathan Z. Bar-Magen Numhauser](mailto:jonathan.barmagen@iit.it)\
[Sara Nataletti](Sara.Nataletti@iit.it)\
[Giulia Belgiovine](mailto:Giulia.Belgiovine@iit.it)\
[Francesco Rea](mailto:Francesco.Rea@iit.it)

## Description

This level is only the Workspace level of the complete IIT April Galactic, for SIM and SEM components and all their nodes.
Here you will find, inside the /src folder, all the PACKAGES (SIM, SEM, etc.) that will include the necesarry funcionality.

There will be also INTERFACE Package, which will include as an independent package all the messages used by our system.

Later on, all the PACKAGES included here will be deployed by a DOCKER system inside the APRIL environment.

## ROS2 - GALACTIC INSTALLATION
In the latest version we followed the instructions in Galactic official site for ROS2 GALACTIC installation. This requires to have Ubuntu Linux 22, BUT it also upgrades the SetupTools in python to version 59, and for now we need to maintain the version at no more than 58 (See last section bellow)

Instructions at: https://docs.ros.org/en/galactic/index.html

For now there is backward compatibility with Galactic, so if you are using Galactic you can continue using it.


## RUNNING SIM AND SEM
First you have to clone this repo in a folder. That folder will represent the Workspace.

Then, you follow the next steps:
1) Go to /src folder
2) Run 
```sh
colcon build
```
3) After it finished building (If you see a Warnning message you may need to go to the PATCHES and FIXES section and check if there is a fix)
You need to install the packages: (Always in /src folder)
```sh
source ./install/local_setup.bash
or
. /install/local_setup.sh
```

4) Finally, to run all the packages and NODEs together, we just have to run the launch file in SIM. 
```sh
ros2 launch sim sim.launch.py
```

Now all the packages should run. If you see any problem in this steps, it can either be an installation problem (See above) or a patch fix problem (see bellow)

## DOCKER
In regard to docker, we were able to create an Image in the Docker app, based on ROS2 instructions (the Image includes ROS2 installation, no needto add ROS2).

We recommend you add GIT support, because it is recommended to download this repository inside the Docker image, and then follow the Running installation above.


## PATCHES AND FIXES

We are using now ROS2 Humble. For it to work, you need Ubuntu 22. BUT we can finde some errores and fixes that will be listed here:

1) Colcon Python build FAILS: setuptools depreceated. To fix this, follow post: https://answers.ros.org/question/396439/setuptoolsdeprecationwarning-setuppy-install-is-deprecated-use-build-and-pip-and-other-standards-based-tools/ 

You need ONLY to DOWNGRADE the SETUPTOOLS (no need to downgrade python to 3.8)

```sh
pip install setuptools==58.2.0
```