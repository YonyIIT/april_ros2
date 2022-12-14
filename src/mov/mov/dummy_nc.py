#!/usr/bin/env python3

from matplotlib import rc
import rclpy
import random
from time import sleep
from rclpy.node import Node

from std_msgs.msg import String
from std_msgs.msg import Float32MultiArray

from april_msgs.msg import NeuromorphicSensing

class Dummy_Publisher_NC(Node):

    def __init__(self):
        super().__init__('nc_strategies')

        self.publisher_ = self.create_publisher(NeuromorphicSensing, 'nc_topic', 10)
        self.i = 0
        self.timeMin=0.1
        self.timeMax=0.5
        self.publishData()


    def publishData(self):
        while True:
            delay = random.uniform(self.timeMin, self.timeMax)
            #print("Sleep " + str(delay) + "s")
            msg2 = NeuromorphicSensing()
            #msg2.point1_speed = ('POINT SPEED 1: %d' % self.i)
            #msg2.point2_speed = ('POINT SPEED 2: %d' % self.i)

            msg2.point1_speed = ('POINT SPEED 1: %d m/s' % random.uniform(1, 10))
            msg2.point2_speed = ('POINT SPEED 2: %d m/s' % random.uniform(1, 10))
            #msg = String
            ##msg.data = 'GRASP: %d' % self.i
            #print(self.topicMsg())
            #msg.data=('NEUROMORPHIC CAMERA: %d' % self.i)
            #msg.data=
            self.publisher_.publish(msg2)
            #self.get_logger().info('Publishing: "%s"' % msg.data)
            self.i += 1
            sleep(delay)
            

        
        
def main(args=None):
    rclpy.init(args=args)
    dummy=Dummy_Publisher_NC()
    rclpy.spin(dummy)
    dummy.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()