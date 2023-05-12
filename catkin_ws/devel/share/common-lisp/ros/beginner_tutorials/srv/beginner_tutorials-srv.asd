
(cl:in-package :asdf)

(defsystem "beginner_tutorials-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "combine_two_strs_srv" :depends-on ("_package_combine_two_strs_srv"))
    (:file "_package_combine_two_strs_srv" :depends-on ("_package"))
    (:file "my_srv" :depends-on ("_package_my_srv"))
    (:file "_package_my_srv" :depends-on ("_package"))
  ))