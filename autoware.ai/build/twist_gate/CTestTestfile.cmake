# CMake generated Testfile for 
# Source directory: /home/chinchia120/autoware.ai/src/autoware/core_planning/twist_gate
# Build directory: /home/chinchia120/autoware.ai/build/twist_gate
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_twist_gate_roslint_package "/home/chinchia120/autoware.ai/build/twist_gate/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/twist_gate/test_results/twist_gate/roslint-twist_gate.xml" "--working-dir" "/home/chinchia120/autoware.ai/build/twist_gate" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/chinchia120/autoware.ai/build/twist_gate/test_results/twist_gate/roslint-twist_gate.xml make roslint_twist_gate")
add_test(_ctest_twist_gate_rostest_test_test_twist_gate.test "/home/chinchia120/autoware.ai/build/twist_gate/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/twist_gate/test_results/twist_gate/rostest-test_test_twist_gate.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/chinchia120/autoware.ai/src/autoware/core_planning/twist_gate --package=twist_gate --results-filename test_test_twist_gate.xml --results-base-dir \"/home/chinchia120/autoware.ai/build/twist_gate/test_results\" /home/chinchia120/autoware.ai/src/autoware/core_planning/twist_gate/test/test_twist_gate.test ")
subdirs("gtest")
