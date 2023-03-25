// Generated by gencpp from file autoware_msgs/ImageObjTracked.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_IMAGEOBJTRACKED_H
#define AUTOWARE_MSGS_MESSAGE_IMAGEOBJTRACKED_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <autoware_msgs/ImageRectRanged.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct ImageObjTracked_
{
  typedef ImageObjTracked_<ContainerAllocator> Type;

  ImageObjTracked_()
    : header()
    , type()
    , total_num(0)
    , obj_id()
    , rect_ranged()
    , real_data()
    , lifespan()  {
    }
  ImageObjTracked_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , type(_alloc)
    , total_num(0)
    , obj_id(_alloc)
    , rect_ranged(_alloc)
    , real_data(_alloc)
    , lifespan(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _type_type;
  _type_type type;

   typedef uint8_t _total_num_type;
  _total_num_type total_num;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _obj_id_type;
  _obj_id_type obj_id;

   typedef std::vector< ::autoware_msgs::ImageRectRanged_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::autoware_msgs::ImageRectRanged_<ContainerAllocator> >> _rect_ranged_type;
  _rect_ranged_type rect_ranged;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _real_data_type;
  _real_data_type real_data;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _lifespan_type;
  _lifespan_type lifespan;





  typedef boost::shared_ptr< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> const> ConstPtr;

}; // struct ImageObjTracked_

typedef ::autoware_msgs::ImageObjTracked_<std::allocator<void> > ImageObjTracked;

typedef boost::shared_ptr< ::autoware_msgs::ImageObjTracked > ImageObjTrackedPtr;
typedef boost::shared_ptr< ::autoware_msgs::ImageObjTracked const> ImageObjTrackedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::ImageObjTracked_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::ImageObjTracked_<ContainerAllocator1> & lhs, const ::autoware_msgs::ImageObjTracked_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.type == rhs.type &&
    lhs.total_num == rhs.total_num &&
    lhs.obj_id == rhs.obj_id &&
    lhs.rect_ranged == rhs.rect_ranged &&
    lhs.real_data == rhs.real_data &&
    lhs.lifespan == rhs.lifespan;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::ImageObjTracked_<ContainerAllocator1> & lhs, const ::autoware_msgs::ImageObjTracked_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f3751f77b67bc47fba29cbdd3ea3d56";
  }

  static const char* value(const ::autoware_msgs::ImageObjTracked_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f3751f77b67bc47ULL;
  static const uint64_t static_value2 = 0xfba29cbdd3ea3d56ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/ImageObjTracked";
  }

  static const char* value(const ::autoware_msgs::ImageObjTracked_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string type\n"
"uint8 total_num\n"
"int32[] obj_id\n"
"ImageRectRanged[] rect_ranged\n"
"int32[] real_data\n"
"int32[] lifespan\n"
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
"MSG: autoware_msgs/ImageRectRanged\n"
"ImageRect rect\n"
"float32 range\n"
"float32 min_height\n"
"float32 max_height\n"
"\n"
"================================================================================\n"
"MSG: autoware_msgs/ImageRect\n"
"int32 x\n"
"int32 y\n"
"int32 height\n"
"int32 width\n"
"float32 score\n"
;
  }

  static const char* value(const ::autoware_msgs::ImageObjTracked_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.type);
      stream.next(m.total_num);
      stream.next(m.obj_id);
      stream.next(m.rect_ranged);
      stream.next(m.real_data);
      stream.next(m.lifespan);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImageObjTracked_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::ImageObjTracked_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::ImageObjTracked_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.type);
    s << indent << "total_num: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.total_num);
    s << indent << "obj_id[]" << std::endl;
    for (size_t i = 0; i < v.obj_id.size(); ++i)
    {
      s << indent << "  obj_id[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.obj_id[i]);
    }
    s << indent << "rect_ranged[]" << std::endl;
    for (size_t i = 0; i < v.rect_ranged.size(); ++i)
    {
      s << indent << "  rect_ranged[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autoware_msgs::ImageRectRanged_<ContainerAllocator> >::stream(s, indent + "    ", v.rect_ranged[i]);
    }
    s << indent << "real_data[]" << std::endl;
    for (size_t i = 0; i < v.real_data.size(); ++i)
    {
      s << indent << "  real_data[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.real_data[i]);
    }
    s << indent << "lifespan[]" << std::endl;
    for (size_t i = 0; i < v.lifespan.size(); ++i)
    {
      s << indent << "  lifespan[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.lifespan[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_IMAGEOBJTRACKED_H