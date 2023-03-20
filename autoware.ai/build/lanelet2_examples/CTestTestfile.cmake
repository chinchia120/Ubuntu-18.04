# CMake generated Testfile for 
# Source directory: /home/chinchia120/autoware.ai/src/vendor/lanelet2/lanelet2_examples
# Build directory: /home/chinchia120/autoware.ai/build/lanelet2_examples
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_lanelet2_examples_nosetests_test "/home/chinchia120/autoware.ai/build/lanelet2_examples/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/lanelet2_examples/test_results/lanelet2_examples/nosetests-test.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/chinchia120/autoware.ai/build/lanelet2_examples/test_results/lanelet2_examples" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/chinchia120/autoware.ai/src/vendor/lanelet2/lanelet2_examples/test --with-xunit --xunit-file=/home/chinchia120/autoware.ai/build/lanelet2_examples/test_results/lanelet2_examples/nosetests-test.xml")
subdirs("gtest")
