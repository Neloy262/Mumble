/****************************************************************************
** Meta object code from reading C++ file 'DBus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/murmur/DBus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DBus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MurmurDBus_t {
    QByteArrayData data[118];
    char stringdata0[1458];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MurmurDBus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MurmurDBus_t qt_meta_stringdata_MurmurDBus = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MurmurDBus"
QT_MOC_LITERAL(1, 11, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 27, 29), // "net.sourceforge.mumble.Murmur"
QT_MOC_LITERAL(3, 57, 18), // "playerStateChanged"
QT_MOC_LITERAL(4, 76, 0), // ""
QT_MOC_LITERAL(5, 77, 10), // "PlayerInfo"
QT_MOC_LITERAL(6, 88, 5), // "state"
QT_MOC_LITERAL(7, 94, 15), // "playerConnected"
QT_MOC_LITERAL(8, 110, 18), // "playerDisconnected"
QT_MOC_LITERAL(9, 129, 19), // "channelStateChanged"
QT_MOC_LITERAL(10, 149, 11), // "ChannelInfo"
QT_MOC_LITERAL(11, 161, 14), // "channelCreated"
QT_MOC_LITERAL(12, 176, 14), // "channelRemoved"
QT_MOC_LITERAL(13, 191, 16), // "authenticateSlot"
QT_MOC_LITERAL(14, 208, 4), // "int&"
QT_MOC_LITERAL(15, 213, 3), // "res"
QT_MOC_LITERAL(16, 217, 8), // "QString&"
QT_MOC_LITERAL(17, 226, 5), // "uname"
QT_MOC_LITERAL(18, 232, 9), // "sessionId"
QT_MOC_LITERAL(19, 242, 22), // "QList<QSslCertificate>"
QT_MOC_LITERAL(20, 265, 5), // "certs"
QT_MOC_LITERAL(21, 271, 8), // "certhash"
QT_MOC_LITERAL(22, 280, 6), // "strong"
QT_MOC_LITERAL(23, 287, 2), // "pw"
QT_MOC_LITERAL(24, 290, 16), // "registerUserSlot"
QT_MOC_LITERAL(25, 307, 17), // "QMap<int,QString>"
QT_MOC_LITERAL(26, 325, 18), // "unregisterUserSlot"
QT_MOC_LITERAL(27, 344, 2), // "id"
QT_MOC_LITERAL(28, 347, 22), // "getRegisteredUsersSlot"
QT_MOC_LITERAL(29, 370, 6), // "filter"
QT_MOC_LITERAL(30, 377, 18), // "QMap<int,QString>&"
QT_MOC_LITERAL(31, 396, 19), // "getRegistrationSlot"
QT_MOC_LITERAL(32, 416, 11), // "setInfoSlot"
QT_MOC_LITERAL(33, 428, 14), // "setTextureSlot"
QT_MOC_LITERAL(34, 443, 7), // "texture"
QT_MOC_LITERAL(35, 451, 12), // "nameToIdSlot"
QT_MOC_LITERAL(36, 464, 4), // "name"
QT_MOC_LITERAL(37, 469, 12), // "idToNameSlot"
QT_MOC_LITERAL(38, 482, 15), // "idToTextureSlot"
QT_MOC_LITERAL(39, 498, 11), // "QByteArray&"
QT_MOC_LITERAL(40, 510, 16), // "userStateChanged"
QT_MOC_LITERAL(41, 527, 11), // "const User*"
QT_MOC_LITERAL(42, 539, 1), // "p"
QT_MOC_LITERAL(43, 541, 15), // "userTextMessage"
QT_MOC_LITERAL(44, 557, 11), // "TextMessage"
QT_MOC_LITERAL(45, 569, 13), // "userConnected"
QT_MOC_LITERAL(46, 583, 16), // "userDisconnected"
QT_MOC_LITERAL(47, 600, 14), // "const Channel*"
QT_MOC_LITERAL(48, 615, 1), // "c"
QT_MOC_LITERAL(49, 617, 10), // "getPlayers"
QT_MOC_LITERAL(50, 628, 26), // "QList<PlayerInfoExtended>&"
QT_MOC_LITERAL(51, 655, 11), // "player_list"
QT_MOC_LITERAL(52, 667, 11), // "getChannels"
QT_MOC_LITERAL(53, 679, 19), // "QList<ChannelInfo>&"
QT_MOC_LITERAL(54, 699, 12), // "channel_list"
QT_MOC_LITERAL(55, 712, 6), // "getACL"
QT_MOC_LITERAL(56, 719, 7), // "channel"
QT_MOC_LITERAL(57, 727, 12), // "QDBusMessage"
QT_MOC_LITERAL(58, 740, 15), // "QList<ACLInfo>&"
QT_MOC_LITERAL(59, 756, 4), // "acls"
QT_MOC_LITERAL(60, 761, 17), // "QList<GroupInfo>&"
QT_MOC_LITERAL(61, 779, 6), // "groups"
QT_MOC_LITERAL(62, 786, 5), // "bool&"
QT_MOC_LITERAL(63, 792, 7), // "inherit"
QT_MOC_LITERAL(64, 800, 6), // "setACL"
QT_MOC_LITERAL(65, 807, 14), // "QList<ACLInfo>"
QT_MOC_LITERAL(66, 822, 16), // "QList<GroupInfo>"
QT_MOC_LITERAL(67, 839, 7), // "getBans"
QT_MOC_LITERAL(68, 847, 15), // "QList<BanInfo>&"
QT_MOC_LITERAL(69, 863, 4), // "bans"
QT_MOC_LITERAL(70, 868, 7), // "setBans"
QT_MOC_LITERAL(71, 876, 14), // "QList<BanInfo>"
QT_MOC_LITERAL(72, 891, 10), // "kickPlayer"
QT_MOC_LITERAL(73, 902, 7), // "session"
QT_MOC_LITERAL(74, 910, 6), // "reason"
QT_MOC_LITERAL(75, 917, 14), // "getPlayerState"
QT_MOC_LITERAL(76, 932, 11), // "PlayerInfo&"
QT_MOC_LITERAL(77, 944, 14), // "setPlayerState"
QT_MOC_LITERAL(78, 959, 11), // "sendMessage"
QT_MOC_LITERAL(79, 971, 4), // "text"
QT_MOC_LITERAL(80, 976, 15), // "getChannelState"
QT_MOC_LITERAL(81, 992, 12), // "ChannelInfo&"
QT_MOC_LITERAL(82, 1005, 15), // "setChannelState"
QT_MOC_LITERAL(83, 1021, 13), // "removeChannel"
QT_MOC_LITERAL(84, 1035, 10), // "addChannel"
QT_MOC_LITERAL(85, 1046, 6), // "parent"
QT_MOC_LITERAL(86, 1053, 5), // "newid"
QT_MOC_LITERAL(87, 1059, 18), // "sendMessageChannel"
QT_MOC_LITERAL(88, 1078, 4), // "tree"
QT_MOC_LITERAL(89, 1083, 14), // "getPlayerNames"
QT_MOC_LITERAL(90, 1098, 10), // "QList<int>"
QT_MOC_LITERAL(91, 1109, 3), // "ids"
QT_MOC_LITERAL(92, 1113, 12), // "QStringList&"
QT_MOC_LITERAL(93, 1126, 5), // "names"
QT_MOC_LITERAL(94, 1132, 12), // "getPlayerIds"
QT_MOC_LITERAL(95, 1145, 11), // "QList<int>&"
QT_MOC_LITERAL(96, 1157, 16), // "setAuthenticator"
QT_MOC_LITERAL(97, 1174, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(98, 1190, 4), // "path"
QT_MOC_LITERAL(99, 1195, 9), // "reentrant"
QT_MOC_LITERAL(100, 1205, 18), // "setTemporaryGroups"
QT_MOC_LITERAL(101, 1224, 8), // "playerid"
QT_MOC_LITERAL(102, 1233, 14), // "registerPlayer"
QT_MOC_LITERAL(103, 1248, 16), // "unregisterPlayer"
QT_MOC_LITERAL(104, 1265, 18), // "updateRegistration"
QT_MOC_LITERAL(105, 1284, 16), // "RegisteredPlayer"
QT_MOC_LITERAL(106, 1301, 6), // "player"
QT_MOC_LITERAL(107, 1308, 15), // "setRegistration"
QT_MOC_LITERAL(108, 1324, 5), // "email"
QT_MOC_LITERAL(109, 1330, 15), // "getRegistration"
QT_MOC_LITERAL(110, 1346, 17), // "RegisteredPlayer&"
QT_MOC_LITERAL(111, 1364, 20), // "getRegisteredPlayers"
QT_MOC_LITERAL(112, 1385, 24), // "QList<RegisteredPlayer>&"
QT_MOC_LITERAL(113, 1410, 7), // "players"
QT_MOC_LITERAL(114, 1418, 14), // "verifyPassword"
QT_MOC_LITERAL(115, 1433, 2), // "ok"
QT_MOC_LITERAL(116, 1436, 10), // "getTexture"
QT_MOC_LITERAL(117, 1447, 10) // "setTexture"

    },
    "MurmurDBus\0D-Bus Interface\0"
    "net.sourceforge.mumble.Murmur\0"
    "playerStateChanged\0\0PlayerInfo\0state\0"
    "playerConnected\0playerDisconnected\0"
    "channelStateChanged\0ChannelInfo\0"
    "channelCreated\0channelRemoved\0"
    "authenticateSlot\0int&\0res\0QString&\0"
    "uname\0sessionId\0QList<QSslCertificate>\0"
    "certs\0certhash\0strong\0pw\0registerUserSlot\0"
    "QMap<int,QString>\0unregisterUserSlot\0"
    "id\0getRegisteredUsersSlot\0filter\0"
    "QMap<int,QString>&\0getRegistrationSlot\0"
    "setInfoSlot\0setTextureSlot\0texture\0"
    "nameToIdSlot\0name\0idToNameSlot\0"
    "idToTextureSlot\0QByteArray&\0"
    "userStateChanged\0const User*\0p\0"
    "userTextMessage\0TextMessage\0userConnected\0"
    "userDisconnected\0const Channel*\0c\0"
    "getPlayers\0QList<PlayerInfoExtended>&\0"
    "player_list\0getChannels\0QList<ChannelInfo>&\0"
    "channel_list\0getACL\0channel\0QDBusMessage\0"
    "QList<ACLInfo>&\0acls\0QList<GroupInfo>&\0"
    "groups\0bool&\0inherit\0setACL\0QList<ACLInfo>\0"
    "QList<GroupInfo>\0getBans\0QList<BanInfo>&\0"
    "bans\0setBans\0QList<BanInfo>\0kickPlayer\0"
    "session\0reason\0getPlayerState\0PlayerInfo&\0"
    "setPlayerState\0sendMessage\0text\0"
    "getChannelState\0ChannelInfo&\0"
    "setChannelState\0removeChannel\0addChannel\0"
    "parent\0newid\0sendMessageChannel\0tree\0"
    "getPlayerNames\0QList<int>\0ids\0"
    "QStringList&\0names\0getPlayerIds\0"
    "QList<int>&\0setAuthenticator\0"
    "QDBusObjectPath\0path\0reentrant\0"
    "setTemporaryGroups\0playerid\0registerPlayer\0"
    "unregisterPlayer\0updateRegistration\0"
    "RegisteredPlayer\0player\0setRegistration\0"
    "email\0getRegistration\0RegisteredPlayer&\0"
    "getRegisteredPlayers\0QList<RegisteredPlayer>&\0"
    "players\0verifyPassword\0ok\0getTexture\0"
    "setTexture"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MurmurDBus[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      51,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,  271,    4, 0x06 /* Public */,
       7,    1,  274,    4, 0x06 /* Public */,
       8,    1,  277,    4, 0x06 /* Public */,
       9,    1,  280,    4, 0x06 /* Public */,
      11,    1,  283,    4, 0x06 /* Public */,
      12,    1,  286,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    7,  289,    4, 0x0a /* Public */,
      24,    2,  304,    4, 0x0a /* Public */,
      26,    2,  309,    4, 0x0a /* Public */,
      28,    2,  314,    4, 0x0a /* Public */,
      31,    3,  319,    4, 0x0a /* Public */,
      32,    3,  326,    4, 0x0a /* Public */,
      33,    3,  333,    4, 0x0a /* Public */,
      35,    2,  340,    4, 0x0a /* Public */,
      37,    2,  345,    4, 0x0a /* Public */,
      38,    2,  350,    4, 0x0a /* Public */,
      40,    1,  355,    4, 0x0a /* Public */,
      43,    2,  358,    4, 0x0a /* Public */,
      45,    1,  363,    4, 0x0a /* Public */,
      46,    1,  366,    4, 0x0a /* Public */,
       9,    1,  369,    4, 0x0a /* Public */,
      11,    1,  372,    4, 0x0a /* Public */,
      12,    1,  375,    4, 0x0a /* Public */,
      49,    1,  378,    4, 0x0a /* Public */,
      52,    1,  381,    4, 0x0a /* Public */,
      55,    5,  384,    4, 0x0a /* Public */,
      64,    5,  395,    4, 0x0a /* Public */,
      67,    1,  406,    4, 0x0a /* Public */,
      70,    2,  409,    4, 0x0a /* Public */,
      72,    3,  414,    4, 0x0a /* Public */,
      75,    3,  421,    4, 0x0a /* Public */,
      77,    2,  428,    4, 0x0a /* Public */,
      78,    3,  433,    4, 0x0a /* Public */,
      80,    3,  440,    4, 0x0a /* Public */,
      82,    2,  447,    4, 0x0a /* Public */,
      83,    2,  452,    4, 0x0a /* Public */,
      84,    4,  457,    4, 0x0a /* Public */,
      87,    4,  466,    4, 0x0a /* Public */,
      89,    3,  475,    4, 0x0a /* Public */,
      94,    3,  482,    4, 0x0a /* Public */,
      96,    3,  489,    4, 0x0a /* Public */,
     100,    4,  496,    4, 0x0a /* Public */,
     102,    3,  505,    4, 0x0a /* Public */,
     103,    2,  512,    4, 0x0a /* Public */,
     104,    2,  517,    4, 0x0a /* Public */,
     107,    5,  522,    4, 0x0a /* Public */,
     109,    3,  533,    4, 0x0a /* Public */,
     111,    2,  540,    4, 0x0a /* Public */,
     114,    4,  545,    4, 0x0a /* Public */,
     116,    3,  554,    4, 0x0a /* Public */,
     117,    3,  561,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 10,    6,
    QMetaType::Void, 0x80000000 | 10,    6,
    QMetaType::Void, 0x80000000 | 10,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16, QMetaType::Int, 0x80000000 | 19, QMetaType::QString, QMetaType::Bool, QMetaType::QString,   15,   17,   18,   20,   21,   22,   23,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 25,   15,    4,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30,   29,   15,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int, 0x80000000 | 30,    4,    4,    4,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int, 0x80000000 | 25,    4,    4,    4,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int, QMetaType::QByteArray,   15,   27,   34,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   36,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int,   15,   27,
    QMetaType::Void, 0x80000000 | 39, QMetaType::Int,   15,   27,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, 0x80000000 | 41, 0x80000000 | 44,    4,    4,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 57, 0x80000000 | 58, 0x80000000 | 60, 0x80000000 | 62,   56,    4,   59,   61,   63,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 65, 0x80000000 | 66, QMetaType::Bool, 0x80000000 | 57,   56,   59,   61,   63,    4,
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void, 0x80000000 | 71, 0x80000000 | 57,   69,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, 0x80000000 | 57,   73,   74,    4,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 57, 0x80000000 | 76,   73,    4,    6,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 57,    6,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, 0x80000000 | 57,   73,   79,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 57, 0x80000000 | 81,   27,    4,    6,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 57,    6,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 57,   27,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 57, 0x80000000 | 14,   36,   85,    4,   86,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::QString, 0x80000000 | 57,   27,   88,   79,    4,
    QMetaType::Void, 0x80000000 | 90, 0x80000000 | 57, 0x80000000 | 92,   91,    4,   93,
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 57, 0x80000000 | 95,   93,    4,   91,
    QMetaType::Void, 0x80000000 | 97, QMetaType::Bool, 0x80000000 | 57,   98,   99,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QStringList, 0x80000000 | 57,   56,  101,   61,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 57, 0x80000000 | 14,   36,    4,   27,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 57,   27,    4,
    QMetaType::Void, 0x80000000 | 105, 0x80000000 | 57,  106,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 57,   27,   36,  108,   23,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 57, 0x80000000 | 110,   27,    4,  106,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 112,   29,  113,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 57, 0x80000000 | 62,   27,   23,    4,  115,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 57, 0x80000000 | 39,   27,    4,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray, 0x80000000 | 57,   27,    4,    4,

       0        // eod
};

void MurmurDBus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MurmurDBus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playerStateChanged((*reinterpret_cast< const PlayerInfo(*)>(_a[1]))); break;
        case 1: _t->playerConnected((*reinterpret_cast< const PlayerInfo(*)>(_a[1]))); break;
        case 2: _t->playerDisconnected((*reinterpret_cast< const PlayerInfo(*)>(_a[1]))); break;
        case 3: _t->channelStateChanged((*reinterpret_cast< const ChannelInfo(*)>(_a[1]))); break;
        case 4: _t->channelCreated((*reinterpret_cast< const ChannelInfo(*)>(_a[1]))); break;
        case 5: _t->channelRemoved((*reinterpret_cast< const ChannelInfo(*)>(_a[1]))); break;
        case 6: _t->authenticateSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QList<QSslCertificate>(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 7: _t->registerUserSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QMap<int,QString>(*)>(_a[2]))); break;
        case 8: _t->unregisterUserSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->getRegisteredUsersSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[2]))); break;
        case 10: _t->getRegistrationSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[3]))); break;
        case 11: _t->setInfoSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QMap<int,QString>(*)>(_a[3]))); break;
        case 12: _t->setTextureSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 13: _t->nameToIdSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->idToNameSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->idToTextureSlot((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->userStateChanged((*reinterpret_cast< const User*(*)>(_a[1]))); break;
        case 17: _t->userTextMessage((*reinterpret_cast< const User*(*)>(_a[1])),(*reinterpret_cast< const TextMessage(*)>(_a[2]))); break;
        case 18: _t->userConnected((*reinterpret_cast< const User*(*)>(_a[1]))); break;
        case 19: _t->userDisconnected((*reinterpret_cast< const User*(*)>(_a[1]))); break;
        case 20: _t->channelStateChanged((*reinterpret_cast< const Channel*(*)>(_a[1]))); break;
        case 21: _t->channelCreated((*reinterpret_cast< const Channel*(*)>(_a[1]))); break;
        case 22: _t->channelRemoved((*reinterpret_cast< const Channel*(*)>(_a[1]))); break;
        case 23: _t->getPlayers((*reinterpret_cast< QList<PlayerInfoExtended>(*)>(_a[1]))); break;
        case 24: _t->getChannels((*reinterpret_cast< QList<ChannelInfo>(*)>(_a[1]))); break;
        case 25: _t->getACL((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])),(*reinterpret_cast< QList<ACLInfo>(*)>(_a[3])),(*reinterpret_cast< QList<GroupInfo>(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 26: _t->setACL((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<ACLInfo>(*)>(_a[2])),(*reinterpret_cast< const QList<GroupInfo>(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< const QDBusMessage(*)>(_a[5]))); break;
        case 27: _t->getBans((*reinterpret_cast< QList<BanInfo>(*)>(_a[1]))); break;
        case 28: _t->setBans((*reinterpret_cast< const QList<BanInfo>(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 29: _t->kickPlayer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusMessage(*)>(_a[3]))); break;
        case 30: _t->getPlayerState((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])),(*reinterpret_cast< PlayerInfo(*)>(_a[3]))); break;
        case 31: _t->setPlayerState((*reinterpret_cast< const PlayerInfo(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 32: _t->sendMessage((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusMessage(*)>(_a[3]))); break;
        case 33: _t->getChannelState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])),(*reinterpret_cast< ChannelInfo(*)>(_a[3]))); break;
        case 34: _t->setChannelState((*reinterpret_cast< const ChannelInfo(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 35: _t->removeChannel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 36: _t->addChannel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QDBusMessage(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 37: _t->sendMessageChannel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QDBusMessage(*)>(_a[4]))); break;
        case 38: _t->getPlayerNames((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 39: _t->getPlayerIds((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])),(*reinterpret_cast< QList<int>(*)>(_a[3]))); break;
        case 40: _t->setAuthenticator((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QDBusMessage(*)>(_a[3]))); break;
        case 41: _t->setTemporaryGroups((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QDBusMessage(*)>(_a[4]))); break;
        case 42: _t->registerPlayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 43: _t->unregisterPlayer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 44: _t->updateRegistration((*reinterpret_cast< const RegisteredPlayer(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 45: _t->setRegistration((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QDBusMessage(*)>(_a[5]))); break;
        case 46: _t->getRegistration((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])),(*reinterpret_cast< RegisteredPlayer(*)>(_a[3]))); break;
        case 47: _t->getRegisteredPlayers((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QList<RegisteredPlayer>(*)>(_a[2]))); break;
        case 48: _t->verifyPassword((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusMessage(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 49: _t->getTexture((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 50: _t->setTexture((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QDBusMessage(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlayerInfo >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlayerInfo >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlayerInfo >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChannelInfo >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChannelInfo >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChannelInfo >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslCertificate> >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ACLInfo> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<GroupInfo> >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<BanInfo> >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlayerInfo >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChannelInfo >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RegisteredPlayer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MurmurDBus::*)(const PlayerInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MurmurDBus::playerStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MurmurDBus::*)(const PlayerInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MurmurDBus::playerConnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MurmurDBus::*)(const PlayerInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MurmurDBus::playerDisconnected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MurmurDBus::*)(const ChannelInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MurmurDBus::channelStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MurmurDBus::*)(const ChannelInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MurmurDBus::channelCreated)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MurmurDBus::*)(const ChannelInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MurmurDBus::channelRemoved)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MurmurDBus::staticMetaObject = { {
    &QDBusAbstractAdaptor::staticMetaObject,
    qt_meta_stringdata_MurmurDBus.data,
    qt_meta_data_MurmurDBus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MurmurDBus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MurmurDBus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MurmurDBus.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int MurmurDBus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void MurmurDBus::playerStateChanged(const PlayerInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MurmurDBus::playerConnected(const PlayerInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MurmurDBus::playerDisconnected(const PlayerInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MurmurDBus::channelStateChanged(const ChannelInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MurmurDBus::channelCreated(const ChannelInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MurmurDBus::channelRemoved(const ChannelInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_MetaDBus_t {
    QByteArrayData data[45];
    char stringdata0[439];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MetaDBus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MetaDBus_t qt_meta_stringdata_MetaDBus = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MetaDBus"
QT_MOC_LITERAL(1, 9, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 25, 27), // "net.sourceforge.mumble.Meta"
QT_MOC_LITERAL(3, 53, 7), // "started"
QT_MOC_LITERAL(4, 61, 0), // ""
QT_MOC_LITERAL(5, 62, 9), // "server_id"
QT_MOC_LITERAL(6, 72, 7), // "stopped"
QT_MOC_LITERAL(7, 80, 7), // "Server*"
QT_MOC_LITERAL(8, 88, 1), // "s"
QT_MOC_LITERAL(9, 90, 5), // "start"
QT_MOC_LITERAL(10, 96, 12), // "QDBusMessage"
QT_MOC_LITERAL(11, 109, 4), // "stop"
QT_MOC_LITERAL(12, 114, 9), // "newServer"
QT_MOC_LITERAL(13, 124, 4), // "int&"
QT_MOC_LITERAL(14, 129, 12), // "deleteServer"
QT_MOC_LITERAL(15, 142, 16), // "getBootedServers"
QT_MOC_LITERAL(16, 159, 11), // "QList<int>&"
QT_MOC_LITERAL(17, 171, 11), // "server_list"
QT_MOC_LITERAL(18, 183, 13), // "getAllServers"
QT_MOC_LITERAL(19, 197, 8), // "isBooted"
QT_MOC_LITERAL(20, 206, 5), // "bool&"
QT_MOC_LITERAL(21, 212, 6), // "booted"
QT_MOC_LITERAL(22, 219, 7), // "getConf"
QT_MOC_LITERAL(23, 227, 3), // "key"
QT_MOC_LITERAL(24, 231, 8), // "QString&"
QT_MOC_LITERAL(25, 240, 5), // "value"
QT_MOC_LITERAL(26, 246, 10), // "getAllConf"
QT_MOC_LITERAL(27, 257, 10), // "ConfigMap&"
QT_MOC_LITERAL(28, 268, 6), // "values"
QT_MOC_LITERAL(29, 275, 14), // "getDefaultConf"
QT_MOC_LITERAL(30, 290, 7), // "setConf"
QT_MOC_LITERAL(31, 298, 20), // "setSuperUserPassword"
QT_MOC_LITERAL(32, 319, 2), // "pw"
QT_MOC_LITERAL(33, 322, 6), // "getLog"
QT_MOC_LITERAL(34, 329, 10), // "min_offset"
QT_MOC_LITERAL(35, 340, 10), // "max_offset"
QT_MOC_LITERAL(36, 351, 16), // "QList<LogEntry>&"
QT_MOC_LITERAL(37, 368, 7), // "entries"
QT_MOC_LITERAL(38, 376, 10), // "getVersion"
QT_MOC_LITERAL(39, 387, 21), // "Version::component_t&"
QT_MOC_LITERAL(40, 409, 5), // "major"
QT_MOC_LITERAL(41, 415, 5), // "minor"
QT_MOC_LITERAL(42, 421, 5), // "patch"
QT_MOC_LITERAL(43, 427, 6), // "string"
QT_MOC_LITERAL(44, 434, 4) // "quit"

    },
    "MetaDBus\0D-Bus Interface\0"
    "net.sourceforge.mumble.Meta\0started\0"
    "\0server_id\0stopped\0Server*\0s\0start\0"
    "QDBusMessage\0stop\0newServer\0int&\0"
    "deleteServer\0getBootedServers\0QList<int>&\0"
    "server_list\0getAllServers\0isBooted\0"
    "bool&\0booted\0getConf\0key\0QString&\0"
    "value\0getAllConf\0ConfigMap&\0values\0"
    "getDefaultConf\0setConf\0setSuperUserPassword\0"
    "pw\0getLog\0min_offset\0max_offset\0"
    "QList<LogEntry>&\0entries\0getVersion\0"
    "Version::component_t&\0major\0minor\0"
    "patch\0string\0quit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MetaDBus[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      19,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,  111,    4, 0x06 /* Public */,
       6,    1,  114,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  117,    4, 0x0a /* Public */,
       6,    1,  120,    4, 0x0a /* Public */,
       9,    2,  123,    4, 0x0a /* Public */,
      11,    2,  128,    4, 0x0a /* Public */,
      12,    1,  133,    4, 0x0a /* Public */,
      14,    2,  136,    4, 0x0a /* Public */,
      15,    1,  141,    4, 0x0a /* Public */,
      18,    1,  144,    4, 0x0a /* Public */,
      19,    2,  147,    4, 0x0a /* Public */,
      22,    4,  152,    4, 0x0a /* Public */,
      26,    3,  161,    4, 0x0a /* Public */,
      29,    1,  168,    4, 0x0a /* Public */,
      30,    4,  171,    4, 0x0a /* Public */,
      31,    3,  180,    4, 0x0a /* Public */,
      33,    5,  187,    4, 0x0a /* Public */,
      38,    4,  198,    4, 0x0a /* Public */,
      44,    0,  207,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    5,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    5,    4,
    QMetaType::Void, 0x80000000 | 13,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    5,    4,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20,    5,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 10, 0x80000000 | 24,    5,   23,    4,   25,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10, 0x80000000 | 27,    5,    4,   28,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, 0x80000000 | 10,    5,   23,   25,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 10,    5,   32,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 10, 0x80000000 | 36,    5,   34,   35,    4,   37,
    QMetaType::Void, 0x80000000 | 39, 0x80000000 | 39, 0x80000000 | 39, 0x80000000 | 24,   40,   41,   42,   43,
    QMetaType::Void,

       0        // eod
};

void MetaDBus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MetaDBus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->stopped((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->started((*reinterpret_cast< Server*(*)>(_a[1]))); break;
        case 3: _t->stopped((*reinterpret_cast< Server*(*)>(_a[1]))); break;
        case 4: _t->start((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 5: _t->stop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 6: _t->newServer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->deleteServer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 8: _t->getBootedServers((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 9: _t->getAllServers((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 10: _t->isBooted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->getConf((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusMessage(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 12: _t->getAllConf((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2])),(*reinterpret_cast< ConfigMap(*)>(_a[3]))); break;
        case 13: _t->getDefaultConf((*reinterpret_cast< ConfigMap(*)>(_a[1]))); break;
        case 14: _t->setConf((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QDBusMessage(*)>(_a[4]))); break;
        case 15: _t->setSuperUserPassword((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusMessage(*)>(_a[3]))); break;
        case 16: _t->getLog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusMessage(*)>(_a[4])),(*reinterpret_cast< QList<LogEntry>(*)>(_a[5]))); break;
        case 17: _t->getVersion((*reinterpret_cast< Version::component_t(*)>(_a[1])),(*reinterpret_cast< Version::component_t(*)>(_a[2])),(*reinterpret_cast< Version::component_t(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 18: _t->quit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Server* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Server* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MetaDBus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MetaDBus::started)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MetaDBus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MetaDBus::stopped)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MetaDBus::staticMetaObject = { {
    &QDBusAbstractAdaptor::staticMetaObject,
    qt_meta_stringdata_MetaDBus.data,
    qt_meta_data_MetaDBus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MetaDBus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MetaDBus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MetaDBus.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int MetaDBus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MetaDBus::started(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MetaDBus::stopped(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
