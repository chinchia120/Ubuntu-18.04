// Generated by gencpp from file custom_msgs/orientationEstimate.msg
// DO NOT EDIT!


#ifndef CUSTOM_MSGS_MESSAGE_ORIENTATIONESTIMATE_H
#define CUSTOM_MSGS_MESSAGE_ORIENTATIONESTIMATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace custom_msgs
{
template <class ContainerAllocator>
struct orientationEstimate_
{
  typedef orientationEstimate_<ContainerAllocator> Type;

  orientationEstimate_()
    : header()
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)  {
    }
  orientationEstimate_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _roll_type;
  _roll_type roll;

   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _yaw_type;
  _yaw_type yaw;





  typedef boost::shared_ptr< ::custom_msgs::orientationEstimate_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_msgs::orientationEstimate_<ContainerAllocator> const> ConstPtr;

}; // struct orientationEstimate_

typedef ::custom_msgs::orientationEstimate_<std::allocator<void> > orientationEstimate;

typedef boost::shared_ptr< ::custom_msgs::orientationEstimate > orientationEstimatePtr;
typedef boost::shared_ptr< ::custom_msgs::orientationEstimate const> orientationEstimateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_msgs::orientationEstimate_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_msgs::orientationEstimate_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::custom_msgs::orientationEstimate_<ContainerAllocator1> & lhs, const ::custom_msgs::orientationEstimate_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.roll == rhs.roll &&
    lhs.pitch == rhs.pitch &&
    lhs.yaw == rhs.yaw;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::custom_msgs::orientationEstimate_<ContainerAllocator1> & lhs, const ::custom_msgs::orientationEstimate_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace custom_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::orientationEstimate_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::orientationEstimate_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::orientationEstimate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::orientationEstimate_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::orientationEstimate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::orientationEstimate_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_msgs::orientationEstimate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8061e110314ddf08ca1dfbc48d314df8";
  }

  static const char* value(const ::custom_msgs::orientationEstimate_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8061e110314ddf08ULL;
  static const uint64_t static_value2 = 0xca1dfbc48d314df8ULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_msgs::orientationEstimate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_msgs/orientationEstimate";
  }

  static const char* value(const ::custom_msgs::orientationEstimate_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_msgs::orientationEstimate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is a message to hold filter data\n"
"# Supported for MTi Devices with FW 1.4 and above.\n"
"\n"
"Header header\n"
"\n"
"float64 roll\n"
"float64 pitch\n"
"float64 yaw\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::custom_msgs::orientationEstimate_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_msgs::orientationEstimate_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct orientationEstimate_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_msgs::orientationEstimate_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_msgs::orientationEstimate_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_MSGS_MESSAGE_ORIENTATIONESTIMATE_H
