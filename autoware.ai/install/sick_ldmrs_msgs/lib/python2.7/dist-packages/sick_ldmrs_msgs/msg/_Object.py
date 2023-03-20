# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from sick_ldmrs_msgs/Object.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import geometry_msgs.msg

class Object(genpy.Message):
  _md5sum = "a5d0f2d250163ffa0098d0fc8218fc4a"
  _type = "sick_ldmrs_msgs/Object"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """int32 id

time tracking_time                          # since when the object is tracked
time last_seen

geometry_msgs/TwistWithCovariance velocity

geometry_msgs/Pose bounding_box_center
geometry_msgs/Vector3 bounding_box_size

geometry_msgs/PoseWithCovariance object_box_center
geometry_msgs/Vector3 object_box_size

geometry_msgs/Point[] contour_points

================================================================================
MSG: geometry_msgs/TwistWithCovariance
# This expresses velocity in free space with uncertainty.

Twist twist

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/PoseWithCovariance
# This represents a pose in free space with uncertainty.

Pose pose

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance
"""
  __slots__ = ['id','tracking_time','last_seen','velocity','bounding_box_center','bounding_box_size','object_box_center','object_box_size','contour_points']
  _slot_types = ['int32','time','time','geometry_msgs/TwistWithCovariance','geometry_msgs/Pose','geometry_msgs/Vector3','geometry_msgs/PoseWithCovariance','geometry_msgs/Vector3','geometry_msgs/Point[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,tracking_time,last_seen,velocity,bounding_box_center,bounding_box_size,object_box_center,object_box_size,contour_points

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Object, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.tracking_time is None:
        self.tracking_time = genpy.Time()
      if self.last_seen is None:
        self.last_seen = genpy.Time()
      if self.velocity is None:
        self.velocity = geometry_msgs.msg.TwistWithCovariance()
      if self.bounding_box_center is None:
        self.bounding_box_center = geometry_msgs.msg.Pose()
      if self.bounding_box_size is None:
        self.bounding_box_size = geometry_msgs.msg.Vector3()
      if self.object_box_center is None:
        self.object_box_center = geometry_msgs.msg.PoseWithCovariance()
      if self.object_box_size is None:
        self.object_box_size = geometry_msgs.msg.Vector3()
      if self.contour_points is None:
        self.contour_points = []
    else:
      self.id = 0
      self.tracking_time = genpy.Time()
      self.last_seen = genpy.Time()
      self.velocity = geometry_msgs.msg.TwistWithCovariance()
      self.bounding_box_center = geometry_msgs.msg.Pose()
      self.bounding_box_size = geometry_msgs.msg.Vector3()
      self.object_box_center = geometry_msgs.msg.PoseWithCovariance()
      self.object_box_size = geometry_msgs.msg.Vector3()
      self.contour_points = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_i4I6d().pack(_x.id, _x.tracking_time.secs, _x.tracking_time.nsecs, _x.last_seen.secs, _x.last_seen.nsecs, _x.velocity.twist.linear.x, _x.velocity.twist.linear.y, _x.velocity.twist.linear.z, _x.velocity.twist.angular.x, _x.velocity.twist.angular.y, _x.velocity.twist.angular.z))
      buff.write(_get_struct_36d().pack(*self.velocity.covariance))
      _x = self
      buff.write(_get_struct_17d().pack(_x.bounding_box_center.position.x, _x.bounding_box_center.position.y, _x.bounding_box_center.position.z, _x.bounding_box_center.orientation.x, _x.bounding_box_center.orientation.y, _x.bounding_box_center.orientation.z, _x.bounding_box_center.orientation.w, _x.bounding_box_size.x, _x.bounding_box_size.y, _x.bounding_box_size.z, _x.object_box_center.pose.position.x, _x.object_box_center.pose.position.y, _x.object_box_center.pose.position.z, _x.object_box_center.pose.orientation.x, _x.object_box_center.pose.orientation.y, _x.object_box_center.pose.orientation.z, _x.object_box_center.pose.orientation.w))
      buff.write(_get_struct_36d().pack(*self.object_box_center.covariance))
      _x = self
      buff.write(_get_struct_3d().pack(_x.object_box_size.x, _x.object_box_size.y, _x.object_box_size.z))
      length = len(self.contour_points)
      buff.write(_struct_I.pack(length))
      for val1 in self.contour_points:
        _x = val1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.tracking_time is None:
        self.tracking_time = genpy.Time()
      if self.last_seen is None:
        self.last_seen = genpy.Time()
      if self.velocity is None:
        self.velocity = geometry_msgs.msg.TwistWithCovariance()
      if self.bounding_box_center is None:
        self.bounding_box_center = geometry_msgs.msg.Pose()
      if self.bounding_box_size is None:
        self.bounding_box_size = geometry_msgs.msg.Vector3()
      if self.object_box_center is None:
        self.object_box_center = geometry_msgs.msg.PoseWithCovariance()
      if self.object_box_size is None:
        self.object_box_size = geometry_msgs.msg.Vector3()
      if self.contour_points is None:
        self.contour_points = None
      end = 0
      _x = self
      start = end
      end += 68
      (_x.id, _x.tracking_time.secs, _x.tracking_time.nsecs, _x.last_seen.secs, _x.last_seen.nsecs, _x.velocity.twist.linear.x, _x.velocity.twist.linear.y, _x.velocity.twist.linear.z, _x.velocity.twist.angular.x, _x.velocity.twist.angular.y, _x.velocity.twist.angular.z,) = _get_struct_i4I6d().unpack(str[start:end])
      start = end
      end += 288
      self.velocity.covariance = _get_struct_36d().unpack(str[start:end])
      _x = self
      start = end
      end += 136
      (_x.bounding_box_center.position.x, _x.bounding_box_center.position.y, _x.bounding_box_center.position.z, _x.bounding_box_center.orientation.x, _x.bounding_box_center.orientation.y, _x.bounding_box_center.orientation.z, _x.bounding_box_center.orientation.w, _x.bounding_box_size.x, _x.bounding_box_size.y, _x.bounding_box_size.z, _x.object_box_center.pose.position.x, _x.object_box_center.pose.position.y, _x.object_box_center.pose.position.z, _x.object_box_center.pose.orientation.x, _x.object_box_center.pose.orientation.y, _x.object_box_center.pose.orientation.z, _x.object_box_center.pose.orientation.w,) = _get_struct_17d().unpack(str[start:end])
      start = end
      end += 288
      self.object_box_center.covariance = _get_struct_36d().unpack(str[start:end])
      _x = self
      start = end
      end += 24
      (_x.object_box_size.x, _x.object_box_size.y, _x.object_box_size.z,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.contour_points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        self.contour_points.append(val1)
      self.tracking_time.canon()
      self.last_seen.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_i4I6d().pack(_x.id, _x.tracking_time.secs, _x.tracking_time.nsecs, _x.last_seen.secs, _x.last_seen.nsecs, _x.velocity.twist.linear.x, _x.velocity.twist.linear.y, _x.velocity.twist.linear.z, _x.velocity.twist.angular.x, _x.velocity.twist.angular.y, _x.velocity.twist.angular.z))
      buff.write(self.velocity.covariance.tostring())
      _x = self
      buff.write(_get_struct_17d().pack(_x.bounding_box_center.position.x, _x.bounding_box_center.position.y, _x.bounding_box_center.position.z, _x.bounding_box_center.orientation.x, _x.bounding_box_center.orientation.y, _x.bounding_box_center.orientation.z, _x.bounding_box_center.orientation.w, _x.bounding_box_size.x, _x.bounding_box_size.y, _x.bounding_box_size.z, _x.object_box_center.pose.position.x, _x.object_box_center.pose.position.y, _x.object_box_center.pose.position.z, _x.object_box_center.pose.orientation.x, _x.object_box_center.pose.orientation.y, _x.object_box_center.pose.orientation.z, _x.object_box_center.pose.orientation.w))
      buff.write(self.object_box_center.covariance.tostring())
      _x = self
      buff.write(_get_struct_3d().pack(_x.object_box_size.x, _x.object_box_size.y, _x.object_box_size.z))
      length = len(self.contour_points)
      buff.write(_struct_I.pack(length))
      for val1 in self.contour_points:
        _x = val1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.tracking_time is None:
        self.tracking_time = genpy.Time()
      if self.last_seen is None:
        self.last_seen = genpy.Time()
      if self.velocity is None:
        self.velocity = geometry_msgs.msg.TwistWithCovariance()
      if self.bounding_box_center is None:
        self.bounding_box_center = geometry_msgs.msg.Pose()
      if self.bounding_box_size is None:
        self.bounding_box_size = geometry_msgs.msg.Vector3()
      if self.object_box_center is None:
        self.object_box_center = geometry_msgs.msg.PoseWithCovariance()
      if self.object_box_size is None:
        self.object_box_size = geometry_msgs.msg.Vector3()
      if self.contour_points is None:
        self.contour_points = None
      end = 0
      _x = self
      start = end
      end += 68
      (_x.id, _x.tracking_time.secs, _x.tracking_time.nsecs, _x.last_seen.secs, _x.last_seen.nsecs, _x.velocity.twist.linear.x, _x.velocity.twist.linear.y, _x.velocity.twist.linear.z, _x.velocity.twist.angular.x, _x.velocity.twist.angular.y, _x.velocity.twist.angular.z,) = _get_struct_i4I6d().unpack(str[start:end])
      start = end
      end += 288
      self.velocity.covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=36)
      _x = self
      start = end
      end += 136
      (_x.bounding_box_center.position.x, _x.bounding_box_center.position.y, _x.bounding_box_center.position.z, _x.bounding_box_center.orientation.x, _x.bounding_box_center.orientation.y, _x.bounding_box_center.orientation.z, _x.bounding_box_center.orientation.w, _x.bounding_box_size.x, _x.bounding_box_size.y, _x.bounding_box_size.z, _x.object_box_center.pose.position.x, _x.object_box_center.pose.position.y, _x.object_box_center.pose.position.z, _x.object_box_center.pose.orientation.x, _x.object_box_center.pose.orientation.y, _x.object_box_center.pose.orientation.z, _x.object_box_center.pose.orientation.w,) = _get_struct_17d().unpack(str[start:end])
      start = end
      end += 288
      self.object_box_center.covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=36)
      _x = self
      start = end
      end += 24
      (_x.object_box_size.x, _x.object_box_size.y, _x.object_box_size.z,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.contour_points = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        self.contour_points.append(val1)
      self.tracking_time.canon()
      self.last_seen.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_17d = None
def _get_struct_17d():
    global _struct_17d
    if _struct_17d is None:
        _struct_17d = struct.Struct("<17d")
    return _struct_17d
_struct_36d = None
def _get_struct_36d():
    global _struct_36d
    if _struct_36d is None:
        _struct_36d = struct.Struct("<36d")
    return _struct_36d
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_i4I6d = None
def _get_struct_i4I6d():
    global _struct_i4I6d
    if _struct_i4I6d is None:
        _struct_i4I6d = struct.Struct("<i4I6d")
    return _struct_i4I6d
