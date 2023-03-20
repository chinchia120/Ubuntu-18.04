# -*- coding: utf-8 -*-
from __future__ import print_function

import os
import stat
import sys

# find the import for catkin's python package - either from source space or from an installed underlay
if os.path.exists(os.path.join('/opt/ros/melodic/share/catkin/cmake', 'catkinConfig.cmake.in')):
    sys.path.insert(0, os.path.join('/opt/ros/melodic/share/catkin/cmake', '..', 'python'))
try:
    from catkin.environment_cache import generate_environment_script
except ImportError:
    # search for catkin package in all workspaces and prepend to path
    for workspace in '/home/chinchia120/autoware.ai/install/lanelet2_extension;/home/chinchia120/autoware.ai/install/lanelet2_validation;/home/chinchia120/autoware.ai/install/lanelet2_routing;/home/chinchia120/autoware.ai/install/lanelet2_projection;/home/chinchia120/autoware.ai/install/lanelet2_traffic_rules;/home/chinchia120/autoware.ai/install/lanelet2_maps;/home/chinchia120/autoware.ai/install/lanelet2_io;/home/chinchia120/autoware.ai/install/vector_map;/home/chinchia120/autoware.ai/install/state_machine_lib;/home/chinchia120/autoware.ai/install/lanelet2_core;/home/chinchia120/autoware.ai/install/amathutils_lib;/home/chinchia120/autoware.ai/install/vector_map_msgs;/home/chinchia120/autoware.ai/install/autoware_msgs;/home/chinchia120/autoware.ai/install/autoware_lanelet2_msgs;/home/chinchia120/autoware.ai/install/autoware_config_msgs;/home/chinchia120/autoware.ai/install/autoware_build_flags;/home/chinchia120/catkin_ws/devel;/opt/ros/melodic'.split(';'):
        python_path = os.path.join(workspace, 'lib/python2.7/dist-packages')
        if os.path.isdir(os.path.join(python_path, 'catkin')):
            sys.path.insert(0, python_path)
            break
    from catkin.environment_cache import generate_environment_script

code = generate_environment_script('/home/chinchia120/autoware.ai/build/decision_maker/devel/env.sh')

output_filename = '/home/chinchia120/autoware.ai/build/decision_maker/catkin_generated/setup_cached.sh'
with open(output_filename, 'w') as f:
    # print('Generate script for cached setup "%s"' % output_filename)
    f.write('\n'.join(code))

mode = os.stat(output_filename).st_mode
os.chmod(output_filename, mode | stat.S_IXUSR)
