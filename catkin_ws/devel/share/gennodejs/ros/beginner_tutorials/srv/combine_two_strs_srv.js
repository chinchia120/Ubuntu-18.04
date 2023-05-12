// Auto-generated. Do not edit!

// (in-package beginner_tutorials.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class combine_two_strs_srvRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.str1 = null;
      this.str2 = null;
    }
    else {
      if (initObj.hasOwnProperty('str1')) {
        this.str1 = initObj.str1
      }
      else {
        this.str1 = '';
      }
      if (initObj.hasOwnProperty('str2')) {
        this.str2 = initObj.str2
      }
      else {
        this.str2 = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type combine_two_strs_srvRequest
    // Serialize message field [str1]
    bufferOffset = _serializer.string(obj.str1, buffer, bufferOffset);
    // Serialize message field [str2]
    bufferOffset = _serializer.string(obj.str2, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type combine_two_strs_srvRequest
    let len;
    let data = new combine_two_strs_srvRequest(null);
    // Deserialize message field [str1]
    data.str1 = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [str2]
    data.str2 = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.str1.length;
    length += object.str2.length;
    return length + 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'beginner_tutorials/combine_two_strs_srvRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '34df8d240c5fbb34c73f630b5f4c576b';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string str1
    string str2
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new combine_two_strs_srvRequest(null);
    if (msg.str1 !== undefined) {
      resolved.str1 = msg.str1;
    }
    else {
      resolved.str1 = ''
    }

    if (msg.str2 !== undefined) {
      resolved.str2 = msg.str2;
    }
    else {
      resolved.str2 = ''
    }

    return resolved;
    }
};

class combine_two_strs_srvResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.str_combine = null;
    }
    else {
      if (initObj.hasOwnProperty('str_combine')) {
        this.str_combine = initObj.str_combine
      }
      else {
        this.str_combine = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type combine_two_strs_srvResponse
    // Serialize message field [str_combine]
    bufferOffset = _serializer.string(obj.str_combine, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type combine_two_strs_srvResponse
    let len;
    let data = new combine_two_strs_srvResponse(null);
    // Deserialize message field [str_combine]
    data.str_combine = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.str_combine.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'beginner_tutorials/combine_two_strs_srvResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2219dba361ad7f8fd59e70d5e05d8235';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string str_combine
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new combine_two_strs_srvResponse(null);
    if (msg.str_combine !== undefined) {
      resolved.str_combine = msg.str_combine;
    }
    else {
      resolved.str_combine = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: combine_two_strs_srvRequest,
  Response: combine_two_strs_srvResponse,
  md5sum() { return '578723269a20e157028aa5ccd0f34ddc'; },
  datatype() { return 'beginner_tutorials/combine_two_strs_srv'; }
};
