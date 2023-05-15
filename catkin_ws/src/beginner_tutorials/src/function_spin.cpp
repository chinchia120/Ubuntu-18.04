#include "ros/ros.h"
#include "std_msgs/String.h"

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

void D(const std_msgs::String::ConstPtr& msg)
{
    ROS_INFO("D");
}

int main(int argc, char **argv){
    ros::init(argc, argv, "function_spin");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("chatter", 1000, D);
    
    A();
    B(); //假設在執行其他行程式碼的時候收到/topic送來的message
    C();

    ros::spin();  //在呼叫這行的時候才會執行上面已經定義的callback function D()
    return 0;
}