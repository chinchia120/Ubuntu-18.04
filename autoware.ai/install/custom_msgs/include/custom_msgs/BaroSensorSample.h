// Generated by gencpp from file custom_msgs/BaroSensorSample.msg
// DO NOT EDIT!


#ifndef CUSTOM_MSGS_MESSAGE_BAROSENSORSAMPLE_H
#define CUSTOM_MSGS_MESSAGE_BAROSENSORSAMPLE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace custom_msgs
{
template <class ContainerAllocator>
struct BaroSensorSample_
{
  typedef BaroSensorSample_<ContainerAllocator> Type;

  BaroSensorSample_()
    : height(0.0)  {
    }
  BaroSensorSample_(const ContainerAllocator& _alloc)
    : height(0.0)  {
  (void)_alloc;
    }



   typedef double _height_type;
  _height_type height;





  typedef boost::shared_ptr< ::custom_msgs::BaroSensorSample_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_msgs::BaroSensorSample_<ContainerAllocator> const> ConstPtr;

}; // struct BaroSensorSample_

typedef ::custom_msgs::BaroSensorSample_<std::allocator<void> > BaroSensorSample;

typedef boost::shared_ptr< ::custom_msgs::BaroSensorSample > BaroSensorSamplePtr;
typedef boost::shared_ptr< ::custom_msgs::BaroSensorSample const> BaroSensorSampleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_msgs::BaroSensorSample_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_msgs::BaroSensorSample_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::custom_msgs::BaroSensorSample_<ContainerAllocator1> & lhs, const ::custom_msgs::BaroSensorSample_<ContainerAllocator2> & rhs)
{
  return lhs.height == rhs.height;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::custom_msgs::BaroSensorSample_<ContainerAllocator1> & lhs, const ::custom_msgs::BaroSensorSample_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace custom_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::BaroSensorSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::BaroSensorSample_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::BaroSensorSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::BaroSensorSample_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::BaroSensorSample_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::BaroSensorSample_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_msgs::BaroSensorSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "689e59833d9760375d61a82ed395adaf";
  }

  static const char* value(const ::custom_msgs::BaroSensorSample_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x689e59833d976037ULL;
  static const uint64_t static_value2 = 0x5d61a82ed395adafULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_msgs::BaroSensorSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_msgs/BaroSensorSample";
  }

  static const char* value(const ::custom_msgs::BaroSensorSample_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_msgs::BaroSensorSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is a message to hold data from a baro \n"
"\n"
"float64 height\n"
"\n"
"\n"
"\n"
;
  }

  static const char* value(const ::custom_msgs::BaroSensorSample_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_msgs::BaroSensorSample_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BaroSensorSample_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_msgs::BaroSensorSample_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_msgs::BaroSensorSample_<ContainerAllocator>& v)
  {
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_MSGS_MESSAGE_BAROSENSORSAMPLE_H
