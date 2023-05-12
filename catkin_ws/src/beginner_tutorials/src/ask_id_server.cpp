#include "ros/ros.h"
#include "beginner_tutorials/my_srv.h"
#include <sstream>

bool search(beginner_tutorials::my_srv::Request  &req,
            beginner_tutorials::my_srv::Response &res)
{
    if (req.id == 1)
    {
        res.name = "AAA";
        res.gender = "man";
    }
    else if (req.id == 2)
    {
        res.name = "BBB";
        res.gender = "female";
    }
    else
    {
        res.name = "ABC";
        res.gender = "other";
    }
    res.age = req.id;

    ROS_INFO("request: id = %d", req.id);
    ROS_INFO("response: name = %s, gender = %s, age = %d", res.name.c_str(), res.gender.c_str(), res.age);
    return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "ask_id_server");
  ros::NodeHandle n;
  ros::ServiceServer service = n.advertiseService("ask_id_server", search);
  ROS_INFO("Ready to ask id.");
  ros::spin();
  
  return 0;
}