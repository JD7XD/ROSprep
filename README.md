1. **Basics:** Learn about robotics and programming basics.
2. **Install ROS:** Choose version, follow installation guide on ROS website.
3. **Concepts:** Understand nodes, topics, messages, services.
4. **Tutorials:** Follow official ROS tutorials step by step.
5. **Simulators:** Use Gazebo, RViz for safe testing.
6. **Projects:** Start simple, progress to more complex tasks.
7. **Robot Models:** Learn URDF, Xacro for modeling.
8. **Packages:** Explore pre-built functionalities in ROS packages.
9. **Community:** Join ROS forums for help and discussions.
10. **Advanced:** Dive into mapping, ROS 2, path planning.
11. **Resources:** Consider books, online courses for structured learning.

mkdir -p work/src
catkin_make --> creates devel and build folders inside work folder along with src that contain the necessary tools
create a package inside source folder - catkin_create_pkg **name
roscore - collection of nodes and programs, basic structure of ros - always runs during a ros project
node - single executable file, most of the necessary code - should take and send data to other nodes, can be done by service or topics
Topics - way of communicating between nodes( nodes can either subscribe or publish), 
              1 publish/many subscriber, 
               one way communication
              ![image](https://github.com/JD7XD/ROSprep/assets/132233669/b96df0ca-37ae-4536-a6d0-d9538bda900b)
Messages - to describe the content inside the topic

--------------------------------------------------------------------------------------------------------------

**Running the code by starting the roscore**
after publisher code written and cmakelists.txt edited --> terminal --> catkin_make command to build
source the file - source devel/setup.bash (command)
new cmd terminal --> roscore (command to start the process)
now run the ros node on 1st terminal --> rosrun **pkg_name publisher_node (command)
now open ros topic in new terminal --> rostopic List (cmd) - to check active topics
in in the topic terminal --> rostopic echo /**Name_of_Topic (cmd)
--> Displays the string mentioned in code
