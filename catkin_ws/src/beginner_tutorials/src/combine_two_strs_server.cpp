#include "ros/ros.h"
#include "std_msgs/String.h"

bool combine(const std_msgs::String::ConstPtr& msg)
{   
    //string str_combine = str1 + str2;
    //ROS_INFO("request: x=%s, y=%s", str1, str2);
    //ROS_INFO("sending back response: [%s]", str_combine);
    return true;
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "combine_two_strs_server");
    ros::NodeHandle n;
    //ros::ServiceServer service = n.advertise("combine_two_strs", combine);
}