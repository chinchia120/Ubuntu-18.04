; Auto-generated. Do not edit!


(cl:in-package autoware_map_msgs-msg)


;//! \htmlinclude LaneSignalLightRelationArray.msg.html

(cl:defclass <LaneSignalLightRelationArray> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (data
    :reader data
    :initarg :data
    :type (cl:vector autoware_map_msgs-msg:LaneSignalLightRelation)
   :initform (cl:make-array 0 :element-type 'autoware_map_msgs-msg:LaneSignalLightRelation :initial-element (cl:make-instance 'autoware_map_msgs-msg:LaneSignalLightRelation))))
)

(cl:defclass LaneSignalLightRelationArray (<LaneSignalLightRelationArray>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LaneSignalLightRelationArray>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LaneSignalLightRelationArray)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autoware_map_msgs-msg:<LaneSignalLightRelationArray> is deprecated: use autoware_map_msgs-msg:LaneSignalLightRelationArray instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <LaneSignalLightRelationArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autoware_map_msgs-msg:header-val is deprecated.  Use autoware_map_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <LaneSignalLightRelationArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autoware_map_msgs-msg:data-val is deprecated.  Use autoware_map_msgs-msg:data instead.")
  (data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LaneSignalLightRelationArray>) ostream)
  "Serializes a message object of type '<LaneSignalLightRelationArray>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'data))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'data))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LaneSignalLightRelationArray>) istream)
  "Deserializes a message object of type '<LaneSignalLightRelationArray>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'data) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'data)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'autoware_map_msgs-msg:LaneSignalLightRelation))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LaneSignalLightRelationArray>)))
  "Returns string type for a message object of type '<LaneSignalLightRelationArray>"
  "autoware_map_msgs/LaneSignalLightRelationArray")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LaneSignalLightRelationArray)))
  "Returns string type for a message object of type 'LaneSignalLightRelationArray"
  "autoware_map_msgs/LaneSignalLightRelationArray")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LaneSignalLightRelationArray>)))
  "Returns md5sum for a message object of type '<LaneSignalLightRelationArray>"
  "e81abadffddd8d48873ba8c4bce89fcc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LaneSignalLightRelationArray)))
  "Returns md5sum for a message object of type 'LaneSignalLightRelationArray"
  "e81abadffddd8d48873ba8c4bce89fcc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LaneSignalLightRelationArray>)))
  "Returns full string definition for message of type '<LaneSignalLightRelationArray>"
  (cl:format cl:nil "# This consists of multiple LaneSignalLightRelation objects in a map. ~%~%Header header~%LaneSignalLightRelation[] data~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: autoware_map_msgs/LaneSignalLightRelation~%# This represents relation between a lane and a signal in a map.~%~%# Id of refering Lane object~%int32 lane_id~%~%# Id of SignalLight object that must be recognized when vehicle is driving the refering lane. ~%int32 signal_light_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LaneSignalLightRelationArray)))
  "Returns full string definition for message of type 'LaneSignalLightRelationArray"
  (cl:format cl:nil "# This consists of multiple LaneSignalLightRelation objects in a map. ~%~%Header header~%LaneSignalLightRelation[] data~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: autoware_map_msgs/LaneSignalLightRelation~%# This represents relation between a lane and a signal in a map.~%~%# Id of refering Lane object~%int32 lane_id~%~%# Id of SignalLight object that must be recognized when vehicle is driving the refering lane. ~%int32 signal_light_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LaneSignalLightRelationArray>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'data) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LaneSignalLightRelationArray>))
  "Converts a ROS message object to a list"
  (cl:list 'LaneSignalLightRelationArray
    (cl:cons ':header (header msg))
    (cl:cons ':data (data msg))
))
