// Generated by gencpp from file baxter_core_msgs/CollisionDetectionState.msg
// DO NOT EDIT!


#ifndef BAXTER_CORE_MSGS_MESSAGE_COLLISIONDETECTIONSTATE_H
#define BAXTER_CORE_MSGS_MESSAGE_COLLISIONDETECTIONSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace baxter_core_msgs
{
template <class ContainerAllocator>
struct CollisionDetectionState_
{
  typedef CollisionDetectionState_<ContainerAllocator> Type;

  CollisionDetectionState_()
    : header()
    , collision_state(false)  {
    }
  CollisionDetectionState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , collision_state(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _collision_state_type;
  _collision_state_type collision_state;




  typedef boost::shared_ptr< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> const> ConstPtr;

}; // struct CollisionDetectionState_

typedef ::baxter_core_msgs::CollisionDetectionState_<std::allocator<void> > CollisionDetectionState;

typedef boost::shared_ptr< ::baxter_core_msgs::CollisionDetectionState > CollisionDetectionStatePtr;
typedef boost::shared_ptr< ::baxter_core_msgs::CollisionDetectionState const> CollisionDetectionStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'baxter_core_msgs': ['/home/jsm/ros_ws/src/baxter_common/baxter_core_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7bde38c182b4d08fdc0635b116f65d04";
  }

  static const char* value(const ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7bde38c182b4d08fULL;
  static const uint64_t static_value2 = 0xdc0635b116f65d04ULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_core_msgs/CollisionDetectionState";
  }

  static const char* value(const ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
bool collision_state\n\
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
";
  }

  static const char* value(const ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.collision_state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CollisionDetectionState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_core_msgs::CollisionDetectionState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "collision_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.collision_state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_CORE_MSGS_MESSAGE_COLLISIONDETECTIONSTATE_H
