# CMake generated Testfile for 
# Source directory: /home/chinchia120/autoware.ai/src/autoware/core_perception/vel_pose_diff_checker
# Build directory: /home/chinchia120/autoware.ai/build/vel_pose_diff_checker
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_vel_pose_diff_checker_roslint_package "/home/chinchia120/autoware.ai/build/vel_pose_diff_checker/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/vel_pose_diff_checker/test_results/vel_pose_diff_checker/roslint-vel_pose_diff_checker.xml" "--working-dir" "/home/chinchia120/autoware.ai/build/vel_pose_diff_checker" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/chinchia120/autoware.ai/build/vel_pose_diff_checker/test_results/vel_pose_diff_checker/roslint-vel_pose_diff_checker.xml make roslint_vel_pose_diff_checker")
add_test(_ctest_vel_pose_diff_checker_rostest_test_test_vel_pose_diff_checker.test "/home/chinchia120/autoware.ai/build/vel_pose_diff_checker/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/vel_pose_diff_checker/test_results/vel_pose_diff_checker/rostest-test_test_vel_pose_diff_checker.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/chinchia120/autoware.ai/src/autoware/core_perception/vel_pose_diff_checker --package=vel_pose_diff_checker --results-filename test_test_vel_pose_diff_checker.xml --results-base-dir \"/home/chinchia120/autoware.ai/build/vel_pose_diff_checker/test_results\" /home/chinchia120/autoware.ai/src/autoware/core_perception/vel_pose_diff_checker/test/test_vel_pose_diff_checker.test ")
subdirs("gtest")
