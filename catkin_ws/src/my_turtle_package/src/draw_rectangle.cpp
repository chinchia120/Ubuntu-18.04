#include <ros/ros.h>
#include <geometry_msgs/Twist.h> 
#include <bits/stdc++.h>
#define PI acos(-1)
 
int main(int argc, char *argv[])
{
    ros::init(argc, argv, "vel_ctrl");
    ros::NodeHandle n;
    ros::Publisher vel_pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1);
    ROS_INFO("draw_rectangle start...");
    ros::Rate loopRate(2);
    geometry_msgs::Twist vel_cmd;

    int cnt = 0;
    while(ros::ok())
    {
        cnt++;

        vel_cmd.linear.x = 1.5;
        vel_cmd.linear.y = 0.0;
        vel_cmd.linear.z = 0.0;

        vel_cmd.angular.x = 0.0;
        vel_cmd.angular.y = 0.0;
        vel_cmd.angular.z = 0.0;

        if(cnt == 5)
        {   
            vel_cmd.angular.z = PI;
            cnt = 0;
        }

        vel_pub.publish(vel_cmd);
        ros::spinOnce();
        loopRate.sleep();
    }
    return 0;
}
