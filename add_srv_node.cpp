#include "ros/ros.h"
#include "tutorial/addition.h"
  

bool add(tutorial::addition::Request &req, tutorial::addition::Response &res){
    res.sum = req.a + req.b;
    return true;
}

int main(int x, char **y){
    ros::init(x,y,"Service_node"); //initialze
    ros::NodeHandle nh;//ros node handle, create an object nh
    ros::ServiceServer service = nh.advertiseService("Add_two_Integers", add);

    ros::spin();



    return 0;
}