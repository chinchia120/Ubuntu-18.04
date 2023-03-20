#!/usr/bin/env python
# this file is taken and converted from a bash script from catkin to correctly install python modules
import os
import sys
import subprocess

python_interpreter = "/usr/bin/python2"
if not python_interpreter:
    python_interpreter = "python"

if "DESTDIR" in os.environ:
    if not os.path.isabs(os.environ["DESTDIR"]):
        print("DESTDIR argument must be absolute...\notherwise python's distutils will bork things.")
        sys.exit(1)
    destdir_arg = ["--root={}".format(os.environ["DESTDIR"])]
else:
    destdir_arg = []


def print_and_run(cmd, env):
    print(" ".join(cmd))
    subprocess.check_call(cmd, env=env)

os.chdir("/home/chinchia120/autoware.ai/build/lanelet2_python")
install_dir = "$DESTDIR/home/chinchia120/autoware.ai/install/lanelet2_python/lib/python2.7/dist-packages"
print("Creating {}".format(install_dir))
try:
    os.makedirs(install_dir)
except OSError:
    pass

env = os.environ.copy()
env["PYTHONPATH"] = "/home/chinchia120/autoware.ai/install/lanelet2_python/lib/python2.7/dist-packages:/home/chinchia120/autoware.ai/build/lanelet2_python/lib/python2.7/dist-packages:{}".format(env.get("PYTHONPATH", ""))
env["CATKIN_BINARY_DIR"] = "/home/chinchia120/autoware.ai/build/lanelet2_python"
setuptools_arg = "--install-layout=deb"
setuptools_arg = [setuptools_arg] if setuptools_arg else []
cmd = [python_interpreter, "/home/chinchia120/autoware.ai/build/lanelet2_python/setup.py", "build", "--build-base", "/home/chinchia120/autoware.ai/build/lanelet2_python", "install"] + destdir_arg + \
      setuptools_arg + ["--prefix=/home/chinchia120/autoware.ai/install/lanelet2_python", "--install-scripts=/home/chinchia120/autoware.ai/install/lanelet2_python/bin"]

print_and_run(cmd, env)
