#include <ros/ros.h>
#include <geometry_msgs/Twist.h> 
#define PI 3.1415926535897932384626433832795028
 
int main(int argc, char *argv[])
{
    ros::init(argc, argv, "vel_ctrl");
    ros::NodeHandle n;
    ros::Publisher vel_pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 10);
    ROS_INFO("draw_square start...");

    int cnt = 200001;
    while(ros::ok())
    {
        geometry_msgs::Twist vel_cmd;
        cnt++;
        //ROS_INFO("%d", cnt);

        vel_cmd.linear.z = 0.0;
        vel_cmd.angular.x = 0.0;
        vel_cmd.angular.y = 0.0;
        vel_cmd.angular.z = 0.0;
        
        if(cnt > 200000 && cnt <= 400000)
        {   
            vel_cmd.linear.x = 2.0;
            vel_cmd.linear.y = 0.0;
        }
        
        if(cnt > 400000 && cnt <= 600000)
        {
            vel_cmd.linear.x = 0.0;
            vel_cmd.linear.y = 2.0;
        }

        if(cnt > 600000 && cnt <= 800000)
        {   
            vel_cmd.linear.x = -2.0;
            vel_cmd.linear.y = 0.0;
        }

        if(cnt > 800000 && cnt <= 1000000)
        {   
            vel_cmd.linear.x = 0.0;
            vel_cmd.linear.y = -2.0;
        }

        if(cnt == 1000000)
        {
            cnt = 200001;
        }

        vel_pub.publish(vel_cmd);
        ros::spinOnce();
    }
    return 0;
}
