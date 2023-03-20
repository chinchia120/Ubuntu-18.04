// Generated by gencpp from file autoware_msgs/Centroids.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_CENTROIDS_H
#define AUTOWARE_MSGS_MESSAGE_CENTROIDS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct Centroids_
{
  typedef Centroids_<ContainerAllocator> Type;

  Centroids_()
    : header()
    , points()  {
    }
  Centroids_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , points(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Point_<ContainerAllocator> >> _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::autoware_msgs::Centroids_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::Centroids_<ContainerAllocator> const> ConstPtr;

}; // struct Centroids_

typedef ::autoware_msgs::Centroids_<std::allocator<void> > Centroids;

typedef boost::shared_ptr< ::autoware_msgs::Centroids > CentroidsPtr;
typedef boost::shared_ptr< ::autoware_msgs::Centroids const> CentroidsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::Centroids_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::Centroids_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::Centroids_<ContainerAllocator1> & lhs, const ::autoware_msgs::Centroids_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.points == rhs.points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::Centroids_<ContainerAllocator1> & lhs, const ::autoware_msgs::Centroids_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::Centroids_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::Centroids_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::Centroids_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::Centroids_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::Centroids_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::Centroids_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::Centroids_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2199cac4695ce1fc0f346db535dda30d";
  }

  static const char* value(const ::autoware_msgs::Centroids_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2199cac4695ce1fcULL;
  static const uint64_t static_value2 = 0x0f346db535dda30dULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::Centroids_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/Centroids";
  }

  static const char* value(const ::autoware_msgs::Centroids_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::Centroids_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"geometry_msgs/Point[] points\n"
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
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::autoware_msgs::Centroids_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::Centroids_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Centroids_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::Centroids_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::Centroids_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_CENTROIDS_H
