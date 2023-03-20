# Install script for directory: /home/chinchia120/autoware.ai/src/vendor/lanelet2/lanelet2_examples

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/chinchia120/autoware.ai/install/lanelet2_examples")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/chinchia120/autoware.ai/build/lanelet2_examples/catkin_generated/installspace/lanelet2_examples.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lanelet2_examples/cmake" TYPE FILE FILES
    "/home/chinchia120/autoware.ai/build/lanelet2_examples/catkin_generated/installspace/lanelet2_examplesConfig.cmake"
    "/home/chinchia120/autoware.ai/build/lanelet2_examples/catkin_generated/installspace/lanelet2_examplesConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lanelet2_examples" TYPE FILE FILES "/home/chinchia120/autoware.ai/src/vendor/lanelet2/lanelet2_examples/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/01_dealing_with_lanelet_primitives" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/01_dealing_with_lanelet_primitives")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/01_dealing_with_lanelet_primitives"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples" TYPE EXECUTABLE FILES "/home/chinchia120/autoware.ai/build/lanelet2_examples/devel/lib/lanelet2_examples/01_dealing_with_lanelet_primitives")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/01_dealing_with_lanelet_primitives" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/01_dealing_with_lanelet_primitives")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/01_dealing_with_lanelet_primitives"
         OLD_RPATH "/home/chinchia120/autoware.ai/install/lanelet2_routing/lib:/home/chinchia120/autoware.ai/install/lanelet2_projection/lib:/home/chinchia120/autoware.ai/install/lanelet2_io/lib:/home/chinchia120/autoware.ai/install/lanelet2_traffic_rules/lib:/home/chinchia120/autoware.ai/install/lanelet2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/01_dealing_with_lanelet_primitives")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/02_regulatory_elements" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/02_regulatory_elements")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/02_regulatory_elements"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples" TYPE EXECUTABLE FILES "/home/chinchia120/autoware.ai/build/lanelet2_examples/devel/lib/lanelet2_examples/02_regulatory_elements")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/02_regulatory_elements" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/02_regulatory_elements")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/02_regulatory_elements"
         OLD_RPATH "/home/chinchia120/autoware.ai/install/lanelet2_routing/lib:/home/chinchia120/autoware.ai/install/lanelet2_projection/lib:/home/chinchia120/autoware.ai/install/lanelet2_io/lib:/home/chinchia120/autoware.ai/install/lanelet2_traffic_rules/lib:/home/chinchia120/autoware.ai/install/lanelet2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/02_regulatory_elements")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/03_lanelet_map" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/03_lanelet_map")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/03_lanelet_map"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples" TYPE EXECUTABLE FILES "/home/chinchia120/autoware.ai/build/lanelet2_examples/devel/lib/lanelet2_examples/03_lanelet_map")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/03_lanelet_map" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/03_lanelet_map")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/03_lanelet_map"
         OLD_RPATH "/home/chinchia120/autoware.ai/install/lanelet2_routing/lib:/home/chinchia120/autoware.ai/install/lanelet2_projection/lib:/home/chinchia120/autoware.ai/install/lanelet2_io/lib:/home/chinchia120/autoware.ai/install/lanelet2_traffic_rules/lib:/home/chinchia120/autoware.ai/install/lanelet2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/03_lanelet_map")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/04_reading_and_writing" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/04_reading_and_writing")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/04_reading_and_writing"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples" TYPE EXECUTABLE FILES "/home/chinchia120/autoware.ai/build/lanelet2_examples/devel/lib/lanelet2_examples/04_reading_and_writing")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/04_reading_and_writing" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/04_reading_and_writing")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/04_reading_and_writing"
         OLD_RPATH "/home/chinchia120/autoware.ai/install/lanelet2_routing/lib:/home/chinchia120/autoware.ai/install/lanelet2_projection/lib:/home/chinchia120/autoware.ai/install/lanelet2_io/lib:/home/chinchia120/autoware.ai/install/lanelet2_traffic_rules/lib:/home/chinchia120/autoware.ai/install/lanelet2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/04_reading_and_writing")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/05_traffic_rules" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/05_traffic_rules")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/05_traffic_rules"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples" TYPE EXECUTABLE FILES "/home/chinchia120/autoware.ai/build/lanelet2_examples/devel/lib/lanelet2_examples/05_traffic_rules")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/05_traffic_rules" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/05_traffic_rules")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/05_traffic_rules"
         OLD_RPATH "/home/chinchia120/autoware.ai/install/lanelet2_routing/lib:/home/chinchia120/autoware.ai/install/lanelet2_projection/lib:/home/chinchia120/autoware.ai/install/lanelet2_io/lib:/home/chinchia120/autoware.ai/install/lanelet2_traffic_rules/lib:/home/chinchia120/autoware.ai/install/lanelet2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/05_traffic_rules")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/06_routing" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/06_routing")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/06_routing"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples" TYPE EXECUTABLE FILES "/home/chinchia120/autoware.ai/build/lanelet2_examples/devel/lib/lanelet2_examples/06_routing")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/06_routing" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/06_routing")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/06_routing"
         OLD_RPATH "/home/chinchia120/autoware.ai/install/lanelet2_routing/lib:/home/chinchia120/autoware.ai/install/lanelet2_projection/lib:/home/chinchia120/autoware.ai/install/lanelet2_io/lib:/home/chinchia120/autoware.ai/install/lanelet2_traffic_rules/lib:/home/chinchia120/autoware.ai/install/lanelet2_core/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples/06_routing")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/lanelet2_examples" TYPE PROGRAM FILES "/home/chinchia120/autoware.ai/build/lanelet2_examples/catkin_generated/installspace/tutorial.py")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/chinchia120/autoware.ai/build/lanelet2_examples/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/chinchia120/autoware.ai/build/lanelet2_examples/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
