// Generated by gencpp from file control_msgs/FollowJointTrajectoryFeedback.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_FOLLOWJOINTTRAJECTORYFEEDBACK_H
#define CONTROL_MSGS_MESSAGE_FOLLOWJOINTTRAJECTORYFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <trajectory_msgs/JointTrajectoryPoint.h>
#include <trajectory_msgs/JointTrajectoryPoint.h>
#include <trajectory_msgs/JointTrajectoryPoint.h>

namespace control_msgs
{
template <class ContainerAllocator>
struct FollowJointTrajectoryFeedback_
{
  typedef FollowJointTrajectoryFeedback_<ContainerAllocator> Type;

  FollowJointTrajectoryFeedback_()
    : header()
    , joint_names()
    , desired()
    , actual()
    , error()  {
    }
  FollowJointTrajectoryFeedback_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , joint_names(_alloc)
    , desired(_alloc)
    , actual(_alloc)
    , error(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef  ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator>  _desired_type;
  _desired_type desired;

   typedef  ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator>  _actual_type;
  _actual_type actual;

   typedef  ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator>  _error_type;
  _error_type error;




  typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct FollowJointTrajectoryFeedback_

typedef ::control_msgs::FollowJointTrajectoryFeedback_<std::allocator<void> > FollowJointTrajectoryFeedback;

typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryFeedback > FollowJointTrajectoryFeedbackPtr;
typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryFeedback const> FollowJointTrajectoryFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'control_msgs': ['/home/jsm/ros_ws/devel/share/control_msgs/msg', '/home/jsm/ros_ws/src/control_msgs/control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "10817c60c2486ef6b33e97dcd87f4474";
  }

  static const char* value(const ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x10817c60c2486ef6ULL;
  static const uint64_t static_value2 = 0xb33e97dcd87f4474ULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/FollowJointTrajectoryFeedback";
  }

  static const char* value(const ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
Header header\n\
string[] joint_names\n\
trajectory_msgs/JointTrajectoryPoint desired\n\
trajectory_msgs/JointTrajectoryPoint actual\n\
trajectory_msgs/JointTrajectoryPoint error\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: trajectory_msgs/JointTrajectoryPoint\n\
# Each trajectory point specifies either positions[, velocities[, accelerations]]\n\
# or positions[, effort] for the trajectory to be executed.\n\
# All specified values are in the same order as the joint names in JointTrajectory.msg\n\
\n\
float64[] positions\n\
float64[] velocities\n\
float64[] accelerations\n\
float64[] effort\n\
duration time_from_start\n\
";
  }

  static const char* value(const ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.joint_names);
      stream.next(m.desired);
      stream.next(m.actual);
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FollowJointTrajectoryFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::FollowJointTrajectoryFeedback_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "desired: ";
    s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.desired);
    s << indent << "actual: ";
    s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.actual);
    s << indent << "error: ";
    s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_FOLLOWJOINTTRAJECTORYFEEDBACK_H
