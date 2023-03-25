# generated from catkin/cmake/template/pkgConfig.cmake.in

# append elements to a list and remove existing duplicates from the list
# copied from catkin/cmake/list_append_deduplicate.cmake to keep pkgConfig
# self contained
macro(_list_append_deduplicate listname)
  if(NOT "${ARGN}" STREQUAL "")
    if(${listname})
      list(REMOVE_ITEM ${listname} ${ARGN})
    endif()
    list(APPEND ${listname} ${ARGN})
  endif()
endmacro()

# append elements to a list if they are not already in the list
# copied from catkin/cmake/list_append_unique.cmake to keep pkgConfig
# self contained
macro(_list_append_unique listname)
  foreach(_item ${ARGN})
    list(FIND ${listname} ${_item} _index)
    if(_index EQUAL -1)
      list(APPEND ${listname} ${_item})
    endif()
  endforeach()
endmacro()

# pack a list of libraries with optional build configuration keywords
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_pack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  set(_argn ${ARGN})
  list(LENGTH _argn _count)
  set(_index 0)
  while(${_index} LESS ${_count})
    list(GET _argn ${_index} lib)
    if("${lib}" MATCHES "^(debug|optimized|general)$")
      math(EXPR _index "${_index} + 1")
      if(${_index} EQUAL ${_count})
        message(FATAL_ERROR "_pack_libraries_with_build_configuration() the list of libraries '${ARGN}' ends with '${lib}' which is a build configuration keyword and must be followed by a library")
      endif()
      list(GET _argn ${_index} library)
      list(APPEND ${VAR} "${lib}${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}${library}")
    else()
      list(APPEND ${VAR} "${lib}")
    endif()
    math(EXPR _index "${_index} + 1")
  endwhile()
endmacro()

# unpack a list of libraries with optional build configuration keyword prefixes
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_unpack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  foreach(lib ${ARGN})
    string(REGEX REPLACE "^(debug|optimized|general)${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}(.+)$" "\\1;\\2" lib "${lib}")
    list(APPEND ${VAR} "${lib}")
  endforeach()
endmacro()


if(costmap_generator_CONFIG_INCLUDED)
  return()
endif()
set(costmap_generator_CONFIG_INCLUDED TRUE)

# set variables for source/devel/install prefixes
if("TRUE" STREQUAL "TRUE")
  set(costmap_generator_SOURCE_PREFIX /home/chinchia120/autoware.ai/src/autoware/core_planning/costmap_generator)
  set(costmap_generator_DEVEL_PREFIX /home/chinchia120/autoware.ai/build/costmap_generator/devel)
  set(costmap_generator_INSTALL_PREFIX "")
  set(costmap_generator_PREFIX ${costmap_generator_DEVEL_PREFIX})
else()
  set(costmap_generator_SOURCE_PREFIX "")
  set(costmap_generator_DEVEL_PREFIX "")
  set(costmap_generator_INSTALL_PREFIX /home/chinchia120/autoware.ai/install/costmap_generator)
  set(costmap_generator_PREFIX ${costmap_generator_INSTALL_PREFIX})
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "WARNING: package 'costmap_generator' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message("${_msg}")
endif()

# flag project as catkin-based to distinguish if a find_package()-ed project is a catkin project
set(costmap_generator_FOUND_CATKIN_PROJECT TRUE)

if(NOT " " STREQUAL " ")
  set(costmap_generator_INCLUDE_DIRS "")
  set(_include_dirs "")
  if(NOT " " STREQUAL " ")
    set(_report "Check the issue tracker '' and consider creating a ticket if the problem has not been reported yet.")
  elseif(NOT " " STREQUAL " ")
    set(_report "Check the website '' for information and consider reporting the problem.")
  else()
    set(_report "Report the problem to the maintainer 'ando <cirpue49@yahoo.co.jp>' and request to fix the problem.")
  endif()
  foreach(idir ${_include_dirs})
    if(IS_ABSOLUTE ${idir} AND IS_DIRECTORY ${idir})
      set(include ${idir})
    elseif("${idir} " STREQUAL "include ")
      get_filename_component(include "${costmap_generator_DIR}/../../../include" ABSOLUTE)
      if(NOT IS_DIRECTORY ${include})
        message(FATAL_ERROR "Project 'costmap_generator' specifies '${idir}' as an include dir, which is not found.  It does not exist in '${include}'.  ${_report}")
      endif()
    else()
      message(FATAL_ERROR "Project 'costmap_generator' specifies '${idir}' as an include dir, which is not found.  It does neither exist as an absolute directory nor in '/home/chinchia120/autoware.ai/src/autoware/core_planning/costmap_generator/${idir}'.  ${_report}")
    endif()
    _list_append_unique(costmap_generator_INCLUDE_DIRS ${include})
  endforeach()
endif()

set(libraries "")
foreach(library ${libraries})
  # keep build configuration keywords, target names and absolute libraries as-is
  if("${library}" MATCHES "^(debug|optimized|general)$")
    list(APPEND costmap_generator_LIBRARIES ${library})
  elseif(${library} MATCHES "^-l")
    list(APPEND costmap_generator_LIBRARIES ${library})
  elseif(${library} MATCHES "^-")
    # This is a linker flag/option (like -pthread)
    # There's no standard variable for these, so create an interface library to hold it
    if(NOT costmap_generator_NUM_DUMMY_TARGETS)
      set(costmap_generator_NUM_DUMMY_TARGETS 0)
    endif()
    # Make sure the target name is unique
    set(interface_target_name "catkin::costmap_generator::wrapped-linker-option${costmap_generator_NUM_DUMMY_TARGETS}")
    while(TARGET "${interface_target_name}")
      math(EXPR costmap_generator_NUM_DUMMY_TARGETS "${costmap_generator_NUM_DUMMY_TARGETS}+1")
      set(interface_target_name "catkin::costmap_generator::wrapped-linker-option${costmap_generator_NUM_DUMMY_TARGETS}")
    endwhile()
    add_library("${interface_target_name}" INTERFACE IMPORTED)
    if("${CMAKE_VERSION}" VERSION_LESS "3.13.0")
      set_property(
        TARGET
        "${interface_target_name}"
        APPEND PROPERTY
        INTERFACE_LINK_LIBRARIES "${library}")
    else()
      target_link_options("${interface_target_name}" INTERFACE "${library}")
    endif()
    list(APPEND costmap_generator_LIBRARIES "${interface_target_name}")
  elseif(TARGET ${library})
    list(APPEND costmap_generator_LIBRARIES ${library})
  elseif(IS_ABSOLUTE ${library})
    list(APPEND costmap_generator_LIBRARIES ${library})
  else()
    set(lib_path "")
    set(lib "${library}-NOTFOUND")
    # since the path where the library is found is returned we have to iterate over the paths manually
    foreach(path /home/chinchia120/autoware.ai/build/costmap_generator/devel/lib;/home/chinchia120/autoware.ai/install/object_map/lib;/home/chinchia120/autoware.ai/install/lanelet2_extension/lib;/home/chinchia120/autoware.ai/install/lanelet2_validation/lib;/home/chinchia120/autoware.ai/install/lanelet2_routing/lib;/home/chinchia120/autoware.ai/install/lanelet2_projection/lib;/home/chinchia120/autoware.ai/install/lanelet2_traffic_rules/lib;/home/chinchia120/autoware.ai/install/lanelet2_maps/lib;/home/chinchia120/autoware.ai/install/lanelet2_io/lib;/home/chinchia120/autoware.ai/install/vector_map/lib;/home/chinchia120/autoware.ai/install/lanelet2_core/lib;/home/chinchia120/autoware.ai/install/amathutils_lib/lib;/home/chinchia120/autoware.ai/install/vector_map_msgs/lib;/home/chinchia120/autoware.ai/install/autoware_msgs/lib;/home/chinchia120/autoware.ai/install/autoware_lanelet2_msgs/lib;/home/chinchia120/autoware.ai/install/autoware_build_flags/lib;/home/chinchia120/catkin_ws/devel/lib;/opt/ros/melodic/lib)
      find_library(lib ${library}
        PATHS ${path}
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH)
      if(lib)
        set(lib_path ${path})
        break()
      endif()
    endforeach()
    if(lib)
      _list_append_unique(costmap_generator_LIBRARY_DIRS ${lib_path})
      list(APPEND costmap_generator_LIBRARIES ${lib})
    else()
      # as a fall back for non-catkin libraries try to search globally
      find_library(lib ${library})
      if(NOT lib)
        message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'costmap_generator'?  Did you find_package() it before the subdirectory containing its code is included?")
      endif()
      list(APPEND costmap_generator_LIBRARIES ${lib})
    endif()
  endif()
endforeach()

set(costmap_generator_EXPORTED_TARGETS "")
# create dummy targets for exported code generation targets to make life of users easier
foreach(t ${costmap_generator_EXPORTED_TARGETS})
  if(NOT TARGET ${t})
    add_custom_target(${t})
  endif()
endforeach()

set(depends "")
foreach(depend ${depends})
  string(REPLACE " " ";" depend_list ${depend})
  # the package name of the dependency must be kept in a unique variable so that it is not overwritten in recursive calls
  list(GET depend_list 0 costmap_generator_dep)
  list(LENGTH depend_list count)
  if(${count} EQUAL 1)
    # simple dependencies must only be find_package()-ed once
    if(NOT ${costmap_generator_dep}_FOUND)
      find_package(${costmap_generator_dep} REQUIRED NO_MODULE)
    endif()
  else()
    # dependencies with components must be find_package()-ed again
    list(REMOVE_AT depend_list 0)
    find_package(${costmap_generator_dep} REQUIRED NO_MODULE ${depend_list})
  endif()
  _list_append_unique(costmap_generator_INCLUDE_DIRS ${${costmap_generator_dep}_INCLUDE_DIRS})

  # merge build configuration keywords with library names to correctly deduplicate
  _pack_libraries_with_build_configuration(costmap_generator_LIBRARIES ${costmap_generator_LIBRARIES})
  _pack_libraries_with_build_configuration(_libraries ${${costmap_generator_dep}_LIBRARIES})
  _list_append_deduplicate(costmap_generator_LIBRARIES ${_libraries})
  # undo build configuration keyword merging after deduplication
  _unpack_libraries_with_build_configuration(costmap_generator_LIBRARIES ${costmap_generator_LIBRARIES})

  _list_append_unique(costmap_generator_LIBRARY_DIRS ${${costmap_generator_dep}_LIBRARY_DIRS})
  list(APPEND costmap_generator_EXPORTED_TARGETS ${${costmap_generator_dep}_EXPORTED_TARGETS})
endforeach()

set(pkg_cfg_extras "")
foreach(extra ${pkg_cfg_extras})
  if(NOT IS_ABSOLUTE ${extra})
    set(extra ${costmap_generator_DIR}/${extra})
  endif()
  include(${extra})
endforeach()