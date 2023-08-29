#include "ros/ros.h"
#include "tutorial/addition.h"
  


int main(int x, char **y){
    ros::init(x,y,"Addition_service_Client_node"); //initialze
    ros::NodeHandle nh;//ros node handle, create an object nh
    ros::ServiceClient client = nh.serviceClient<tutorial::addition>("Add_two_Integers");

    tutorial::addition srv;
    srv.request.a=2;
    srv.request.b=4;

    if(client.call(srv)){
        ROS_INFO("The sum of the given integers = %d",srv.response.sum);
    }
    else {
        ROS_INFO("Failed to call the service!");
        return 1;
    }



    return 0;
}