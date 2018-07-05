// Generated by gencpp from file sound_play/SoundRequestGoal.msg
// DO NOT EDIT!


#ifndef SOUND_PLAY_MESSAGE_SOUNDREQUESTGOAL_H
#define SOUND_PLAY_MESSAGE_SOUNDREQUESTGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sound_play/SoundRequest.h>

namespace sound_play
{
template <class ContainerAllocator>
struct SoundRequestGoal_
{
  typedef SoundRequestGoal_<ContainerAllocator> Type;

  SoundRequestGoal_()
    : sound_request()  {
    }
  SoundRequestGoal_(const ContainerAllocator& _alloc)
    : sound_request(_alloc)  {
  (void)_alloc;
    }



   typedef  ::sound_play::SoundRequest_<ContainerAllocator>  _sound_request_type;
  _sound_request_type sound_request;





  typedef boost::shared_ptr< ::sound_play::SoundRequestGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sound_play::SoundRequestGoal_<ContainerAllocator> const> ConstPtr;

}; // struct SoundRequestGoal_

typedef ::sound_play::SoundRequestGoal_<std::allocator<void> > SoundRequestGoal;

typedef boost::shared_ptr< ::sound_play::SoundRequestGoal > SoundRequestGoalPtr;
typedef boost::shared_ptr< ::sound_play::SoundRequestGoal const> SoundRequestGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sound_play::SoundRequestGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sound_play::SoundRequestGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sound_play

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sound_play': ['/home/algerbra/catkin_ws/devel/share/sound_play/msg', '/home/algerbra/catkin_ws/src/audio_common/sound_play/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sound_play::SoundRequestGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sound_play::SoundRequestGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sound_play::SoundRequestGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sound_play::SoundRequestGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sound_play::SoundRequestGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sound_play::SoundRequestGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sound_play::SoundRequestGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3bd5e9e7f60b85cc6f1b7662fe6e1903";
  }

  static const char* value(const ::sound_play::SoundRequestGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3bd5e9e7f60b85ccULL;
  static const uint64_t static_value2 = 0x6f1b7662fe6e1903ULL;
};

template<class ContainerAllocator>
struct DataType< ::sound_play::SoundRequestGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sound_play/SoundRequestGoal";
  }

  static const char* value(const ::sound_play::SoundRequestGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sound_play::SoundRequestGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
SoundRequest sound_request\n\
\n\
================================================================================\n\
MSG: sound_play/SoundRequest\n\
# IMPORTANT: You should never have to generate this message yourself.\n\
# Use the sound_play::SoundClient C++ helper or the\n\
# sound_play.libsoundplay.SoundClient Python helper.\n\
\n\
# Sounds\n\
int8 BACKINGUP = 1\n\
int8 NEEDS_UNPLUGGING = 2\n\
int8 NEEDS_PLUGGING = 3\n\
int8 NEEDS_UNPLUGGING_BADLY = 4\n\
int8 NEEDS_PLUGGING_BADLY = 5\n\
\n\
# Sound identifiers that have special meaning\n\
int8 ALL = -1 # Only legal with PLAY_STOP\n\
int8 PLAY_FILE = -2\n\
int8 SAY = -3\n\
\n\
int8 sound # Selects which sound to play (see above)\n\
\n\
# Commands\n\
int8 PLAY_STOP = 0 # Stop this sound from playing\n\
int8 PLAY_ONCE = 1 # Play the sound once\n\
int8 PLAY_START = 2 # Play the sound in a loop until a stop request occurs\n\
\n\
int8 command # Indicates what to do with the sound\n\
\n\
# Volume at which to play the sound, with 0 as mute and 1.0 as 100%.\n\
float32 volume\n\
\n\
string arg # file name or text to say\n\
string arg2 # other arguments\n\
";
  }

  static const char* value(const ::sound_play::SoundRequestGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sound_play::SoundRequestGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sound_request);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SoundRequestGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sound_play::SoundRequestGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sound_play::SoundRequestGoal_<ContainerAllocator>& v)
  {
    s << indent << "sound_request: ";
    s << std::endl;
    Printer< ::sound_play::SoundRequest_<ContainerAllocator> >::stream(s, indent + "  ", v.sound_request);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SOUND_PLAY_MESSAGE_SOUNDREQUESTGOAL_H
