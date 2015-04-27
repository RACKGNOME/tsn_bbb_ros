/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/ubuntu/ros_workspace/tsn_senior_project/catkin/src/tsn_imu_base/tsn_bbb_msgs/msg/GPIOOut.msg
 *
 */


#ifndef TSN_BBB_MSGS_MESSAGE_GPIOOUT_H
#define TSN_BBB_MSGS_MESSAGE_GPIOOUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace tsn_bbb_msgs
{
template <class ContainerAllocator>
struct GPIOOut_
{
  typedef GPIOOut_<ContainerAllocator> Type;

  GPIOOut_()
    : header()
    , data(0)  {
    }
  GPIOOut_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> const> ConstPtr;

}; // struct GPIOOut_

typedef ::tsn_bbb_msgs::GPIOOut_<std::allocator<void> > GPIOOut;

typedef boost::shared_ptr< ::tsn_bbb_msgs::GPIOOut > GPIOOutPtr;
typedef boost::shared_ptr< ::tsn_bbb_msgs::GPIOOut const> GPIOOutConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tsn_bbb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'tsn_bbb_msgs': ['/home/ubuntu/ros_workspace/tsn_senior_project/catkin/src/tsn_imu_base/tsn_bbb_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dd7703d5078812384ba611ee20b8fecf";
  }

  static const char* value(const ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdd7703d507881238ULL;
  static const uint64_t static_value2 = 0x4ba611ee20b8fecfULL;
};

template<class ContainerAllocator>
struct DataType< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tsn_bbb_msgs/GPIOOut";
  }

  static const char* value(const ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Time Stamp of Data Point\n\
Header header\n\
\n\
#Current Setting of Output GPIO\n\
uint8 data\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GPIOOut_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tsn_bbb_msgs::GPIOOut_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TSN_BBB_MSGS_MESSAGE_GPIOOUT_H
