/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: esp_rmaker_user_mapping.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "esp_rmaker_user_mapping.pb-c.h"
void   rainmaker__cmd_set_user_mapping__init
                     (Rainmaker__CmdSetUserMapping         *message)
{
  static const Rainmaker__CmdSetUserMapping init_value = RAINMAKER__CMD_SET_USER_MAPPING__INIT;
  *message = init_value;
}
size_t rainmaker__cmd_set_user_mapping__get_packed_size
                     (const Rainmaker__CmdSetUserMapping *message)
{
  assert(message->base.descriptor == &rainmaker__cmd_set_user_mapping__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t rainmaker__cmd_set_user_mapping__pack
                     (const Rainmaker__CmdSetUserMapping *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &rainmaker__cmd_set_user_mapping__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t rainmaker__cmd_set_user_mapping__pack_to_buffer
                     (const Rainmaker__CmdSetUserMapping *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &rainmaker__cmd_set_user_mapping__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Rainmaker__CmdSetUserMapping *
       rainmaker__cmd_set_user_mapping__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Rainmaker__CmdSetUserMapping *)
     protobuf_c_message_unpack (&rainmaker__cmd_set_user_mapping__descriptor,
                                allocator, len, data);
}
void   rainmaker__cmd_set_user_mapping__free_unpacked
                     (Rainmaker__CmdSetUserMapping *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &rainmaker__cmd_set_user_mapping__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   rainmaker__resp_set_user_mapping__init
                     (Rainmaker__RespSetUserMapping         *message)
{
  static const Rainmaker__RespSetUserMapping init_value = RAINMAKER__RESP_SET_USER_MAPPING__INIT;
  *message = init_value;
}
size_t rainmaker__resp_set_user_mapping__get_packed_size
                     (const Rainmaker__RespSetUserMapping *message)
{
  assert(message->base.descriptor == &rainmaker__resp_set_user_mapping__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t rainmaker__resp_set_user_mapping__pack
                     (const Rainmaker__RespSetUserMapping *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &rainmaker__resp_set_user_mapping__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t rainmaker__resp_set_user_mapping__pack_to_buffer
                     (const Rainmaker__RespSetUserMapping *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &rainmaker__resp_set_user_mapping__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Rainmaker__RespSetUserMapping *
       rainmaker__resp_set_user_mapping__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Rainmaker__RespSetUserMapping *)
     protobuf_c_message_unpack (&rainmaker__resp_set_user_mapping__descriptor,
                                allocator, len, data);
}
void   rainmaker__resp_set_user_mapping__free_unpacked
                     (Rainmaker__RespSetUserMapping *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &rainmaker__resp_set_user_mapping__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   rainmaker__rmaker_config_payload__init
                     (Rainmaker__RMakerConfigPayload         *message)
{
  static const Rainmaker__RMakerConfigPayload init_value = RAINMAKER__RMAKER_CONFIG_PAYLOAD__INIT;
  *message = init_value;
}
size_t rainmaker__rmaker_config_payload__get_packed_size
                     (const Rainmaker__RMakerConfigPayload *message)
{
  assert(message->base.descriptor == &rainmaker__rmaker_config_payload__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t rainmaker__rmaker_config_payload__pack
                     (const Rainmaker__RMakerConfigPayload *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &rainmaker__rmaker_config_payload__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t rainmaker__rmaker_config_payload__pack_to_buffer
                     (const Rainmaker__RMakerConfigPayload *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &rainmaker__rmaker_config_payload__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Rainmaker__RMakerConfigPayload *
       rainmaker__rmaker_config_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Rainmaker__RMakerConfigPayload *)
     protobuf_c_message_unpack (&rainmaker__rmaker_config_payload__descriptor,
                                allocator, len, data);
}
void   rainmaker__rmaker_config_payload__free_unpacked
                     (Rainmaker__RMakerConfigPayload *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &rainmaker__rmaker_config_payload__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor rainmaker__cmd_set_user_mapping__field_descriptors[2] =
{
  {
    "UserID",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Rainmaker__CmdSetUserMapping, userid),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "SecretKey",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Rainmaker__CmdSetUserMapping, secretkey),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned rainmaker__cmd_set_user_mapping__field_indices_by_name[] = {
  1,   /* field[1] = SecretKey */
  0,   /* field[0] = UserID */
};
static const ProtobufCIntRange rainmaker__cmd_set_user_mapping__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor rainmaker__cmd_set_user_mapping__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "rainmaker.CmdSetUserMapping",
  "CmdSetUserMapping",
  "Rainmaker__CmdSetUserMapping",
  "rainmaker",
  sizeof(Rainmaker__CmdSetUserMapping),
  2,
  rainmaker__cmd_set_user_mapping__field_descriptors,
  rainmaker__cmd_set_user_mapping__field_indices_by_name,
  1,  rainmaker__cmd_set_user_mapping__number_ranges,
  (ProtobufCMessageInit) rainmaker__cmd_set_user_mapping__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor rainmaker__resp_set_user_mapping__field_descriptors[2] =
{
  {
    "Status",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Rainmaker__RespSetUserMapping, status),
    &rainmaker__rmaker_config_status__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "NodeId",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Rainmaker__RespSetUserMapping, nodeid),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned rainmaker__resp_set_user_mapping__field_indices_by_name[] = {
  1,   /* field[1] = NodeId */
  0,   /* field[0] = Status */
};
static const ProtobufCIntRange rainmaker__resp_set_user_mapping__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor rainmaker__resp_set_user_mapping__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "rainmaker.RespSetUserMapping",
  "RespSetUserMapping",
  "Rainmaker__RespSetUserMapping",
  "rainmaker",
  sizeof(Rainmaker__RespSetUserMapping),
  2,
  rainmaker__resp_set_user_mapping__field_descriptors,
  rainmaker__resp_set_user_mapping__field_indices_by_name,
  1,  rainmaker__resp_set_user_mapping__number_ranges,
  (ProtobufCMessageInit) rainmaker__resp_set_user_mapping__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor rainmaker__rmaker_config_payload__field_descriptors[3] =
{
  {
    "msg",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Rainmaker__RMakerConfigPayload, msg),
    &rainmaker__rmaker_config_msg_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cmd_set_user_mapping",
    10,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Rainmaker__RMakerConfigPayload, payload_case),
    offsetof(Rainmaker__RMakerConfigPayload, cmd_set_user_mapping),
    &rainmaker__cmd_set_user_mapping__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "resp_set_user_mapping",
    11,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Rainmaker__RMakerConfigPayload, payload_case),
    offsetof(Rainmaker__RMakerConfigPayload, resp_set_user_mapping),
    &rainmaker__resp_set_user_mapping__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned rainmaker__rmaker_config_payload__field_indices_by_name[] = {
  1,   /* field[1] = cmd_set_user_mapping */
  0,   /* field[0] = msg */
  2,   /* field[2] = resp_set_user_mapping */
};
static const ProtobufCIntRange rainmaker__rmaker_config_payload__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 10, 1 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor rainmaker__rmaker_config_payload__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "rainmaker.RMakerConfigPayload",
  "RMakerConfigPayload",
  "Rainmaker__RMakerConfigPayload",
  "rainmaker",
  sizeof(Rainmaker__RMakerConfigPayload),
  3,
  rainmaker__rmaker_config_payload__field_descriptors,
  rainmaker__rmaker_config_payload__field_indices_by_name,
  2,  rainmaker__rmaker_config_payload__number_ranges,
  (ProtobufCMessageInit) rainmaker__rmaker_config_payload__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue rainmaker__rmaker_config_status__enum_values_by_number[3] =
{
  { "Success", "RAINMAKER__RMAKER_CONFIG_STATUS__Success", 0 },
  { "InvalidParam", "RAINMAKER__RMAKER_CONFIG_STATUS__InvalidParam", 1 },
  { "InvalidState", "RAINMAKER__RMAKER_CONFIG_STATUS__InvalidState", 2 },
};
static const ProtobufCIntRange rainmaker__rmaker_config_status__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex rainmaker__rmaker_config_status__enum_values_by_name[3] =
{
  { "InvalidParam", 1 },
  { "InvalidState", 2 },
  { "Success", 0 },
};
const ProtobufCEnumDescriptor rainmaker__rmaker_config_status__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "rainmaker.RMakerConfigStatus",
  "RMakerConfigStatus",
  "Rainmaker__RMakerConfigStatus",
  "rainmaker",
  3,
  rainmaker__rmaker_config_status__enum_values_by_number,
  3,
  rainmaker__rmaker_config_status__enum_values_by_name,
  1,
  rainmaker__rmaker_config_status__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue rainmaker__rmaker_config_msg_type__enum_values_by_number[2] =
{
  { "TypeCmdSetUserMapping", "RAINMAKER__RMAKER_CONFIG_MSG_TYPE__TypeCmdSetUserMapping", 0 },
  { "TypeRespSetUserMapping", "RAINMAKER__RMAKER_CONFIG_MSG_TYPE__TypeRespSetUserMapping", 1 },
};
static const ProtobufCIntRange rainmaker__rmaker_config_msg_type__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex rainmaker__rmaker_config_msg_type__enum_values_by_name[2] =
{
  { "TypeCmdSetUserMapping", 0 },
  { "TypeRespSetUserMapping", 1 },
};
const ProtobufCEnumDescriptor rainmaker__rmaker_config_msg_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "rainmaker.RMakerConfigMsgType",
  "RMakerConfigMsgType",
  "Rainmaker__RMakerConfigMsgType",
  "rainmaker",
  2,
  rainmaker__rmaker_config_msg_type__enum_values_by_number,
  2,
  rainmaker__rmaker_config_msg_type__enum_values_by_name,
  1,
  rainmaker__rmaker_config_msg_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
