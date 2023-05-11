#include <ros/ros.h>
#include <geometry_msgs/Twist.h> 
#define PI 3.1415926535897932384626433832795028
 
int main(int argc, char *argv[])
{
    ros::init(argc, argv, "vel_ctrl");
    ros::NodeHandle n;
    ros::Publisher vel_pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 10);
    ROS_INFO("draw_square start...");
    ros::Rate loopRate(2);

    int cnt = 0;
    while(ros::ok())
    {
        geometry_msgs::Twist vel_cmd;
        cnt++;
        //ROS_INFO("%d", cnt);

        vel_cmd.linear.z = 0.0;
        vel_cmd.angular.x = 0.0;
        vel_cmd.angular.y = 0.0;
        vel_cmd.angular.z = 0.0;
        
        if(cnt == 1)
        {   
            vel_cmd.linear.x = 2.0;
            vel_cmd.linear.y = 0.0;
        }
        
        if(cnt == 2)
        {
            vel_cmd.linear.x = 0.0;
            vel_cmd.linear.y = 2.0;
        }

        if(cnt == 3)
        {   
            vel_cmd.linear.x = -2.0;
            vel_cmd.linear.y = 0.0;
        }

        if(cnt == 4)
        {   
            vel_cmd.linear.x = 0.0;
            vel_cmd.linear.y = -2.0;
            cnt = 0;
        }

        vel_pub.publish(vel_cmd);
        ros::spinOnce();
        loopRate.sleep();
    }
    return 0;
}
