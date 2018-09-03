// Generated by gencpp from file controller_manager_msgs/ListControllersRequest.msg
// DO NOT EDIT!


#ifndef CONTROLLER_MANAGER_MSGS_MESSAGE_LISTCONTROLLERSREQUEST_H
#define CONTROLLER_MANAGER_MSGS_MESSAGE_LISTCONTROLLERSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace controller_manager_msgs
{
template <class ContainerAllocator>
struct ListControllersRequest_
{
  typedef ListControllersRequest_<ContainerAllocator> Type;

  ListControllersRequest_()
    {
    }
  ListControllersRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ListControllersRequest_

typedef ::controller_manager_msgs::ListControllersRequest_<std::allocator<void> > ListControllersRequest;

typedef boost::shared_ptr< ::controller_manager_msgs::ListControllersRequest > ListControllersRequestPtr;
typedef boost::shared_ptr< ::controller_manager_msgs::ListControllersRequest const> ListControllersRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace controller_manager_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'controller_manager_msgs': ['/home/jsm/ros_ws/src/ros_control/controller_manager_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "controller_manager_msgs/ListControllersRequest";
  }

  static const char* value(const ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
";
  }

  static const char* value(const ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ListControllersRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::controller_manager_msgs::ListControllersRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // CONTROLLER_MANAGER_MSGS_MESSAGE_LISTCONTROLLERSREQUEST_H