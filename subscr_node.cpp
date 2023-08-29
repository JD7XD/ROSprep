#include "ros/ros.h"
#include "std_msgs/String.h"


void wmtolog(const std_msgs::String::ConstPtr& msg){
    ROS_INFO("The message that was received is %s",msg->data.c_str());
}




int main(int x, char **y){
    ros::init(x,y,"subscriber"); //initialze
    ros::NodeHandle nh;//ros node handle, create an object nh
    ros::Subscriber topic_sub = nh.subscribe("Sample",1000,wmtolog);

    ros::spin();



    return 0;
}