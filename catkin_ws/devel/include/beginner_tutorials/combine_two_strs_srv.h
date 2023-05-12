// Generated by gencpp from file beginner_tutorials/combine_two_strs_srv.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_COMBINE_TWO_STRS_SRV_H
#define BEGINNER_TUTORIALS_MESSAGE_COMBINE_TWO_STRS_SRV_H

#include <ros/service_traits.h>


#include <beginner_tutorials/combine_two_strs_srvRequest.h>
#include <beginner_tutorials/combine_two_strs_srvResponse.h>


namespace beginner_tutorials
{

struct combine_two_strs_srv
{

typedef combine_two_strs_srvRequest Request;
typedef combine_two_strs_srvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct combine_two_strs_srv
} // namespace beginner_tutorials


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::beginner_tutorials::combine_two_strs_srv > {
  static const char* value()
  {
    return "578723269a20e157028aa5ccd0f34ddc";
  }

  static const char* value(const ::beginner_tutorials::combine_two_strs_srv&) { return value(); }
};

template<>
struct DataType< ::beginner_tutorials::combine_two_strs_srv > {
  static const char* value()
  {
    return "beginner_tutorials/combine_two_strs_srv";
  }

  static const char* value(const ::beginner_tutorials::combine_two_strs_srv&) { return value(); }
};


// service_traits::MD5Sum< ::beginner_tutorials::combine_two_strs_srvRequest> should match
// service_traits::MD5Sum< ::beginner_tutorials::combine_two_strs_srv >
template<>
struct MD5Sum< ::beginner_tutorials::combine_two_strs_srvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::beginner_tutorials::combine_two_strs_srv >::value();
  }
  static const char* value(const ::beginner_tutorials::combine_two_strs_srvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::beginner_tutorials::combine_two_strs_srvRequest> should match
// service_traits::DataType< ::beginner_tutorials::combine_two_strs_srv >
template<>
struct DataType< ::beginner_tutorials::combine_two_strs_srvRequest>
{
  static const char* value()
  {
    return DataType< ::beginner_tutorials::combine_two_strs_srv >::value();
  }
  static const char* value(const ::beginner_tutorials::combine_two_strs_srvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::beginner_tutorials::combine_two_strs_srvResponse> should match
// service_traits::MD5Sum< ::beginner_tutorials::combine_two_strs_srv >
template<>
struct MD5Sum< ::beginner_tutorials::combine_two_strs_srvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::beginner_tutorials::combine_two_strs_srv >::value();
  }
  static const char* value(const ::beginner_tutorials::combine_two_strs_srvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::beginner_tutorials::combine_two_strs_srvResponse> should match
// service_traits::DataType< ::beginner_tutorials::combine_two_strs_srv >
template<>
struct DataType< ::beginner_tutorials::combine_two_strs_srvResponse>
{
  static const char* value()
  {
    return DataType< ::beginner_tutorials::combine_two_strs_srv >::value();
  }
  static const char* value(const ::beginner_tutorials::combine_two_strs_srvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_COMBINE_TWO_STRS_SRV_H
