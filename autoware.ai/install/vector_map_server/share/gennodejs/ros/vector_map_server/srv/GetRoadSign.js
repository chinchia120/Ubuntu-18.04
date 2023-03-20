// Auto-generated. Do not edit!

// (in-package vector_map_server.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');
let autoware_msgs = _finder('autoware_msgs');

//-----------------------------------------------------------

let vector_map_msgs = _finder('vector_map_msgs');

//-----------------------------------------------------------

class GetRoadSignRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.pose = null;
      this.waypoints = null;
    }
    else {
      if (initObj.hasOwnProperty('pose')) {
        this.pose = initObj.pose
      }
      else {
        this.pose = new geometry_msgs.msg.PoseStamped();
      }
      if (initObj.hasOwnProperty('waypoints')) {
        this.waypoints = initObj.waypoints
      }
      else {
        this.waypoints = new autoware_msgs.msg.Lane();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetRoadSignRequest
    // Serialize message field [pose]
    bufferOffset = geometry_msgs.msg.PoseStamped.serialize(obj.pose, buffer, bufferOffset);
    // Serialize message field [waypoints]
    bufferOffset = autoware_msgs.msg.Lane.serialize(obj.waypoints, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetRoadSignRequest
    let len;
    let data = new GetRoadSignRequest(null);
    // Deserialize message field [pose]
    data.pose = geometry_msgs.msg.PoseStamped.deserialize(buffer, bufferOffset);
    // Deserialize message field [waypoints]
    data.waypoints = autoware_msgs.msg.Lane.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += geometry_msgs.msg.PoseStamped.getMessageSize(object.pose);
    length += autoware_msgs.msg.Lane.getMessageSize(object.waypoints);
    return length;
  }

  static datatype() {
    // Returns string type for a service object
    return 'vector_map_server/GetRoadSignRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd1f64bdec952e41012fc8c13f57fef77';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    geometry_msgs/PoseStamped pose
    autoware_msgs/Lane waypoints
    
    ================================================================================
    MSG: geometry_msgs/PoseStamped
    # A Pose with reference coordinate frame and timestamp
    Header header
    Pose pose
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
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
    MSG: autoware_msgs/Lane
    Header header
    int32 increment
    int32 lane_id
    Waypoint[] waypoints
    
    uint32 lane_index
    float32 cost
    float32 closest_object_distance
    float32 closest_object_velocity
    bool is_blocked
    
    ================================================================================
    MSG: autoware_msgs/Waypoint
    # global id
    int32 gid 
    # local id
    int32 lid
    geometry_msgs/PoseStamped pose
    geometry_msgs/TwistStamped twist
    DTLane dtlane
    int32 change_flag
    WaypointState wpstate
    
    uint32 lane_id
    uint32 left_lane_id
    uint32 right_lane_id
    uint32 stop_line_id
    float32 cost
    float32 time_cost
    
    # Lane Direction
    # FORWARD        = 0
    # FORWARD_LEFT       = 1
    # FORWARD_RIGHT      = 2
    # BACKWARD        = 3 
    # BACKWARD_LEFT      = 4
    # BACKWARD_RIGHT    = 5
    # STANDSTILL       = 6
    uint32 direction
    ================================================================================
    MSG: geometry_msgs/TwistStamped
    # A twist with reference coordinate frame and timestamp
    Header header
    Twist twist
    
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
    MSG: autoware_msgs/DTLane
    float64 dist
    float64 dir
    float64 apara
    float64 r
    float64 slope
    float64 cant
    float64 lw
    float64 rw
    
    ================================================================================
    MSG: autoware_msgs/WaypointState
    int32 aid
    uint8 NULLSTATE=0
    
    # lanechange
    uint8 lanechange_state
    
    # bilinker
    uint8 steering_state
    uint8 STR_LEFT=1
    uint8 STR_RIGHT=2
    uint8 STR_STRAIGHT=3
    uint8 STR_BACK=4
    
    uint8 accel_state
    
    uint8 stop_state
    # 1 is stopline, 2 is stop which can only be released manually.
    uint8 TYPE_STOPLINE=1
    uint8 TYPE_STOP=2
    
    uint8 event_state
    uint8 TYPE_EVENT_NULL = 0
    uint8 TYPE_EVENT_GOAL = 1
    uint8 TYPE_EVENT_MIDDLE_GOAL = 2
    uint8 TYPE_EVENT_POSITION_STOP = 3
    uint8 TYPE_EVENT_BUS_STOP = 4
    uint8 TYPE_EVENT_PARKING = 5
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetRoadSignRequest(null);
    if (msg.pose !== undefined) {
      resolved.pose = geometry_msgs.msg.PoseStamped.Resolve(msg.pose)
    }
    else {
      resolved.pose = new geometry_msgs.msg.PoseStamped()
    }

    if (msg.waypoints !== undefined) {
      resolved.waypoints = autoware_msgs.msg.Lane.Resolve(msg.waypoints)
    }
    else {
      resolved.waypoints = new autoware_msgs.msg.Lane()
    }

    return resolved;
    }
};

class GetRoadSignResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.objects = null;
    }
    else {
      if (initObj.hasOwnProperty('objects')) {
        this.objects = initObj.objects
      }
      else {
        this.objects = new vector_map_msgs.msg.RoadSignArray();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetRoadSignResponse
    // Serialize message field [objects]
    bufferOffset = vector_map_msgs.msg.RoadSignArray.serialize(obj.objects, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetRoadSignResponse
    let len;
    let data = new GetRoadSignResponse(null);
    // Deserialize message field [objects]
    data.objects = vector_map_msgs.msg.RoadSignArray.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += vector_map_msgs.msg.RoadSignArray.getMessageSize(object.objects);
    return length;
  }

  static datatype() {
    // Returns string type for a service object
    return 'vector_map_server/GetRoadSignResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'eb0d3abd5b660952db66a2eaaffb9728';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    vector_map_msgs/RoadSignArray objects
    
    
    ================================================================================
    MSG: vector_map_msgs/RoadSignArray
    Header header
    RoadSign[] data
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: vector_map_msgs/RoadSign
    # Ver 1.00
    int32 id
    int32 vid
    int32 plid
    int32 type # differ from specification
    int32 linkid
    
    ## Optional specification
    int32 TYPE_NULL = 0
    int32 TYPE_STOP = 1
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetRoadSignResponse(null);
    if (msg.objects !== undefined) {
      resolved.objects = vector_map_msgs.msg.RoadSignArray.Resolve(msg.objects)
    }
    else {
      resolved.objects = new vector_map_msgs.msg.RoadSignArray()
    }

    return resolved;
    }
};

module.exports = {
  Request: GetRoadSignRequest,
  Response: GetRoadSignResponse,
  md5sum() { return 'be65e7050b7091d7f692d42aee88a231'; },
  datatype() { return 'vector_map_server/GetRoadSign'; }
};
