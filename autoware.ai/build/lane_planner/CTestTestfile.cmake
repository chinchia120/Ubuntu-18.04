# CMake generated Testfile for 
# Source directory: /home/point001/autoware.ai/src/autoware/core_planning/lane_planner
# Build directory: /home/point001/autoware.ai/build/lane_planner
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_lane_planner_rostest_test_test_lane_select.test "/home/point001/autoware.ai/build/lane_planner/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/point001/autoware.ai/build/lane_planner/test_results/lane_planner/rostest-test_test_lane_select.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/point001/autoware.ai/src/autoware/core_planning/lane_planner --package=lane_planner --results-filename test_test_lane_select.xml --results-base-dir \"/home/point001/autoware.ai/build/lane_planner/test_results\" /home/point001/autoware.ai/src/autoware/core_planning/lane_planner/test/test_lane_select.test ")
subdirs("gtest")
