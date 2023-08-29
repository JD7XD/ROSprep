#include "ros/ros.h"
#include "tutorial/data.h"

void wmtolog(const tutorial::data &msg){
    ROS_INFO("Name: %s\n",msg.name.c_str());
    ROS_INFO("Age: %d\n",msg.age);
    ROS_INFO("Gender: %s\n",msg.sex.c_str());
}

int main(int x, char **y){
    ros::init(x,y,"subscriber"); //initialze
    ros::NodeHandle nh;//ros node handle, create an object nh
    ros::Subscriber topic_sub = nh.subscribe("Sample",1000,wmtolog);

    ros::spin();



    return 0;
}