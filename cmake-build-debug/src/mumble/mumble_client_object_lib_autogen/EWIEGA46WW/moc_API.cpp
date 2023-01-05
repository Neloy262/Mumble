/****************************************************************************
** Meta object code from reading C++ file 'API.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/API.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'API.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_API__MumbleAPI_t {
    QByteArrayData data[96];
    char stringdata0[1733];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_API__MumbleAPI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_API__MumbleAPI_t qt_meta_stringdata_API__MumbleAPI = {
    {
QT_MOC_LITERAL(0, 0, 14), // "API::MumbleAPI"
QT_MOC_LITERAL(1, 15, 18), // "freeMemory_v_1_0_x"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 18), // "mumble_plugin_id_t"
QT_MOC_LITERAL(4, 54, 8), // "callerID"
QT_MOC_LITERAL(5, 63, 11), // "const void*"
QT_MOC_LITERAL(6, 75, 3), // "ptr"
QT_MOC_LITERAL(7, 79, 30), // "std::shared_ptr<api_promise_t>"
QT_MOC_LITERAL(8, 110, 7), // "promise"
QT_MOC_LITERAL(9, 118, 33), // "getActiveServerConnection_v_1..."
QT_MOC_LITERAL(10, 152, 20), // "mumble_connection_t*"
QT_MOC_LITERAL(11, 173, 10), // "connection"
QT_MOC_LITERAL(12, 184, 32), // "isConnectionSynchronized_v_1_0_x"
QT_MOC_LITERAL(13, 217, 19), // "mumble_connection_t"
QT_MOC_LITERAL(14, 237, 5), // "bool*"
QT_MOC_LITERAL(15, 243, 12), // "synchronized"
QT_MOC_LITERAL(16, 256, 22), // "getLocalUserID_v_1_0_x"
QT_MOC_LITERAL(17, 279, 16), // "mumble_userid_t*"
QT_MOC_LITERAL(18, 296, 6), // "userID"
QT_MOC_LITERAL(19, 303, 19), // "getUserName_v_1_0_x"
QT_MOC_LITERAL(20, 323, 15), // "mumble_userid_t"
QT_MOC_LITERAL(21, 339, 12), // "const char**"
QT_MOC_LITERAL(22, 352, 4), // "name"
QT_MOC_LITERAL(23, 357, 22), // "getChannelName_v_1_0_x"
QT_MOC_LITERAL(24, 380, 18), // "mumble_channelid_t"
QT_MOC_LITERAL(25, 399, 9), // "channelID"
QT_MOC_LITERAL(26, 409, 19), // "getAllUsers_v_1_0_x"
QT_MOC_LITERAL(27, 429, 17), // "mumble_userid_t**"
QT_MOC_LITERAL(28, 447, 5), // "users"
QT_MOC_LITERAL(29, 453, 7), // "size_t*"
QT_MOC_LITERAL(30, 461, 9), // "userCount"
QT_MOC_LITERAL(31, 471, 22), // "getAllChannels_v_1_0_x"
QT_MOC_LITERAL(32, 494, 20), // "mumble_channelid_t**"
QT_MOC_LITERAL(33, 515, 8), // "channels"
QT_MOC_LITERAL(34, 524, 12), // "channelCount"
QT_MOC_LITERAL(35, 537, 24), // "getChannelOfUser_v_1_0_x"
QT_MOC_LITERAL(36, 562, 19), // "mumble_channelid_t*"
QT_MOC_LITERAL(37, 582, 25), // "getUsersInChannel_v_1_0_x"
QT_MOC_LITERAL(38, 608, 36), // "getLocalUserTransmissionMode_..."
QT_MOC_LITERAL(39, 645, 27), // "mumble_transmission_mode_t*"
QT_MOC_LITERAL(40, 673, 16), // "transmissionMode"
QT_MOC_LITERAL(41, 690, 26), // "isUserLocallyMuted_v_1_0_x"
QT_MOC_LITERAL(42, 717, 5), // "muted"
QT_MOC_LITERAL(43, 723, 24), // "isLocalUserMuted_v_1_0_x"
QT_MOC_LITERAL(44, 748, 27), // "isLocalUserDeafened_v_1_0_x"
QT_MOC_LITERAL(45, 776, 8), // "deafened"
QT_MOC_LITERAL(46, 785, 19), // "getUserHash_v_1_0_x"
QT_MOC_LITERAL(47, 805, 4), // "hash"
QT_MOC_LITERAL(48, 810, 21), // "getServerHash_v_1_0_x"
QT_MOC_LITERAL(49, 832, 40), // "requestLocalUserTransmissionM..."
QT_MOC_LITERAL(50, 873, 26), // "mumble_transmission_mode_t"
QT_MOC_LITERAL(51, 900, 22), // "getUserComment_v_1_0_x"
QT_MOC_LITERAL(52, 923, 7), // "comment"
QT_MOC_LITERAL(53, 931, 29), // "getChannelDescription_v_1_0_x"
QT_MOC_LITERAL(54, 961, 11), // "description"
QT_MOC_LITERAL(55, 973, 23), // "requestUserMove_v_1_0_x"
QT_MOC_LITERAL(56, 997, 11), // "const char*"
QT_MOC_LITERAL(57, 1009, 8), // "password"
QT_MOC_LITERAL(58, 1018, 44), // "requestMicrophoneActivationOv..."
QT_MOC_LITERAL(59, 1063, 8), // "activate"
QT_MOC_LITERAL(60, 1072, 24), // "requestLocalMute_v_1_0_x"
QT_MOC_LITERAL(61, 1097, 28), // "requestLocalUserMute_v_1_0_x"
QT_MOC_LITERAL(62, 1126, 28), // "requestLocalUserDeaf_v_1_0_x"
QT_MOC_LITERAL(63, 1155, 34), // "requestSetLocalUserComment_v_..."
QT_MOC_LITERAL(64, 1190, 22), // "findUserByName_v_1_0_x"
QT_MOC_LITERAL(65, 1213, 8), // "userName"
QT_MOC_LITERAL(66, 1222, 25), // "findChannelByName_v_1_0_x"
QT_MOC_LITERAL(67, 1248, 11), // "channelName"
QT_MOC_LITERAL(68, 1260, 29), // "getMumbleSetting_bool_v_1_0_x"
QT_MOC_LITERAL(69, 1290, 21), // "mumble_settings_key_t"
QT_MOC_LITERAL(70, 1312, 3), // "key"
QT_MOC_LITERAL(71, 1316, 8), // "outValue"
QT_MOC_LITERAL(72, 1325, 28), // "getMumbleSetting_int_v_1_0_x"
QT_MOC_LITERAL(73, 1354, 8), // "int64_t*"
QT_MOC_LITERAL(74, 1363, 31), // "getMumbleSetting_double_v_1_0_x"
QT_MOC_LITERAL(75, 1395, 7), // "double*"
QT_MOC_LITERAL(76, 1403, 31), // "getMumbleSetting_string_v_1_0_x"
QT_MOC_LITERAL(77, 1435, 29), // "setMumbleSetting_bool_v_1_0_x"
QT_MOC_LITERAL(78, 1465, 5), // "value"
QT_MOC_LITERAL(79, 1471, 28), // "setMumbleSetting_int_v_1_0_x"
QT_MOC_LITERAL(80, 1500, 7), // "int64_t"
QT_MOC_LITERAL(81, 1508, 31), // "setMumbleSetting_double_v_1_0_x"
QT_MOC_LITERAL(82, 1540, 31), // "setMumbleSetting_string_v_1_0_x"
QT_MOC_LITERAL(83, 1572, 16), // "sendData_v_1_0_x"
QT_MOC_LITERAL(84, 1589, 22), // "const mumble_userid_t*"
QT_MOC_LITERAL(85, 1612, 6), // "size_t"
QT_MOC_LITERAL(86, 1619, 14), // "const uint8_t*"
QT_MOC_LITERAL(87, 1634, 4), // "data"
QT_MOC_LITERAL(88, 1639, 10), // "dataLength"
QT_MOC_LITERAL(89, 1650, 6), // "dataID"
QT_MOC_LITERAL(90, 1657, 11), // "log_v_1_0_x"
QT_MOC_LITERAL(91, 1669, 7), // "message"
QT_MOC_LITERAL(92, 1677, 18), // "playSample_v_1_0_x"
QT_MOC_LITERAL(93, 1696, 10), // "samplePath"
QT_MOC_LITERAL(94, 1707, 18), // "playSample_v_1_2_x"
QT_MOC_LITERAL(95, 1726, 6) // "volume"

    },
    "API::MumbleAPI\0freeMemory_v_1_0_x\0\0"
    "mumble_plugin_id_t\0callerID\0const void*\0"
    "ptr\0std::shared_ptr<api_promise_t>\0"
    "promise\0getActiveServerConnection_v_1_0_x\0"
    "mumble_connection_t*\0connection\0"
    "isConnectionSynchronized_v_1_0_x\0"
    "mumble_connection_t\0bool*\0synchronized\0"
    "getLocalUserID_v_1_0_x\0mumble_userid_t*\0"
    "userID\0getUserName_v_1_0_x\0mumble_userid_t\0"
    "const char**\0name\0getChannelName_v_1_0_x\0"
    "mumble_channelid_t\0channelID\0"
    "getAllUsers_v_1_0_x\0mumble_userid_t**\0"
    "users\0size_t*\0userCount\0getAllChannels_v_1_0_x\0"
    "mumble_channelid_t**\0channels\0"
    "channelCount\0getChannelOfUser_v_1_0_x\0"
    "mumble_channelid_t*\0getUsersInChannel_v_1_0_x\0"
    "getLocalUserTransmissionMode_v_1_0_x\0"
    "mumble_transmission_mode_t*\0"
    "transmissionMode\0isUserLocallyMuted_v_1_0_x\0"
    "muted\0isLocalUserMuted_v_1_0_x\0"
    "isLocalUserDeafened_v_1_0_x\0deafened\0"
    "getUserHash_v_1_0_x\0hash\0getServerHash_v_1_0_x\0"
    "requestLocalUserTransmissionMode_v_1_0_x\0"
    "mumble_transmission_mode_t\0"
    "getUserComment_v_1_0_x\0comment\0"
    "getChannelDescription_v_1_0_x\0description\0"
    "requestUserMove_v_1_0_x\0const char*\0"
    "password\0requestMicrophoneActivationOverwrite_v_1_0_x\0"
    "activate\0requestLocalMute_v_1_0_x\0"
    "requestLocalUserMute_v_1_0_x\0"
    "requestLocalUserDeaf_v_1_0_x\0"
    "requestSetLocalUserComment_v_1_0_x\0"
    "findUserByName_v_1_0_x\0userName\0"
    "findChannelByName_v_1_0_x\0channelName\0"
    "getMumbleSetting_bool_v_1_0_x\0"
    "mumble_settings_key_t\0key\0outValue\0"
    "getMumbleSetting_int_v_1_0_x\0int64_t*\0"
    "getMumbleSetting_double_v_1_0_x\0double*\0"
    "getMumbleSetting_string_v_1_0_x\0"
    "setMumbleSetting_bool_v_1_0_x\0value\0"
    "setMumbleSetting_int_v_1_0_x\0int64_t\0"
    "setMumbleSetting_double_v_1_0_x\0"
    "setMumbleSetting_string_v_1_0_x\0"
    "sendData_v_1_0_x\0const mumble_userid_t*\0"
    "size_t\0const uint8_t*\0data\0dataLength\0"
    "dataID\0log_v_1_0_x\0message\0"
    "playSample_v_1_0_x\0samplePath\0"
    "playSample_v_1_2_x\0volume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_API__MumbleAPI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,  209,    2, 0x0a /* Public */,
       9,    3,  216,    2, 0x0a /* Public */,
      12,    4,  223,    2, 0x0a /* Public */,
      16,    4,  232,    2, 0x0a /* Public */,
      19,    5,  241,    2, 0x0a /* Public */,
      23,    5,  252,    2, 0x0a /* Public */,
      26,    5,  263,    2, 0x0a /* Public */,
      31,    5,  274,    2, 0x0a /* Public */,
      35,    5,  285,    2, 0x0a /* Public */,
      37,    6,  296,    2, 0x0a /* Public */,
      38,    3,  309,    2, 0x0a /* Public */,
      41,    5,  316,    2, 0x0a /* Public */,
      43,    3,  327,    2, 0x0a /* Public */,
      44,    3,  334,    2, 0x0a /* Public */,
      46,    5,  341,    2, 0x0a /* Public */,
      48,    4,  352,    2, 0x0a /* Public */,
      49,    3,  361,    2, 0x0a /* Public */,
      51,    5,  368,    2, 0x0a /* Public */,
      53,    5,  379,    2, 0x0a /* Public */,
      55,    6,  390,    2, 0x0a /* Public */,
      58,    3,  403,    2, 0x0a /* Public */,
      60,    5,  410,    2, 0x0a /* Public */,
      61,    3,  421,    2, 0x0a /* Public */,
      62,    3,  428,    2, 0x0a /* Public */,
      63,    4,  435,    2, 0x0a /* Public */,
      64,    5,  444,    2, 0x0a /* Public */,
      66,    5,  455,    2, 0x0a /* Public */,
      68,    4,  466,    2, 0x0a /* Public */,
      72,    4,  475,    2, 0x0a /* Public */,
      74,    4,  484,    2, 0x0a /* Public */,
      76,    4,  493,    2, 0x0a /* Public */,
      77,    4,  502,    2, 0x0a /* Public */,
      79,    4,  511,    2, 0x0a /* Public */,
      81,    4,  520,    2, 0x0a /* Public */,
      82,    4,  529,    2, 0x0a /* Public */,
      83,    8,  538,    2, 0x0a /* Public */,
      90,    3,  555,    2, 0x0a /* Public */,
      92,    3,  562,    2, 0x0a /* Public */,
      94,    4,  569,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 10, 0x80000000 | 7,    4,   11,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 14, 0x80000000 | 7,    4,   11,   15,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 17, 0x80000000 | 7,    4,   11,   18,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 20, 0x80000000 | 21, 0x80000000 | 7,    4,   11,   18,   22,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 24, 0x80000000 | 21, 0x80000000 | 7,    4,   11,   25,   22,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 27, 0x80000000 | 29, 0x80000000 | 7,    4,   11,   28,   30,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 32, 0x80000000 | 29, 0x80000000 | 7,    4,   11,   33,   34,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 20, 0x80000000 | 36, 0x80000000 | 7,    4,   11,   18,   25,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 24, 0x80000000 | 27, 0x80000000 | 29, 0x80000000 | 7,    4,   11,   25,   28,   30,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 39, 0x80000000 | 7,    4,   40,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 20, 0x80000000 | 14, 0x80000000 | 7,    4,   11,   18,   42,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 14, 0x80000000 | 7,    4,   42,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 14, 0x80000000 | 7,    4,   45,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 20, 0x80000000 | 21, 0x80000000 | 7,    4,   11,   18,   47,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 21, 0x80000000 | 7,    4,   11,   47,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 50, 0x80000000 | 7,    4,   40,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 20, 0x80000000 | 21, 0x80000000 | 7,    4,   11,   18,   52,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 24, 0x80000000 | 21, 0x80000000 | 7,    4,   11,   25,   54,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 20, 0x80000000 | 24, 0x80000000 | 56, 0x80000000 | 7,    4,   11,   18,   25,   57,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 7,    4,   59,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 20, QMetaType::Bool, 0x80000000 | 7,    4,   11,   18,   42,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 7,    4,   42,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 7,    4,   45,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 56, 0x80000000 | 7,    4,   11,   52,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 56, 0x80000000 | 17, 0x80000000 | 7,    4,   11,   65,   18,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 56, 0x80000000 | 36, 0x80000000 | 7,    4,   11,   67,   25,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 69, 0x80000000 | 14, 0x80000000 | 7,    4,   70,   71,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 69, 0x80000000 | 73, 0x80000000 | 7,    4,   70,   71,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 69, 0x80000000 | 75, 0x80000000 | 7,    4,   70,   71,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 69, 0x80000000 | 21, 0x80000000 | 7,    4,   70,   71,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 69, QMetaType::Bool, 0x80000000 | 7,    4,   70,   78,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 69, 0x80000000 | 80, 0x80000000 | 7,    4,   70,   78,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 69, QMetaType::Double, 0x80000000 | 7,    4,   70,   78,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 69, 0x80000000 | 56, 0x80000000 | 7,    4,   70,   78,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 84, 0x80000000 | 85, 0x80000000 | 86, 0x80000000 | 85, 0x80000000 | 56, 0x80000000 | 7,    4,   11,   28,   30,   87,   88,   89,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 56, 0x80000000 | 7,    4,   91,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 56, 0x80000000 | 7,    4,   93,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 56, QMetaType::Float, 0x80000000 | 7,    4,   93,   95,    8,

       0        // eod
};

void API::MumbleAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MumbleAPI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->freeMemory_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[3]))); break;
        case 1: _t->getActiveServerConnection_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t*(*)>(_a[2])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[3]))); break;
        case 2: _t->isConnectionSynchronized_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        case 3: _t->getLocalUserID_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_userid_t*(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        case 4: _t->getUserName_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_userid_t(*)>(_a[3])),(*reinterpret_cast< const char**(*)>(_a[4])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[5]))); break;
        case 5: _t->getChannelName_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_channelid_t(*)>(_a[3])),(*reinterpret_cast< const char**(*)>(_a[4])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[5]))); break;
        case 6: _t->getAllUsers_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_userid_t**(*)>(_a[3])),(*reinterpret_cast< size_t*(*)>(_a[4])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[5]))); break;
        case 7: _t->getAllChannels_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_channelid_t**(*)>(_a[3])),(*reinterpret_cast< size_t*(*)>(_a[4])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[5]))); break;
        case 8: _t->getChannelOfUser_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_userid_t(*)>(_a[3])),(*reinterpret_cast< mumble_channelid_t*(*)>(_a[4])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[5]))); break;
        case 9: _t->getUsersInChannel_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_channelid_t(*)>(_a[3])),(*reinterpret_cast< mumble_userid_t**(*)>(_a[4])),(*reinterpret_cast< size_t*(*)>(_a[5])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[6]))); break;
        case 10: _t->getLocalUserTransmissionMode_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_transmission_mode_t*(*)>(_a[2])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[3]))); break;
        case 11: _t->isUserLocallyMuted_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_userid_t(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[5]))); break;
        case 12: _t->isLocalUserMuted_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[3]))); break;
        case 13: _t->isLocalUserDeafened_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[3]))); break;
        case 14: _t->getUserHash_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_userid_t(*)>(_a[3])),(*reinterpret_cast< const char**(*)>(_a[4])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[5]))); break;
        case 15: _t->getServerHash_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< const char**(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        case 16: _t->requestLocalUserTransmissionMode_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_transmission_mode_t(*)>(_a[2])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[3]))); break;
        case 17: _t->getUserComment_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_userid_t(*)>(_a[3])),(*reinterpret_cast< const char**(*)>(_a[4])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[5]))); break;
        case 18: _t->getChannelDescription_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_channelid_t(*)>(_a[3])),(*reinterpret_cast< const char**(*)>(_a[4])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[5]))); break;
        case 19: _t->requestUserMove_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_userid_t(*)>(_a[3])),(*reinterpret_cast< mumble_channelid_t(*)>(_a[4])),(*reinterpret_cast< const char*(*)>(_a[5])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[6]))); break;
        case 20: _t->requestMicrophoneActivationOverwrite_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[3]))); break;
        case 21: _t->requestLocalMute_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< mumble_userid_t(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[5]))); break;
        case 22: _t->requestLocalUserMute_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[3]))); break;
        case 23: _t->requestLocalUserDeaf_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[3]))); break;
        case 24: _t->requestSetLocalUserComment_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        case 25: _t->findUserByName_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< mumble_userid_t*(*)>(_a[4])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[5]))); break;
        case 26: _t->findChannelByName_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< mumble_channelid_t*(*)>(_a[4])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[5]))); break;
        case 27: _t->getMumbleSetting_bool_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_settings_key_t(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        case 28: _t->getMumbleSetting_int_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_settings_key_t(*)>(_a[2])),(*reinterpret_cast< int64_t*(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        case 29: _t->getMumbleSetting_double_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_settings_key_t(*)>(_a[2])),(*reinterpret_cast< double*(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        case 30: _t->getMumbleSetting_string_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_settings_key_t(*)>(_a[2])),(*reinterpret_cast< const char**(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        case 31: _t->setMumbleSetting_bool_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_settings_key_t(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        case 32: _t->setMumbleSetting_int_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_settings_key_t(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        case 33: _t->setMumbleSetting_double_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_settings_key_t(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        case 34: _t->setMumbleSetting_string_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_settings_key_t(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        case 35: _t->sendData_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< mumble_connection_t(*)>(_a[2])),(*reinterpret_cast< const mumble_userid_t*(*)>(_a[3])),(*reinterpret_cast< size_t(*)>(_a[4])),(*reinterpret_cast< const uint8_t*(*)>(_a[5])),(*reinterpret_cast< size_t(*)>(_a[6])),(*reinterpret_cast< const char*(*)>(_a[7])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[8]))); break;
        case 36: _t->log_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[3]))); break;
        case 37: _t->playSample_v_1_0_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[3]))); break;
        case 38: _t->playSample_v_1_2_x((*reinterpret_cast< mumble_plugin_id_t(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< std::shared_ptr<api_promise_t>(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mumble_transmission_mode_t* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mumble_transmission_mode_t >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mumble_settings_key_t >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mumble_settings_key_t >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mumble_settings_key_t >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mumble_settings_key_t >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mumble_settings_key_t >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mumble_settings_key_t >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mumble_settings_key_t >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< mumble_settings_key_t >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject API::MumbleAPI::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_API__MumbleAPI.data,
    qt_meta_data_API__MumbleAPI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *API::MumbleAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *API::MumbleAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_API__MumbleAPI.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int API::MumbleAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
