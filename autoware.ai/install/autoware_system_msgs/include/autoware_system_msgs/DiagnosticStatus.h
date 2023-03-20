// Generated by gencpp from file autoware_system_msgs/DiagnosticStatus.msg
// DO NOT EDIT!


#ifndef AUTOWARE_SYSTEM_MSGS_MESSAGE_DIAGNOSTICSTATUS_H
#define AUTOWARE_SYSTEM_MSGS_MESSAGE_DIAGNOSTICSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autoware_system_msgs
{
template <class ContainerAllocator>
struct DiagnosticStatus_
{
  typedef DiagnosticStatus_<ContainerAllocator> Type;

  DiagnosticStatus_()
    : header()
    , key()
    , value()
    , description()
    , type(0)
    , level(0)  {
    }
  DiagnosticStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , key(_alloc)
    , value(_alloc)
    , description(_alloc)
    , type(0)
    , level(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _key_type;
  _key_type key;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _value_type;
  _value_type value;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _description_type;
  _description_type description;

   typedef uint8_t _type_type;
  _type_type type;

   typedef uint8_t _level_type;
  _level_type level;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNDEFINED)
  #undef UNDEFINED
#endif
#if defined(_WIN32) && defined(OUT_OF_RANGE)
  #undef OUT_OF_RANGE
#endif
#if defined(_WIN32) && defined(UNEXPECTED_RATE)
  #undef UNEXPECTED_RATE
#endif
#if defined(_WIN32) && defined(INVALID_VALUE)
  #undef INVALID_VALUE
#endif
#if defined(_WIN32) && defined(INTERNAL)
  #undef INTERNAL
#endif
#if defined(_WIN32) && defined(FUNCTIONAL)
  #undef FUNCTIONAL
#endif
#if defined(_WIN32) && defined(HARDWARE)
  #undef HARDWARE
#endif
#if defined(_WIN32) && defined(OK)
  #undef OK
#endif
#if defined(_WIN32) && defined(WARN)
  #undef WARN
#endif
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif
#if defined(_WIN32) && defined(FATAL)
  #undef FATAL
#endif

  enum {
    UNDEFINED = 0u,
    OUT_OF_RANGE = 1u,
    UNEXPECTED_RATE = 2u,
    INVALID_VALUE = 3u,
    INTERNAL = 4u,
    FUNCTIONAL = 100u,
    HARDWARE = 200u,
    OK = 1u,
    WARN = 2u,
    ERROR = 3u,
    FATAL = 4u,
  };


  typedef boost::shared_ptr< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> const> ConstPtr;

}; // struct DiagnosticStatus_

typedef ::autoware_system_msgs::DiagnosticStatus_<std::allocator<void> > DiagnosticStatus;

typedef boost::shared_ptr< ::autoware_system_msgs::DiagnosticStatus > DiagnosticStatusPtr;
typedef boost::shared_ptr< ::autoware_system_msgs::DiagnosticStatus const> DiagnosticStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator1> & lhs, const ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.key == rhs.key &&
    lhs.value == rhs.value &&
    lhs.description == rhs.description &&
    lhs.type == rhs.type &&
    lhs.level == rhs.level;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator1> & lhs, const ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_system_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b47803ee46ed9c93715ae4761992cf03";
  }

  static const char* value(const ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb47803ee46ed9c93ULL;
  static const uint64_t static_value2 = 0x715ae4761992cf03ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_system_msgs/DiagnosticStatus";
  }

  static const char* value(const ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"string key\n"
"\n"
"string value\n"
"\n"
"string description\n"
"\n"
"uint8 UNDEFINED = 0\n"
"\n"
"uint8 type\n"
"uint8 OUT_OF_RANGE = 1\n"
"uint8 UNEXPECTED_RATE = 2\n"
"uint8 INVALID_VALUE = 3\n"
"uint8 INTERNAL = 4\n"
"uint8 FUNCTIONAL = 100\n"
"uint8 HARDWARE = 200\n"
"\n"
"uint8 level\n"
"uint8 OK = 1\n"
"uint8 WARN = 2\n"
"uint8 ERROR = 3\n"
"uint8 FATAL = 4\n"
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

  static const char* value(const ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.key);
      stream.next(m.value);
      stream.next(m.description);
      stream.next(m.type);
      stream.next(m.level);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DiagnosticStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_system_msgs::DiagnosticStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "key: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.key);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.value);
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.description);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "level: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.level);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_SYSTEM_MSGS_MESSAGE_DIAGNOSTICSTATUS_H
