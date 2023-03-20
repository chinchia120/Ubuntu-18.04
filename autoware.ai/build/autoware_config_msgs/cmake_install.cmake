# Install script for directory: /home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/chinchia120/autoware.ai/install/autoware_config_msgs")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autoware_config_msgs/msg" TYPE FILE FILES
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigApproximateNDTMapping.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigCarDPM.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigCarFusion.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigCarKF.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigCompareMapFilter.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigDecisionMaker.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigDistanceFilter.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigICP.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigLaneRule.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigLaneSelect.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigLaneStop.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigLatticeVelocitySet.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigNDT.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigNDTMapping.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigNDTMappingOutput.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigPedestrianDPM.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigPedestrianFusion.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigPedestrianKF.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigPlannerSelector.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigPoints2Polygon.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigRandomFilter.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigRayGroundFilter.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigRcnn.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigRingFilter.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigRingGroundFilter.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigSSD.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigTwistFilter.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigVelocitySet.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigVoxelGridFilter.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigWaypointFollower.msg"
    "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/msg/ConfigWaypointReplanner.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autoware_config_msgs/cmake" TYPE FILE FILES "/home/chinchia120/autoware.ai/build/autoware_config_msgs/catkin_generated/installspace/autoware_config_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/chinchia120/autoware.ai/build/autoware_config_msgs/devel/include/autoware_config_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/chinchia120/autoware.ai/build/autoware_config_msgs/devel/share/roseus/ros/autoware_config_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/chinchia120/autoware.ai/build/autoware_config_msgs/devel/share/common-lisp/ros/autoware_config_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/chinchia120/autoware.ai/build/autoware_config_msgs/devel/share/gennodejs/ros/autoware_config_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/chinchia120/autoware.ai/build/autoware_config_msgs/devel/lib/python2.7/dist-packages/autoware_config_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/chinchia120/autoware.ai/build/autoware_config_msgs/devel/lib/python2.7/dist-packages/autoware_config_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/chinchia120/autoware.ai/build/autoware_config_msgs/catkin_generated/installspace/autoware_config_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autoware_config_msgs/cmake" TYPE FILE FILES "/home/chinchia120/autoware.ai/build/autoware_config_msgs/catkin_generated/installspace/autoware_config_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autoware_config_msgs/cmake" TYPE FILE FILES
    "/home/chinchia120/autoware.ai/build/autoware_config_msgs/catkin_generated/installspace/autoware_config_msgsConfig.cmake"
    "/home/chinchia120/autoware.ai/build/autoware_config_msgs/catkin_generated/installspace/autoware_config_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autoware_config_msgs" TYPE FILE FILES "/home/chinchia120/autoware.ai/src/autoware/messages/autoware_config_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/chinchia120/autoware.ai/build/autoware_config_msgs/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/chinchia120/autoware.ai/build/autoware_config_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
