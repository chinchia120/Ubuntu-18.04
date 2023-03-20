// Generated by gencpp from file vector_map_server/GetFenceRequest.msg
// DO NOT EDIT!


#ifndef VECTOR_MAP_SERVER_MESSAGE_GETFENCEREQUEST_H
#define VECTOR_MAP_SERVER_MESSAGE_GETFENCEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>
#include <autoware_msgs/Lane.h>

namespace vector_map_server
{
template <class ContainerAllocator>
struct GetFenceRequest_
{
  typedef GetFenceRequest_<ContainerAllocator> Type;

  GetFenceRequest_()
    : pose()
    , waypoints()  {
    }
  GetFenceRequest_(const ContainerAllocator& _alloc)
    : pose(_alloc)
    , waypoints(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef  ::autoware_msgs::Lane_<ContainerAllocator>  _waypoints_type;
  _waypoints_type waypoints;





  typedef boost::shared_ptr< ::vector_map_server::GetFenceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vector_map_server::GetFenceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetFenceRequest_

typedef ::vector_map_server::GetFenceRequest_<std::allocator<void> > GetFenceRequest;

typedef boost::shared_ptr< ::vector_map_server::GetFenceRequest > GetFenceRequestPtr;
typedef boost::shared_ptr< ::vector_map_server::GetFenceRequest const> GetFenceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vector_map_server::GetFenceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vector_map_server::GetFenceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vector_map_server::GetFenceRequest_<ContainerAllocator1> & lhs, const ::vector_map_server::GetFenceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.pose == rhs.pose &&
    lhs.waypoints == rhs.waypoints;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vector_map_server::GetFenceRequest_<ContainerAllocator1> & lhs, const ::vector_map_server::GetFenceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vector_map_server

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_server::GetFenceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vector_map_server::GetFenceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_server::GetFenceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vector_map_server::GetFenceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_server::GetFenceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vector_map_server::GetFenceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vector_map_server::GetFenceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d1f64bdec952e41012fc8c13f57fef77";
  }

  static const char* value(const ::vector_map_server::GetFenceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd1f64bdec952e410ULL;
  static const uint64_t static_value2 = 0x12fc8c13f57fef77ULL;
};

template<class ContainerAllocator>
struct DataType< ::vector_map_server::GetFenceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vector_map_server/GetFenceRequest";
  }

  static const char* value(const ::vector_map_server::GetFenceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vector_map_server::GetFenceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/PoseStamped pose\n"
"autoware_msgs/Lane waypoints\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
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
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: autoware_msgs/Lane\n"
"Header header\n"
"int32 increment\n"
"int32 lane_id\n"
"Waypoint[] waypoints\n"
"\n"
"uint32 lane_index\n"
"float32 cost\n"
"float32 closest_object_distance\n"
"float32 closest_object_velocity\n"
"bool is_blocked\n"
"\n"
"================================================================================\n"
"MSG: autoware_msgs/Waypoint\n"
"# global id\n"
"int32 gid \n"
"# local id\n"
"int32 lid\n"
"geometry_msgs/PoseStamped pose\n"
"geometry_msgs/TwistStamped twist\n"
"DTLane dtlane\n"
"int32 change_flag\n"
"WaypointState wpstate\n"
"\n"
"uint32 lane_id\n"
"uint32 left_lane_id\n"
"uint32 right_lane_id\n"
"uint32 stop_line_id\n"
"float32 cost\n"
"float32 time_cost\n"
"\n"
"# Lane Direction\n"
"# FORWARD        = 0\n"
"# FORWARD_LEFT       = 1\n"
"# FORWARD_RIGHT      = 2\n"
"# BACKWARD        = 3 \n"
"# BACKWARD_LEFT      = 4\n"
"# BACKWARD_RIGHT    = 5\n"
"# STANDSTILL       = 6\n"
"uint32 direction\n"
"================================================================================\n"
"MSG: geometry_msgs/TwistStamped\n"
"# A twist with reference coordinate frame and timestamp\n"
"Header header\n"
"Twist twist\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: autoware_msgs/DTLane\n"
"float64 dist\n"
"float64 dir\n"
"float64 apara\n"
"float64 r\n"
"float64 slope\n"
"float64 cant\n"
"float64 lw\n"
"float64 rw\n"
"\n"
"================================================================================\n"
"MSG: autoware_msgs/WaypointState\n"
"int32 aid\n"
"uint8 NULLSTATE=0\n"
"\n"
"# lanechange\n"
"uint8 lanechange_state\n"
"\n"
"# bilinker\n"
"uint8 steering_state\n"
"uint8 STR_LEFT=1\n"
"uint8 STR_RIGHT=2\n"
"uint8 STR_STRAIGHT=3\n"
"uint8 STR_BACK=4\n"
"\n"
"uint8 accel_state\n"
"\n"
"uint8 stop_state\n"
"# 1 is stopline, 2 is stop which can only be released manually.\n"
"uint8 TYPE_STOPLINE=1\n"
"uint8 TYPE_STOP=2\n"
"\n"
"uint8 event_state\n"
"uint8 TYPE_EVENT_NULL = 0\n"
"uint8 TYPE_EVENT_GOAL = 1\n"
"uint8 TYPE_EVENT_MIDDLE_GOAL = 2\n"
"uint8 TYPE_EVENT_POSITION_STOP = 3\n"
"uint8 TYPE_EVENT_BUS_STOP = 4\n"
"uint8 TYPE_EVENT_PARKING = 5\n"
;
  }

  static const char* value(const ::vector_map_server::GetFenceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vector_map_server::GetFenceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
      stream.next(m.waypoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetFenceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vector_map_server::GetFenceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vector_map_server::GetFenceRequest_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "waypoints: ";
    s << std::endl;
    Printer< ::autoware_msgs::Lane_<ContainerAllocator> >::stream(s, indent + "  ", v.waypoints);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTOR_MAP_SERVER_MESSAGE_GETFENCEREQUEST_H
