# CMake generated Testfile for 
# Source directory: /home/chinchia120/autoware.ai/src/autoware/core_planning/waypoint_planner
# Build directory: /home/chinchia120/autoware.ai/build/waypoint_planner
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_waypoint_planner_roslint_package "/home/chinchia120/autoware.ai/build/waypoint_planner/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/waypoint_planner/test_results/waypoint_planner/roslint-waypoint_planner.xml" "--working-dir" "/home/chinchia120/autoware.ai/build/waypoint_planner" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/chinchia120/autoware.ai/build/waypoint_planner/test_results/waypoint_planner/roslint-waypoint_planner.xml make roslint_waypoint_planner")
subdirs("gtest")
