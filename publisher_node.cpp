#include "ros/ros.h"
#include "tutorial/data.h"

int main(int x, char **y){
    ros::init(x,y,"publisher"); //initialze
    ros::NodeHandle nh;//ros node handle, create an object nh
    ros::Publisher topic_pub = nh.advertise<tutorial::data>("Sample",1000);//create publisher object(Name of topic,queue size)
    ros::Rate loop_rate(1);//how often we will publish message     

    while(ros::ok())//loop runs until we press ctrl+c
    {
        tutorial::data data;
        data.name = "Jason";
        data.age = 21;
        data.sex = "male";
        topic_pub.publish(data);
        ros::spinOnce();//checks for callbacks or anything new that happened
        loop_rate.sleep();
    }                     
    return 0;           

}   