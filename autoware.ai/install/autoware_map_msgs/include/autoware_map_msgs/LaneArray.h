// Generated by gencpp from file autoware_map_msgs/LaneArray.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MAP_MSGS_MESSAGE_LANEARRAY_H
#define AUTOWARE_MAP_MSGS_MESSAGE_LANEARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <autoware_map_msgs/Lane.h>

namespace autoware_map_msgs
{
template <class ContainerAllocator>
struct LaneArray_
{
  typedef LaneArray_<ContainerAllocator> Type;

  LaneArray_()
    : header()
    , data()  {
    }
  LaneArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::autoware_map_msgs::Lane_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::autoware_map_msgs::Lane_<ContainerAllocator> >> _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::autoware_map_msgs::LaneArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_map_msgs::LaneArray_<ContainerAllocator> const> ConstPtr;

}; // struct LaneArray_

typedef ::autoware_map_msgs::LaneArray_<std::allocator<void> > LaneArray;

typedef boost::shared_ptr< ::autoware_map_msgs::LaneArray > LaneArrayPtr;
typedef boost::shared_ptr< ::autoware_map_msgs::LaneArray const> LaneArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_map_msgs::LaneArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_map_msgs::LaneArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_map_msgs::LaneArray_<ContainerAllocator1> & lhs, const ::autoware_map_msgs::LaneArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_map_msgs::LaneArray_<ContainerAllocator1> & lhs, const ::autoware_map_msgs::LaneArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_map_msgs::LaneArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_map_msgs::LaneArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_map_msgs::LaneArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_map_msgs::LaneArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_map_msgs::LaneArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_map_msgs::LaneArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_map_msgs::LaneArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1849af6a05682cff6c714d459a3e51f9";
  }

  static const char* value(const ::autoware_map_msgs::LaneArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1849af6a05682cffULL;
  static const uint64_t static_value2 = 0x6c714d459a3e51f9ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_map_msgs::LaneArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_map_msgs/LaneArray";
  }

  static const char* value(const ::autoware_map_msgs::LaneArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_map_msgs::LaneArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This consists of multiple lanes in a map with reference coordinate frame. \n"
"\n"
"Header header\n"
"Lane[] data\n"
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
"\n"
"================================================================================\n"
"MSG: autoware_map_msgs/Lane\n"
"# This represents a lane in a map.\n"
"\n"
"# Id of this Lane object. Must be unique among all lane objects.\n"
"int32 lane_id\n"
"\n"
"# Id of the first waypoint that belongs to this lane\n"
"int32 start_waypoint_id\n"
"\n"
"# Id of the last waypoint that belongs to this lane\n"
"int32 end_waypoint_id\n"
"\n"
"# This describes how many lanes there are in left side of this lane.\n"
"# E.g. If there are 2 lanes on the left side, then lane_number will be 2. \n"
"# If the road is single lane, then this will be 0. \n"
"# This will be always 0 in intersection. \n"
"int32 lane_number\n"
"\n"
"# Total number of lanes present in road. \n"
"int32 num_of_lanes\n"
"\n"
"# Speed limit of this lane in [km/h]\n"
"float64 speed_limit\n"
"\n"
"# Length of this lane in [m]\n"
"# i.e. accumulated length from start_waypoint to end_waypoint of this lane\n"
"float64 length\n"
"\n"
"# Maximum width of vehicle that can drive this lane in [m]\n"
"float64 width_limit\n"
"\n"
"# Maximum height of vehicle that can drive this lane in [m]. \n"
"float64 height_limit\n"
"\n"
"# Maximum weight of vehicle that can drive this lane in [kg]. \n"
"float64 weight_limit\n"
;
  }

  static const char* value(const ::autoware_map_msgs::LaneArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_map_msgs::LaneArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LaneArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_map_msgs::LaneArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_map_msgs::LaneArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autoware_map_msgs::Lane_<ContainerAllocator> >::stream(s, indent + "    ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MAP_MSGS_MESSAGE_LANEARRAY_H
