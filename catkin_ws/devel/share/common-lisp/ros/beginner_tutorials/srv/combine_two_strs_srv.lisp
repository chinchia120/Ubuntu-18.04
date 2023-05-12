; Auto-generated. Do not edit!


(cl:in-package beginner_tutorials-srv)


;//! \htmlinclude combine_two_strs_srv-request.msg.html

(cl:defclass <combine_two_strs_srv-request> (roslisp-msg-protocol:ros-message)
  ((str1
    :reader str1
    :initarg :str1
    :type cl:string
    :initform "")
   (str2
    :reader str2
    :initarg :str2
    :type cl:string
    :initform ""))
)

(cl:defclass combine_two_strs_srv-request (<combine_two_strs_srv-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <combine_two_strs_srv-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'combine_two_strs_srv-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name beginner_tutorials-srv:<combine_two_strs_srv-request> is deprecated: use beginner_tutorials-srv:combine_two_strs_srv-request instead.")))

(cl:ensure-generic-function 'str1-val :lambda-list '(m))
(cl:defmethod str1-val ((m <combine_two_strs_srv-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader beginner_tutorials-srv:str1-val is deprecated.  Use beginner_tutorials-srv:str1 instead.")
  (str1 m))

(cl:ensure-generic-function 'str2-val :lambda-list '(m))
(cl:defmethod str2-val ((m <combine_two_strs_srv-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader beginner_tutorials-srv:str2-val is deprecated.  Use beginner_tutorials-srv:str2 instead.")
  (str2 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <combine_two_strs_srv-request>) ostream)
  "Serializes a message object of type '<combine_two_strs_srv-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'str1))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'str1))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'str2))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'str2))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <combine_two_strs_srv-request>) istream)
  "Deserializes a message object of type '<combine_two_strs_srv-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'str1) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'str1) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'str2) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'str2) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<combine_two_strs_srv-request>)))
  "Returns string type for a service object of type '<combine_two_strs_srv-request>"
  "beginner_tutorials/combine_two_strs_srvRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'combine_two_strs_srv-request)))
  "Returns string type for a service object of type 'combine_two_strs_srv-request"
  "beginner_tutorials/combine_two_strs_srvRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<combine_two_strs_srv-request>)))
  "Returns md5sum for a message object of type '<combine_two_strs_srv-request>"
  "578723269a20e157028aa5ccd0f34ddc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'combine_two_strs_srv-request)))
  "Returns md5sum for a message object of type 'combine_two_strs_srv-request"
  "578723269a20e157028aa5ccd0f34ddc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<combine_two_strs_srv-request>)))
  "Returns full string definition for message of type '<combine_two_strs_srv-request>"
  (cl:format cl:nil "string str1~%string str2~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'combine_two_strs_srv-request)))
  "Returns full string definition for message of type 'combine_two_strs_srv-request"
  (cl:format cl:nil "string str1~%string str2~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <combine_two_strs_srv-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'str1))
     4 (cl:length (cl:slot-value msg 'str2))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <combine_two_strs_srv-request>))
  "Converts a ROS message object to a list"
  (cl:list 'combine_two_strs_srv-request
    (cl:cons ':str1 (str1 msg))
    (cl:cons ':str2 (str2 msg))
))
;//! \htmlinclude combine_two_strs_srv-response.msg.html

(cl:defclass <combine_two_strs_srv-response> (roslisp-msg-protocol:ros-message)
  ((str_combine
    :reader str_combine
    :initarg :str_combine
    :type cl:string
    :initform ""))
)

(cl:defclass combine_two_strs_srv-response (<combine_two_strs_srv-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <combine_two_strs_srv-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'combine_two_strs_srv-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name beginner_tutorials-srv:<combine_two_strs_srv-response> is deprecated: use beginner_tutorials-srv:combine_two_strs_srv-response instead.")))

(cl:ensure-generic-function 'str_combine-val :lambda-list '(m))
(cl:defmethod str_combine-val ((m <combine_two_strs_srv-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader beginner_tutorials-srv:str_combine-val is deprecated.  Use beginner_tutorials-srv:str_combine instead.")
  (str_combine m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <combine_two_strs_srv-response>) ostream)
  "Serializes a message object of type '<combine_two_strs_srv-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'str_combine))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'str_combine))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <combine_two_strs_srv-response>) istream)
  "Deserializes a message object of type '<combine_two_strs_srv-response>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'str_combine) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'str_combine) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<combine_two_strs_srv-response>)))
  "Returns string type for a service object of type '<combine_two_strs_srv-response>"
  "beginner_tutorials/combine_two_strs_srvResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'combine_two_strs_srv-response)))
  "Returns string type for a service object of type 'combine_two_strs_srv-response"
  "beginner_tutorials/combine_two_strs_srvResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<combine_two_strs_srv-response>)))
  "Returns md5sum for a message object of type '<combine_two_strs_srv-response>"
  "578723269a20e157028aa5ccd0f34ddc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'combine_two_strs_srv-response)))
  "Returns md5sum for a message object of type 'combine_two_strs_srv-response"
  "578723269a20e157028aa5ccd0f34ddc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<combine_two_strs_srv-response>)))
  "Returns full string definition for message of type '<combine_two_strs_srv-response>"
  (cl:format cl:nil "string str_combine~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'combine_two_strs_srv-response)))
  "Returns full string definition for message of type 'combine_two_strs_srv-response"
  (cl:format cl:nil "string str_combine~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <combine_two_strs_srv-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'str_combine))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <combine_two_strs_srv-response>))
  "Converts a ROS message object to a list"
  (cl:list 'combine_two_strs_srv-response
    (cl:cons ':str_combine (str_combine msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'combine_two_strs_srv)))
  'combine_two_strs_srv-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'combine_two_strs_srv)))
  'combine_two_strs_srv-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'combine_two_strs_srv)))
  "Returns string type for a service object of type '<combine_two_strs_srv>"
  "beginner_tutorials/combine_two_strs_srv")