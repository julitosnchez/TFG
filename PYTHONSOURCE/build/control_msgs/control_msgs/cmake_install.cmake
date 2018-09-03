# Install script for directory: /home/jsm/ros_ws/src/control_msgs/control_msgs

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/jsm/ros_ws/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/control_msgs/action" TYPE FILE FILES
    "/home/jsm/ros_ws/src/control_msgs/control_msgs/action/FollowJointTrajectory.action"
    "/home/jsm/ros_ws/src/control_msgs/control_msgs/action/GripperCommand.action"
    "/home/jsm/ros_ws/src/control_msgs/control_msgs/action/JointTrajectory.action"
    "/home/jsm/ros_ws/src/control_msgs/control_msgs/action/PointHead.action"
    "/home/jsm/ros_ws/src/control_msgs/control_msgs/action/SingleJointPosition.action"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/control_msgs/msg" TYPE FILE FILES
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/FollowJointTrajectoryAction.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/FollowJointTrajectoryActionGoal.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/FollowJointTrajectoryActionResult.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/FollowJointTrajectoryActionFeedback.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/FollowJointTrajectoryGoal.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/FollowJointTrajectoryResult.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/FollowJointTrajectoryFeedback.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/control_msgs/msg" TYPE FILE FILES
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/GripperCommandAction.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/GripperCommandActionGoal.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/GripperCommandActionResult.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/GripperCommandActionFeedback.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/GripperCommandGoal.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/GripperCommandResult.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/GripperCommandFeedback.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/control_msgs/msg" TYPE FILE FILES
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/JointTrajectoryAction.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/JointTrajectoryActionGoal.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/JointTrajectoryActionResult.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/JointTrajectoryActionFeedback.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/JointTrajectoryGoal.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/JointTrajectoryResult.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/JointTrajectoryFeedback.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/control_msgs/msg" TYPE FILE FILES
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/PointHeadAction.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/PointHeadActionGoal.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/PointHeadActionResult.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/PointHeadActionFeedback.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/PointHeadGoal.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/PointHeadResult.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/PointHeadFeedback.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/control_msgs/msg" TYPE FILE FILES
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/SingleJointPositionAction.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/SingleJointPositionActionGoal.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/SingleJointPositionActionResult.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/SingleJointPositionActionFeedback.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/SingleJointPositionGoal.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/SingleJointPositionResult.msg"
    "/home/jsm/ros_ws/devel/share/control_msgs/msg/SingleJointPositionFeedback.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/control_msgs/msg" TYPE FILE FILES
    "/home/jsm/ros_ws/src/control_msgs/control_msgs/msg/GripperCommand.msg"
    "/home/jsm/ros_ws/src/control_msgs/control_msgs/msg/JointControllerState.msg"
    "/home/jsm/ros_ws/src/control_msgs/control_msgs/msg/JointTolerance.msg"
    "/home/jsm/ros_ws/src/control_msgs/control_msgs/msg/JointTrajectoryControllerState.msg"
    "/home/jsm/ros_ws/src/control_msgs/control_msgs/msg/PidState.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/control_msgs/srv" TYPE FILE FILES
    "/home/jsm/ros_ws/src/control_msgs/control_msgs/srv/QueryCalibrationState.srv"
    "/home/jsm/ros_ws/src/control_msgs/control_msgs/srv/QueryTrajectoryState.srv"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/control_msgs/cmake" TYPE FILE FILES "/home/jsm/ros_ws/build/control_msgs/control_msgs/catkin_generated/installspace/control_msgs-msg-paths.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/jsm/ros_ws/devel/include/control_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/jsm/ros_ws/devel/share/common-lisp/ros/control_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/jsm/ros_ws/devel/lib/python2.7/dist-packages/control_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/jsm/ros_ws/devel/lib/python2.7/dist-packages/control_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/jsm/ros_ws/build/control_msgs/control_msgs/catkin_generated/installspace/control_msgs.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/control_msgs/cmake" TYPE FILE FILES "/home/jsm/ros_ws/build/control_msgs/control_msgs/catkin_generated/installspace/control_msgs-msg-extras.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/control_msgs/cmake" TYPE FILE FILES
    "/home/jsm/ros_ws/build/control_msgs/control_msgs/catkin_generated/installspace/control_msgsConfig.cmake"
    "/home/jsm/ros_ws/build/control_msgs/control_msgs/catkin_generated/installspace/control_msgsConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/control_msgs" TYPE FILE FILES "/home/jsm/ros_ws/src/control_msgs/control_msgs/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

