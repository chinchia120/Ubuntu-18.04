// Generated by gencpp from file vector_map_msgs/DTLaneArray.msg
// DO NOT EDIT!


#ifndef VECTOR_MAP_MSGS_MESSAGE_DTLANEARRAY_H
#define VECTOR_MAP_MSGS_MESSAGE_DTLANEARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <vector_map_msgs/DTLane.h>

namespace vector_map_msgs
{
template <class ContainerAllocator>
struct DTLaneArray_
{
  typedef DTLaneArray_<ContainerAllocator> Type;

  DTLaneArray_()
    : header()
    , data()  {
    }
  DTLaneArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::vector_map_msgs::DTLane_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::vector_map_msgs::DTLane_<ContainerAllocator> >> _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> const> ConstPtr;

}; // struct DTLaneArray_

typedef ::vector_map_msgs::DTLaneArray_<std::allocator<void> > DTLaneArray;

typedef boost::shared_ptr< ::vector_map_msgs::DTLaneArray > DTLaneArrayPtr;
typedef boost::shared_ptr< ::vector_map_msgs::DTLaneArray const> DTLaneArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vector_map_msgs::DTLaneArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vector_map_msgs::DTLaneArray_<ContainerAllocator1> & lhs, const ::vector_map_msgs::DTLaneArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vector_map_msgs::DTLaneArray_<ContainerAllocator1> & lhs, const ::vector_map_msgs::DTLaneArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vector_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa0ba858e44999e2a9c1431fb5eb308e";
  }

  static const char* value(const ::vector_map_msgs::DTLaneArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaa0ba858e44999e2ULL;
  static const uint64_t static_value2 = 0xa9c1431fb5eb308eULL;
};

template<class ContainerAllocator>
struct DataType< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_msgs/DTLaneArray";
  }

  static const char* value(const ::vector_map_msgs::DTLaneArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"DTLane[] data\n"
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
"MSG: vector_map_msgs/DTLane\n"
"# Ver 1.00\n"
"int32 did\n"
"float64 dist\n"
"int32 pid\n"
"float64 dir\n"
"float64 apara\n"
"float64 r\n"
"float64 slope\n"
"float64 cant\n"
"float64 lw\n"
"float64 rw\n"
;
  }

  static const char* value(const ::vector_map_msgs::DTLaneArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DTLaneArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vector_map_msgs::DTLaneArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vector_map_msgs::DTLaneArray_<ContainerAllocator>& v)
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
      Printer< ::vector_map_msgs::DTLane_<ContainerAllocator> >::stream(s, indent + "    ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTOR_MAP_MSGS_MESSAGE_DTLANEARRAY_H