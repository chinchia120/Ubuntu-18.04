# CMake generated Testfile for 
# Source directory: /home/chinchia120/autoware.ai/src/autoware/core_perception/gnss_localizer
# Build directory: /home/chinchia120/autoware.ai/build/gnss_localizer
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_gnss_localizer_rostest_test_nmea_test.test "/home/chinchia120/autoware.ai/build/gnss_localizer/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chinchia120/autoware.ai/build/gnss_localizer/test_results/gnss_localizer/rostest-test_nmea_test.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/chinchia120/autoware.ai/src/autoware/core_perception/gnss_localizer --package=gnss_localizer --results-filename test_nmea_test.xml --results-base-dir \"/home/chinchia120/autoware.ai/build/gnss_localizer/test_results\" /home/chinchia120/autoware.ai/src/autoware/core_perception/gnss_localizer/test/nmea_test.test ")
subdirs("gtest")
