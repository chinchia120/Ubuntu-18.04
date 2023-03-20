# CMake generated Testfile for 
# Source directory: /home/chinchia120/autoware.ai/src/autoware/common/lanelet2_extension
# Build directory: /home/chinchia120/autoware.ai/build/lanelet2_extension
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_lanelet2_extension_roslint_package "/home/chinchia120/autoware.ai/build/lanelet2_extension/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/lanelet2_extension/test_results/lanelet2_extension/roslint-lanelet2_extension.xml" "--working-dir" "/home/chinchia120/autoware.ai/build/lanelet2_extension" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/chinchia120/autoware.ai/build/lanelet2_extension/test_results/lanelet2_extension/roslint-lanelet2_extension.xml make roslint_lanelet2_extension")
add_test(_ctest_lanelet2_extension_rostest_test_test_message_conversion.test "/home/chinchia120/autoware.ai/build/lanelet2_extension/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/lanelet2_extension/test_results/lanelet2_extension/rostest-test_test_message_conversion.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/chinchia120/autoware.ai/src/autoware/common/lanelet2_extension --package=lanelet2_extension --results-filename test_test_message_conversion.xml --results-base-dir \"/home/chinchia120/autoware.ai/build/lanelet2_extension/test_results\" /home/chinchia120/autoware.ai/src/autoware/common/lanelet2_extension/test/test_message_conversion.test ")
add_test(_ctest_lanelet2_extension_rostest_test_test_projector.test "/home/chinchia120/autoware.ai/build/lanelet2_extension/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/lanelet2_extension/test_results/lanelet2_extension/rostest-test_test_projector.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/chinchia120/autoware.ai/src/autoware/common/lanelet2_extension --package=lanelet2_extension --results-filename test_test_projector.xml --results-base-dir \"/home/chinchia120/autoware.ai/build/lanelet2_extension/test_results\" /home/chinchia120/autoware.ai/src/autoware/common/lanelet2_extension/test/test_projector.test ")
add_test(_ctest_lanelet2_extension_rostest_test_test_query.test "/home/chinchia120/autoware.ai/build/lanelet2_extension/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/lanelet2_extension/test_results/lanelet2_extension/rostest-test_test_query.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/chinchia120/autoware.ai/src/autoware/common/lanelet2_extension --package=lanelet2_extension --results-filename test_test_query.xml --results-base-dir \"/home/chinchia120/autoware.ai/build/lanelet2_extension/test_results\" /home/chinchia120/autoware.ai/src/autoware/common/lanelet2_extension/test/test_query.test ")
add_test(_ctest_lanelet2_extension_rostest_test_test_regulatory_elements.test "/home/chinchia120/autoware.ai/build/lanelet2_extension/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/lanelet2_extension/test_results/lanelet2_extension/rostest-test_test_regulatory_elements.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/chinchia120/autoware.ai/src/autoware/common/lanelet2_extension --package=lanelet2_extension --results-filename test_test_regulatory_elements.xml --results-base-dir \"/home/chinchia120/autoware.ai/build/lanelet2_extension/test_results\" /home/chinchia120/autoware.ai/src/autoware/common/lanelet2_extension/test/test_regulatory_elements.test ")
add_test(_ctest_lanelet2_extension_rostest_test_test_utilities.test "/home/chinchia120/autoware.ai/build/lanelet2_extension/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/lanelet2_extension/test_results/lanelet2_extension/rostest-test_test_utilities.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/chinchia120/autoware.ai/src/autoware/common/lanelet2_extension --package=lanelet2_extension --results-filename test_test_utilities.xml --results-base-dir \"/home/chinchia120/autoware.ai/build/lanelet2_extension/test_results\" /home/chinchia120/autoware.ai/src/autoware/common/lanelet2_extension/test/test_utilities.test ")
subdirs("gtest")
