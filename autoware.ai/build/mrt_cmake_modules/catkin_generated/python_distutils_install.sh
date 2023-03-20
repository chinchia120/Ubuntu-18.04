#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/chinchia120/autoware.ai/src/vendor/mrt_cmake_modules"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/chinchia120/autoware.ai/install/mrt_cmake_modules/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/chinchia120/autoware.ai/install/mrt_cmake_modules/lib/python2.7/dist-packages:/home/chinchia120/autoware.ai/build/mrt_cmake_modules/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/chinchia120/autoware.ai/build/mrt_cmake_modules" \
    "/usr/bin/python2" \
    "/home/chinchia120/autoware.ai/src/vendor/mrt_cmake_modules/setup.py" \
     \
    build --build-base "/home/chinchia120/autoware.ai/build/mrt_cmake_modules" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/chinchia120/autoware.ai/install/mrt_cmake_modules" --install-scripts="/home/chinchia120/autoware.ai/install/mrt_cmake_modules/bin"
