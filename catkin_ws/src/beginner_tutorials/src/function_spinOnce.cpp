#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

void A(void)
{
    ROS_INFO("A");
}

void B(void)
{
    ROS_INFO("B");
}

void C(void)
{
    ROS_INFO("C");
}

void chatterCallback_D(const std_msgs::String::ConstPtr& msg)
{   
    ROS_INFO("%s", msg->data.c_str());
}

int main(int argc, char **argv){
    ros::init(argc, argv, "function_spinOnce");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback_D);

    while(ros::ok()){    
        A();
        B();
        C();
        ros::spinOnce();
    }
    
    return 0;
}