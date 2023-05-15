#include <ros/ros.h>

int main(int argc, char** argv){
    ros::init(argc, argv, "hello_cpp_node");
    ros::NodeHandle handler;
    
    double frq;
    handler.getParam("/print_frq", frq);
    
    while (ros::ok()){
        ROS_INFO("Hello World!");
        ros::Duration(frq).sleep();
    }

    return 0;
}