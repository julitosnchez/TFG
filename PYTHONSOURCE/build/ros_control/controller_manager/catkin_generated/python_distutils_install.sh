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
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/jsm/ros_ws/src/ros_control/controller_manager"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/jsm/ros_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/jsm/ros_ws/install/lib/python2.7/dist-packages:/home/jsm/ros_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/jsm/ros_ws/build" \
    "/usr/bin/python" \
    "/home/jsm/ros_ws/src/ros_control/controller_manager/setup.py" \
    build --build-base "/home/jsm/ros_ws/build/ros_control/controller_manager" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/jsm/ros_ws/install" --install-scripts="/home/jsm/ros_ws/install/bin"
