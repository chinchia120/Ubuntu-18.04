# CMake generated Testfile for 
# Source directory: /home/chinchia120/autoware.ai/src/vendor/lanelet2/lanelet2_projection
# Build directory: /home/chinchia120/autoware.ai/build/lanelet2_projection
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_lanelet2_projection_gtest_lanelet2_projection-test_Mercator-test "/home/chinchia120/autoware.ai/build/lanelet2_projection/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/lanelet2_projection/test_results/lanelet2_projection/gtest-lanelet2_projection-test_Mercator-test.xml" "--working-dir" "/home/chinchia120/autoware.ai/src/vendor/lanelet2/lanelet2_projection/test" "--return-code" "/home/chinchia120/autoware.ai/build/lanelet2_projection/devel/lib/lanelet2_projection/lanelet2_projection-test_Mercator-test --gtest_output=xml:/home/chinchia120/autoware.ai/build/lanelet2_projection/test_results/lanelet2_projection/gtest-lanelet2_projection-test_Mercator-test.xml")
add_test(_ctest_lanelet2_projection_gtest_lanelet2_projection-test_UTM-test "/home/chinchia120/autoware.ai/build/lanelet2_projection/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/lanelet2_projection/test_results/lanelet2_projection/gtest-lanelet2_projection-test_UTM-test.xml" "--working-dir" "/home/chinchia120/autoware.ai/src/vendor/lanelet2/lanelet2_projection/test" "--return-code" "/home/chinchia120/autoware.ai/build/lanelet2_projection/devel/lib/lanelet2_projection/lanelet2_projection-test_UTM-test --gtest_output=xml:/home/chinchia120/autoware.ai/build/lanelet2_projection/test_results/lanelet2_projection/gtest-lanelet2_projection-test_UTM-test.xml")
add_test(_ctest_lanelet2_projection_nosetests_test "/home/chinchia120/autoware.ai/build/lanelet2_projection/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/lanelet2_projection/test_results/lanelet2_projection/nosetests-test.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/chinchia120/autoware.ai/build/lanelet2_projection/test_results/lanelet2_projection" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/chinchia120/autoware.ai/src/vendor/lanelet2/lanelet2_projection/test --with-xunit --xunit-file=/home/chinchia120/autoware.ai/build/lanelet2_projection/test_results/lanelet2_projection/nosetests-test.xml")
subdirs("gtest")
