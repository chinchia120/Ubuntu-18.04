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
    for workspace in '/home/chinchia120/autoware.ai/install/autoware_health_checker;/home/chinchia120/autoware.ai/install/ros_observer;/home/chinchia120/autoware.ai/install/autoware_system_msgs;/home/chinchia120/autoware.ai/install/autoware_msgs;/home/chinchia120/autoware.ai/install/autoware_config_msgs;/home/chinchia120/autoware.ai/install/autoware_build_flags;/home/chinchia120/catkin_ws/devel;/opt/ros/melodic'.split(';'):
        python_path = os.path.join(workspace, 'lib/python2.7/dist-packages')
        if os.path.isdir(os.path.join(python_path, 'catkin')):
            sys.path.insert(0, python_path)
            break
    from catkin.environment_cache import generate_environment_script

code = generate_environment_script('/home/chinchia120/autoware.ai/build/twist_filter/devel/env.sh')

output_filename = '/home/chinchia120/autoware.ai/build/twist_filter/catkin_generated/setup_cached.sh'
with open(output_filename, 'w') as f:
    # print('Generate script for cached setup "%s"' % output_filename)
    f.write('\n'.join(code))

mode = os.stat(output_filename).st_mode
os.chmod(output_filename, mode | stat.S_IXUSR)