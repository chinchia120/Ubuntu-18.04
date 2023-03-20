# CMake generated Testfile for 
# Source directory: /home/chinchia120/autoware.ai/src/drivers/awf_drivers/as
# Build directory: /home/chinchia120/autoware.ai/build/as
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_as_roslint_package "/home/chinchia120/autoware.ai/build/as/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/as/test_results/as/roslint-as.xml" "--working-dir" "/home/chinchia120/autoware.ai/build/as" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/chinchia120/autoware.ai/build/as/test_results/as/roslint-as.xml make roslint_as")
subdirs("gtest")
