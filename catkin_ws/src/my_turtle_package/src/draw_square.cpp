#include <ros/ros.h>
#include <geometry_msgs/Twist.h> //motion speed structure type geometry_msgs::Twist definition file
#define PI 3.1415926535
 
int main(int argc, char *argv[])
{
    ros::init(argc, argv, "vel_ctrl");  //Initialize the node
    ros::NodeHandle n;         //Declare a NodeHandle object n and generate a broadcast object vel with n_ pub
    ros::Publisher vel_pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 10);
    //vel_pub will broadcast geometry in the topic "/ cmd_vel" (robot speed control topic)_ Msgs:: twist type data
    ROS_INFO("draw_square start...");//Output display information
    int cnt = 0, init_angle = 0;
    while(ros::ok())
    {
        geometry_msgs::Twist vel_cmd; //Declare a geometry_ Msgs:: object vel of type twist_ CMD and assign the value of speed to this object
 
        //vel_cmd.linear.x = 2.0;  //Front and rear (+ -) m/s
        //vel_cmd.linear.y = 0.0;  //Left and right (+ -) m/s
        //vel_cmd.linear.z = 0.0;
 
        //vel_cmd.angular.x = 0;
        //vel_cmd.angular.y = 0;
        //vel_cmd.angular.z = 1; //Rotation speed of robot, + left turn, - right turn, unit: rad/s
        
        cnt++;
        //ROS_INFO("%d", cnt);
        if(cnt > 0 && cnt <= 200000)
        {   
            vel_cmd.linear.x = 2.0;
            vel_cmd.linear.y = 0.0;
            vel_cmd.linear.z = 0.0;

            vel_cmd.angular.x = 0.0;
            vel_cmd.angular.y = 0.0;
            vel_cmd.angular.z = 0.0;
        }
        
        if(cnt > 200000 && cnt <= 400000)
        {
            vel_cmd.linear.x = 0.0;
            vel_cmd.linear.y = 2.0;
            vel_cmd.linear.z = 0.0;

            vel_cmd.angular.x = 0.0;
            vel_cmd.angular.y = 0.0;
            vel_cmd.angular.z = 0.0;
        }
        if(cnt > 400000 && cnt <= 600000)
        {   
            vel_cmd.linear.x = -2.0;
            vel_cmd.linear.y = 0.0;
            vel_cmd.linear.z = 0.0;

            vel_cmd.angular.x = 0.0;
            vel_cmd.angular.y = 0.0;
            vel_cmd.angular.z = 0.0;
        }
        if(cnt > 600000&& cnt <= 800000)
        {   
            vel_cmd.linear.x = 0.0;
            vel_cmd.linear.y = -2.0;
            vel_cmd.linear.z = 0.0;

            vel_cmd.angular.x = 0.0;
            vel_cmd.angular.y = 0.0;
            vel_cmd.angular.z = 0.0;
        }
        if(cnt == 800000)
        {
            cnt = 0;
        }


        vel_pub.publish(vel_cmd); //After assignment, it is sent to the topic "/ cmd_vel". The core node of the robot will receive and send the past speed value from this topic and forward it to the hardware body for execution
 
        ros::spinOnce();//Calling this function allows other callback functions to be executed (more than the routine does not use callback functions)
    }
    return 0;
}
