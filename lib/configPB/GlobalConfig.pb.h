/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.4 at Sat Dec 07 20:42:12 2019. */

#ifndef PB_GLOBALCONFIG_PB_H_INCLUDED
#define PB_GLOBALCONFIG_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _DebugConfigMessage {
    uint8_t type;
    char server[40];
    uint16_t port;
/* @@protoc_insertion_point(struct:DebugConfigMessage) */
} DebugConfigMessage;

typedef struct _HttpConfigMessage {
    uint16_t port;
    char user[15];
    char pass[15];
    char ota_url[150];
/* @@protoc_insertion_point(struct:HttpConfigMessage) */
} HttpConfigMessage;

typedef struct _MqttConfigMessage {
    char server[30];
    uint16_t port;
    char user[20];
    char pass[30];
    bool retain;
    char topic[50];
    bool discovery;
    char discovery_prefix[30];
/* @@protoc_insertion_point(struct:MqttConfigMessage) */
} MqttConfigMessage;

typedef struct _WifiConfigMessage {
    char ssid[20];
    char pass[30];
    bool is_static;
    char ip[15];
    char sn[15];
    char gw[15];
/* @@protoc_insertion_point(struct:WifiConfigMessage) */
} WifiConfigMessage;

typedef PB_BYTES_ARRAY_T(500) GlobalConfigMessage_module_cfg_t;
typedef struct _GlobalConfigMessage {
    WifiConfigMessage wifi;
    HttpConfigMessage http;
    MqttConfigMessage mqtt;
    DebugConfigMessage debug;
    uint16_t cfg_version;
    uint16_t module_crc;
    GlobalConfigMessage_module_cfg_t module_cfg;
/* @@protoc_insertion_point(struct:GlobalConfigMessage) */
} GlobalConfigMessage;

/* Default values for struct fields */

/* Initializer values for message structs */
#define GlobalConfigMessage_init_default         {WifiConfigMessage_init_default, HttpConfigMessage_init_default, MqttConfigMessage_init_default, DebugConfigMessage_init_default, 0, 0, {0, {0}}}
#define WifiConfigMessage_init_default           {"", "", 0, "", "", ""}
#define HttpConfigMessage_init_default           {0, "", "", ""}
#define MqttConfigMessage_init_default           {"", 0, "", "", 0, "", 0, ""}
#define DebugConfigMessage_init_default          {0, "", 0}
#define GlobalConfigMessage_init_zero            {WifiConfigMessage_init_zero, HttpConfigMessage_init_zero, MqttConfigMessage_init_zero, DebugConfigMessage_init_zero, 0, 0, {0, {0}}}
#define WifiConfigMessage_init_zero              {"", "", 0, "", "", ""}
#define HttpConfigMessage_init_zero              {0, "", "", ""}
#define MqttConfigMessage_init_zero              {"", 0, "", "", 0, "", 0, ""}
#define DebugConfigMessage_init_zero             {0, "", 0}

/* Field tags (for use in manual encoding/decoding) */
#define DebugConfigMessage_type_tag              1
#define DebugConfigMessage_server_tag            2
#define DebugConfigMessage_port_tag              3
#define HttpConfigMessage_port_tag               1
#define HttpConfigMessage_user_tag               2
#define HttpConfigMessage_pass_tag               3
#define HttpConfigMessage_ota_url_tag            4
#define MqttConfigMessage_server_tag             1
#define MqttConfigMessage_port_tag               2
#define MqttConfigMessage_user_tag               3
#define MqttConfigMessage_pass_tag               4
#define MqttConfigMessage_retain_tag             5
#define MqttConfigMessage_topic_tag              6
#define MqttConfigMessage_discovery_tag          7
#define MqttConfigMessage_discovery_prefix_tag   8
#define WifiConfigMessage_ssid_tag               1
#define WifiConfigMessage_pass_tag               2
#define WifiConfigMessage_is_static_tag          3
#define WifiConfigMessage_ip_tag                 4
#define WifiConfigMessage_sn_tag                 5
#define WifiConfigMessage_gw_tag                 6
#define GlobalConfigMessage_wifi_tag             1
#define GlobalConfigMessage_http_tag             2
#define GlobalConfigMessage_mqtt_tag             3
#define GlobalConfigMessage_debug_tag            4
#define GlobalConfigMessage_cfg_version_tag      5
#define GlobalConfigMessage_module_crc_tag       6
#define GlobalConfigMessage_module_cfg_tag       7

/* Struct field encoding specification for nanopb */
extern const pb_field_t GlobalConfigMessage_fields[8];
extern const pb_field_t WifiConfigMessage_fields[7];
extern const pb_field_t HttpConfigMessage_fields[5];
extern const pb_field_t MqttConfigMessage_fields[9];
extern const pb_field_t DebugConfigMessage_fields[4];

/* Maximum encoded size of messages (where known) */
#define GlobalConfigMessage_size                 1059
#define WifiConfigMessage_size                   107
#define HttpConfigMessage_size                   193
#define MqttConfigMessage_size                   180
#define DebugConfigMessage_size                  54

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define GLOBALCONFIG_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
