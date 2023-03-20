# CMake generated Testfile for 
# Source directory: /home/chinchia120/autoware.ai/src/autoware/simulation/wf_simulator
# Build directory: /home/chinchia120/autoware.ai/build/wf_simulator
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_wf_simulator_rostest_test_test_wf_simulator.test "/home/chinchia120/autoware.ai/build/wf_simulator/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/wf_simulator/test_results/wf_simulator/rostest-test_test_wf_simulator.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/chinchia120/autoware.ai/src/autoware/simulation/wf_simulator --package=wf_simulator --results-filename test_test_wf_simulator.xml --results-base-dir \"/home/chinchia120/autoware.ai/build/wf_simulator/test_results\" /home/chinchia120/autoware.ai/src/autoware/simulation/wf_simulator/test/test_wf_simulator.test ")
add_test(_ctest_wf_simulator_roslint_package "/home/chinchia120/autoware.ai/build/wf_simulator/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/wf_simulator/test_results/wf_simulator/roslint-wf_simulator.xml" "--working-dir" "/home/chinchia120/autoware.ai/build/wf_simulator" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/chinchia120/autoware.ai/build/wf_simulator/test_results/wf_simulator/roslint-wf_simulator.xml make roslint_wf_simulator")
subdirs("gtest")
