# CMake generated Testfile for 
# Source directory: /home/point001/autoware.ai/src/autoware/core_perception/lidar_localizer
# Build directory: /home/point001/autoware.ai/build/lidar_localizer
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_lidar_localizer_rostest_test_test_launch_ndt_matching.test "/home/point001/autoware.ai/build/lidar_localizer/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/point001/autoware.ai/build/lidar_localizer/test_results/lidar_localizer/rostest-test_test_launch_ndt_matching.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/point001/autoware.ai/src/autoware/core_perception/lidar_localizer --package=lidar_localizer --results-filename test_test_launch_ndt_matching.xml --results-base-dir \"/home/point001/autoware.ai/build/lidar_localizer/test_results\" /home/point001/autoware.ai/src/autoware/core_perception/lidar_localizer/test/test_launch_ndt_matching.test ")
subdirs("gtest")
