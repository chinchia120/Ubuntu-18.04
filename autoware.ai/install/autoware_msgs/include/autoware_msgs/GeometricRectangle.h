// Generated by gencpp from file autoware_msgs/GeometricRectangle.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_GEOMETRICRECTANGLE_H
#define AUTOWARE_MSGS_MESSAGE_GEOMETRICRECTANGLE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace autoware_msgs
{
template <class ContainerAllocator>
struct GeometricRectangle_
{
  typedef GeometricRectangle_<ContainerAllocator> Type;

  GeometricRectangle_()
    : wl(0.0)
    , wr(0.0)
    , lf(0.0)
    , lb(0.0)  {
    }
  GeometricRectangle_(const ContainerAllocator& _alloc)
    : wl(0.0)
    , wr(0.0)
    , lf(0.0)
    , lb(0.0)  {
  (void)_alloc;
    }



   typedef float _wl_type;
  _wl_type wl;

   typedef float _wr_type;
  _wr_type wr;

   typedef float _lf_type;
  _lf_type lf;

   typedef float _lb_type;
  _lb_type lb;





  typedef boost::shared_ptr< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> const> ConstPtr;

}; // struct GeometricRectangle_

typedef ::autoware_msgs::GeometricRectangle_<std::allocator<void> > GeometricRectangle;

typedef boost::shared_ptr< ::autoware_msgs::GeometricRectangle > GeometricRectanglePtr;
typedef boost::shared_ptr< ::autoware_msgs::GeometricRectangle const> GeometricRectangleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::GeometricRectangle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_msgs::GeometricRectangle_<ContainerAllocator1> & lhs, const ::autoware_msgs::GeometricRectangle_<ContainerAllocator2> & rhs)
{
  return lhs.wl == rhs.wl &&
    lhs.wr == rhs.wr &&
    lhs.lf == rhs.lf &&
    lhs.lb == rhs.lb;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_msgs::GeometricRectangle_<ContainerAllocator1> & lhs, const ::autoware_msgs::GeometricRectangle_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b41f6cf3f78cac5a789ad3f178ef94dc";
  }

  static const char* value(const ::autoware_msgs::GeometricRectangle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb41f6cf3f78cac5aULL;
  static const uint64_t static_value2 = 0x789ad3f178ef94dcULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/GeometricRectangle";
  }

  static const char* value(const ::autoware_msgs::GeometricRectangle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 wl\n"
"float32 wr\n"
"float32 lf\n"
"float32 lb\n"
;
  }

  static const char* value(const ::autoware_msgs::GeometricRectangle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wl);
      stream.next(m.wr);
      stream.next(m.lf);
      stream.next(m.lb);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GeometricRectangle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::GeometricRectangle_<ContainerAllocator>& v)
  {
    s << indent << "wl: ";
    Printer<float>::stream(s, indent + "  ", v.wl);
    s << indent << "wr: ";
    Printer<float>::stream(s, indent + "  ", v.wr);
    s << indent << "lf: ";
    Printer<float>::stream(s, indent + "  ", v.lf);
    s << indent << "lb: ";
    Printer<float>::stream(s, indent + "  ", v.lb);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_GEOMETRICRECTANGLE_H
