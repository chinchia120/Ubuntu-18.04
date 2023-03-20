// Generated by gencpp from file vector_map_msgs/WayArea.msg
// DO NOT EDIT!


#ifndef VECTOR_MAP_MSGS_MESSAGE_WAYAREA_H
#define VECTOR_MAP_MSGS_MESSAGE_WAYAREA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vector_map_msgs
{
template <class ContainerAllocator>
struct WayArea_
{
  typedef WayArea_<ContainerAllocator> Type;

  WayArea_()
    : waid(0)
    , aid(0)  {
    }
  WayArea_(const ContainerAllocator& _alloc)
    : waid(0)
    , aid(0)  {
  (void)_alloc;
    }



   typedef int32_t _waid_type;
  _waid_type waid;

   typedef int32_t _aid_type;
  _aid_type aid;





  typedef boost::shared_ptr< ::vector_map_msgs::WayArea_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vector_map_msgs::WayArea_<ContainerAllocator> const> ConstPtr;

}; // struct WayArea_

typedef ::vector_map_msgs::WayArea_<std::allocator<void> > WayArea;

typedef boost::shared_ptr< ::vector_map_msgs::WayArea > WayAreaPtr;
typedef boost::shared_ptr< ::vector_map_msgs::WayArea const> WayAreaConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vector_map_msgs::WayArea_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vector_map_msgs::WayArea_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vector_map_msgs::WayArea_<ContainerAllocator1> & lhs, const ::vector_map_msgs::WayArea_<ContainerAllocator2> & rhs)
{
  return lhs.waid == rhs.waid &&
    lhs.aid == rhs.aid;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vector_map_msgs::WayArea_<ContainerAllocator1> & lhs, const ::vector_map_msgs::WayArea_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vector_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::WayArea_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_msgs::WayArea_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::WayArea_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_msgs::WayArea_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::WayArea_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_msgs::WayArea_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vector_map_msgs::WayArea_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac793f4ec70fe037c00e585b4376d809";
  }

  static const char* value(const ::vector_map_msgs::WayArea_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac793f4ec70fe037ULL;
  static const uint64_t static_value2 = 0xc00e585b4376d809ULL;
};

template<class ContainerAllocator>
struct DataType< ::vector_map_msgs::WayArea_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_msgs/WayArea";
  }

  static const char* value(const ::vector_map_msgs::WayArea_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vector_map_msgs::WayArea_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Ver 1.20\n"
"int32 waid\n"
"int32 aid\n"
;
  }

  static const char* value(const ::vector_map_msgs::WayArea_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vector_map_msgs::WayArea_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.waid);
      stream.next(m.aid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WayArea_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vector_map_msgs::WayArea_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vector_map_msgs::WayArea_<ContainerAllocator>& v)
  {
    s << indent << "waid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.waid);
    s << indent << "aid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.aid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTOR_MAP_MSGS_MESSAGE_WAYAREA_H
