;; Auto-generated. Do not edit!


(when (boundp 'beginner_tutorials::combine_two_strs_srv)
  (if (not (find-package "BEGINNER_TUTORIALS"))
    (make-package "BEGINNER_TUTORIALS"))
  (shadow 'combine_two_strs_srv (find-package "BEGINNER_TUTORIALS")))
(unless (find-package "BEGINNER_TUTORIALS::COMBINE_TWO_STRS_SRV")
  (make-package "BEGINNER_TUTORIALS::COMBINE_TWO_STRS_SRV"))
(unless (find-package "BEGINNER_TUTORIALS::COMBINE_TWO_STRS_SRVREQUEST")
  (make-package "BEGINNER_TUTORIALS::COMBINE_TWO_STRS_SRVREQUEST"))
(unless (find-package "BEGINNER_TUTORIALS::COMBINE_TWO_STRS_SRVRESPONSE")
  (make-package "BEGINNER_TUTORIALS::COMBINE_TWO_STRS_SRVRESPONSE"))

(in-package "ROS")





(defclass beginner_tutorials::combine_two_strs_srvRequest
  :super ros::object
  :slots (_str1 _str2 ))

(defmethod beginner_tutorials::combine_two_strs_srvRequest
  (:init
   (&key
    ((:str1 __str1) "")
    ((:str2 __str2) "")
    )
   (send-super :init)
   (setq _str1 (string __str1))
   (setq _str2 (string __str2))
   self)
  (:str1
   (&optional __str1)
   (if __str1 (setq _str1 __str1)) _str1)
  (:str2
   (&optional __str2)
   (if __str2 (setq _str2 __str2)) _str2)
  (:serialization-length
   ()
   (+
    ;; string _str1
    4 (length _str1)
    ;; string _str2
    4 (length _str2)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _str1
       (write-long (length _str1) s) (princ _str1 s)
     ;; string _str2
       (write-long (length _str2) s) (princ _str2 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _str1
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _str1 (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _str2
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _str2 (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass beginner_tutorials::combine_two_strs_srvResponse
  :super ros::object
  :slots (_str_combine ))

(defmethod beginner_tutorials::combine_two_strs_srvResponse
  (:init
   (&key
    ((:str_combine __str_combine) "")
    )
   (send-super :init)
   (setq _str_combine (string __str_combine))
   self)
  (:str_combine
   (&optional __str_combine)
   (if __str_combine (setq _str_combine __str_combine)) _str_combine)
  (:serialization-length
   ()
   (+
    ;; string _str_combine
    4 (length _str_combine)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _str_combine
       (write-long (length _str_combine) s) (princ _str_combine s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _str_combine
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _str_combine (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass beginner_tutorials::combine_two_strs_srv
  :super ros::object
  :slots ())

(setf (get beginner_tutorials::combine_two_strs_srv :md5sum-) "578723269a20e157028aa5ccd0f34ddc")
(setf (get beginner_tutorials::combine_two_strs_srv :datatype-) "beginner_tutorials/combine_two_strs_srv")
(setf (get beginner_tutorials::combine_two_strs_srv :request) beginner_tutorials::combine_two_strs_srvRequest)
(setf (get beginner_tutorials::combine_two_strs_srv :response) beginner_tutorials::combine_two_strs_srvResponse)

(defmethod beginner_tutorials::combine_two_strs_srvRequest
  (:response () (instance beginner_tutorials::combine_two_strs_srvResponse :init)))

(setf (get beginner_tutorials::combine_two_strs_srvRequest :md5sum-) "578723269a20e157028aa5ccd0f34ddc")
(setf (get beginner_tutorials::combine_two_strs_srvRequest :datatype-) "beginner_tutorials/combine_two_strs_srvRequest")
(setf (get beginner_tutorials::combine_two_strs_srvRequest :definition-)
      "string str1
string str2
---
string str_combine
")

(setf (get beginner_tutorials::combine_two_strs_srvResponse :md5sum-) "578723269a20e157028aa5ccd0f34ddc")
(setf (get beginner_tutorials::combine_two_strs_srvResponse :datatype-) "beginner_tutorials/combine_two_strs_srvResponse")
(setf (get beginner_tutorials::combine_two_strs_srvResponse :definition-)
      "string str1
string str2
---
string str_combine
")



(provide :beginner_tutorials/combine_two_strs_srv "578723269a20e157028aa5ccd0f34ddc")


