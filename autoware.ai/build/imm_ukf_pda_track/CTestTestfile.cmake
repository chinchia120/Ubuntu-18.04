# CMake generated Testfile for 
# Source directory: /home/point001/autoware.ai/src/autoware/core_perception/lidar_imm_ukf_pda_track
# Build directory: /home/point001/autoware.ai/build/imm_ukf_pda_track
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_imm_ukf_pda_track_roslint_package "/home/point001/autoware.ai/build/imm_ukf_pda_track/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/point001/autoware.ai/build/imm_ukf_pda_track/test_results/imm_ukf_pda_track/roslint-imm_ukf_pda_track.xml" "--working-dir" "/home/point001/autoware.ai/build/imm_ukf_pda_track" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/point001/autoware.ai/build/imm_ukf_pda_track/test_results/imm_ukf_pda_track/roslint-imm_ukf_pda_track.xml make roslint_imm_ukf_pda_track")
subdirs("gtest")
