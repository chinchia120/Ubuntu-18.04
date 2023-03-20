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

echo_and_run cd "/home/chinchia120/autoware.ai/src/drivers/awf_drivers/javad_navsat_driver"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/chinchia120/autoware.ai/install/javad_navsat_driver/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/chinchia120/autoware.ai/install/javad_navsat_driver/lib/python2.7/dist-packages:/home/chinchia120/autoware.ai/build/javad_navsat_driver/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/chinchia120/autoware.ai/build/javad_navsat_driver" \
    "/usr/bin/python2" \
    "/home/chinchia120/autoware.ai/src/drivers/awf_drivers/javad_navsat_driver/setup.py" \
     \
    build --build-base "/home/chinchia120/autoware.ai/build/javad_navsat_driver" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/chinchia120/autoware.ai/install/javad_navsat_driver" --install-scripts="/home/chinchia120/autoware.ai/install/javad_navsat_driver/bin"
