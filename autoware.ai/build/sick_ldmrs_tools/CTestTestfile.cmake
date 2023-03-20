# CMake generated Testfile for 
# Source directory: /home/chinchia120/autoware.ai/src/drivers/awf_drivers/sick_ldmrs_tools
# Build directory: /home/chinchia120/autoware.ai/build/sick_ldmrs_tools
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_sick_ldmrs_tools_roslaunch-check_launch "/home/chinchia120/autoware.ai/build/sick_ldmrs_tools/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/sick_ldmrs_tools/test_results/sick_ldmrs_tools/roslaunch-check_launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/chinchia120/autoware.ai/build/sick_ldmrs_tools/test_results/sick_ldmrs_tools" "/opt/ros/melodic/share/roslaunch/cmake/../scripts/roslaunch-check -o \"/home/chinchia120/autoware.ai/build/sick_ldmrs_tools/test_results/sick_ldmrs_tools/roslaunch-check_launch.xml\" \"/home/chinchia120/autoware.ai/src/drivers/awf_drivers/sick_ldmrs_tools/launch\" ")
subdirs("gtest")
