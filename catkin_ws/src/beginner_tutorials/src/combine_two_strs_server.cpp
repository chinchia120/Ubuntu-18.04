#include "ros/ros.h"
#include "beginner_tutorials/combine_two_strs_srv.h"
#include <sstream>

bool combine(beginner_tutorials::combine_two_strs_srv::Request  &req,
             beginner_tutorials::combine_two_strs_srv::Response &res)
{
    res.str_combine = req.str1 + req.str2;
    ROS_INFO("request: str1 = %s, str2 = %s", req.str1.c_str(), req.str2.c_str());
    ROS_INFO("response: str_combine = %s", res.str_combine.c_str());
    
    return true;
}
int main(int argc, char **argv)
{
  ros::init(argc, argv, "combine_two_strs_server");
  ros::NodeHandle n;
  ros::ServiceServer service = n.advertiseService("combine_two_strs_server", combine);
  ROS_INFO("Ready to combine two strings.");
  ros::spin();
  
  return 0;
}