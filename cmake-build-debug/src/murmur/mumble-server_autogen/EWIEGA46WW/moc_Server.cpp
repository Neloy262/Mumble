/****************************************************************************
** Meta object code from reading C++ file 'Server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/murmur/Server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SslServer_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SslServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SslServer_t qt_meta_stringdata_SslServer = {
    {
QT_MOC_LITERAL(0, 0, 9) // "SslServer"

    },
    "SslServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SslServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SslServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SslServer::staticMetaObject = { {
    &QTcpServer::staticMetaObject,
    qt_meta_stringdata_SslServer.data,
    qt_meta_data_SslServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SslServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SslServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SslServer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int SslServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Server_t {
    QByteArrayData data[51];
    char stringdata0[713];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Server_t qt_meta_stringdata_Server = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Server"
QT_MOC_LITERAL(1, 7, 7), // "reqSync"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 11), // "tcpTransmit"
QT_MOC_LITERAL(4, 28, 2), // "id"
QT_MOC_LITERAL(5, 31, 15), // "registerUserSig"
QT_MOC_LITERAL(6, 47, 4), // "int&"
QT_MOC_LITERAL(7, 52, 17), // "QMap<int,QString>"
QT_MOC_LITERAL(8, 70, 17), // "unregisterUserSig"
QT_MOC_LITERAL(9, 88, 21), // "getRegisteredUsersSig"
QT_MOC_LITERAL(10, 110, 18), // "QMap<int,QString>&"
QT_MOC_LITERAL(11, 129, 18), // "getRegistrationSig"
QT_MOC_LITERAL(12, 148, 15), // "authenticateSig"
QT_MOC_LITERAL(13, 164, 8), // "QString&"
QT_MOC_LITERAL(14, 173, 22), // "QList<QSslCertificate>"
QT_MOC_LITERAL(15, 196, 10), // "setInfoSig"
QT_MOC_LITERAL(16, 207, 13), // "setTextureSig"
QT_MOC_LITERAL(17, 221, 11), // "idToNameSig"
QT_MOC_LITERAL(18, 233, 11), // "nameToIdSig"
QT_MOC_LITERAL(19, 245, 14), // "idToTextureSig"
QT_MOC_LITERAL(20, 260, 11), // "QByteArray&"
QT_MOC_LITERAL(21, 272, 16), // "userStateChanged"
QT_MOC_LITERAL(22, 289, 11), // "const User*"
QT_MOC_LITERAL(23, 301, 15), // "userTextMessage"
QT_MOC_LITERAL(24, 317, 11), // "TextMessage"
QT_MOC_LITERAL(25, 329, 13), // "userConnected"
QT_MOC_LITERAL(26, 343, 16), // "userDisconnected"
QT_MOC_LITERAL(27, 360, 19), // "channelStateChanged"
QT_MOC_LITERAL(28, 380, 14), // "const Channel*"
QT_MOC_LITERAL(29, 395, 14), // "channelCreated"
QT_MOC_LITERAL(30, 410, 14), // "channelRemoved"
QT_MOC_LITERAL(31, 425, 20), // "textMessageFilterSig"
QT_MOC_LITERAL(32, 446, 25), // "MumbleProto::TextMessage&"
QT_MOC_LITERAL(33, 472, 13), // "contextAction"
QT_MOC_LITERAL(34, 486, 11), // "regSslError"
QT_MOC_LITERAL(35, 498, 16), // "QList<QSslError>"
QT_MOC_LITERAL(36, 515, 8), // "finished"
QT_MOC_LITERAL(37, 524, 6), // "update"
QT_MOC_LITERAL(38, 531, 9), // "newClient"
QT_MOC_LITERAL(39, 541, 16), // "connectionClosed"
QT_MOC_LITERAL(40, 558, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(41, 587, 8), // "sslError"
QT_MOC_LITERAL(42, 596, 7), // "message"
QT_MOC_LITERAL(43, 604, 32), // "Mumble::Protocol::TCPMessageType"
QT_MOC_LITERAL(44, 637, 11), // "ServerUser*"
QT_MOC_LITERAL(45, 649, 4), // "cCon"
QT_MOC_LITERAL(46, 654, 12), // "checkTimeout"
QT_MOC_LITERAL(47, 667, 15), // "tcpTransmitData"
QT_MOC_LITERAL(48, 683, 6), // "doSync"
QT_MOC_LITERAL(49, 690, 9), // "encrypted"
QT_MOC_LITERAL(50, 700, 12) // "udpActivated"

    },
    "Server\0reqSync\0\0tcpTransmit\0id\0"
    "registerUserSig\0int&\0QMap<int,QString>\0"
    "unregisterUserSig\0getRegisteredUsersSig\0"
    "QMap<int,QString>&\0getRegistrationSig\0"
    "authenticateSig\0QString&\0"
    "QList<QSslCertificate>\0setInfoSig\0"
    "setTextureSig\0idToNameSig\0nameToIdSig\0"
    "idToTextureSig\0QByteArray&\0userStateChanged\0"
    "const User*\0userTextMessage\0TextMessage\0"
    "userConnected\0userDisconnected\0"
    "channelStateChanged\0const Channel*\0"
    "channelCreated\0channelRemoved\0"
    "textMessageFilterSig\0MumbleProto::TextMessage&\0"
    "contextAction\0regSslError\0QList<QSslError>\0"
    "finished\0update\0newClient\0connectionClosed\0"
    "QAbstractSocket::SocketError\0sslError\0"
    "message\0Mumble::Protocol::TCPMessageType\0"
    "ServerUser*\0cCon\0checkTimeout\0"
    "tcpTransmitData\0doSync\0encrypted\0"
    "udpActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Server[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  184,    2, 0x06 /* Public */,
       3,    2,  187,    2, 0x06 /* Public */,
       5,    2,  192,    2, 0x06 /* Public */,
       8,    2,  197,    2, 0x06 /* Public */,
       9,    2,  202,    2, 0x06 /* Public */,
      11,    3,  207,    2, 0x06 /* Public */,
      12,    7,  214,    2, 0x06 /* Public */,
      15,    3,  229,    2, 0x06 /* Public */,
      16,    3,  236,    2, 0x06 /* Public */,
      17,    2,  243,    2, 0x06 /* Public */,
      18,    2,  248,    2, 0x06 /* Public */,
      19,    2,  253,    2, 0x06 /* Public */,
      21,    1,  258,    2, 0x06 /* Public */,
      23,    2,  261,    2, 0x06 /* Public */,
      25,    1,  266,    2, 0x06 /* Public */,
      26,    1,  269,    2, 0x06 /* Public */,
      27,    1,  272,    2, 0x06 /* Public */,
      29,    1,  275,    2, 0x06 /* Public */,
      30,    1,  278,    2, 0x06 /* Public */,
      31,    3,  281,    2, 0x06 /* Public */,
      33,    4,  288,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    1,  297,    2, 0x0a /* Public */,
      36,    0,  300,    2, 0x0a /* Public */,
      37,    0,  301,    2, 0x0a /* Public */,
      38,    0,  302,    2, 0x0a /* Public */,
      39,    2,  303,    2, 0x0a /* Public */,
      41,    1,  308,    2, 0x0a /* Public */,
      42,    3,  311,    2, 0x0a /* Public */,
      42,    2,  318,    2, 0x2a /* Public | MethodCloned */,
      46,    0,  323,    2, 0x0a /* Public */,
      47,    2,  324,    2, 0x0a /* Public */,
      48,    1,  329,    2, 0x0a /* Public */,
      49,    0,  332,    2, 0x0a /* Public */,
      50,    1,  333,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::UInt,    2,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int, 0x80000000 | 10,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 13, QMetaType::Int, 0x80000000 | 14, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int, 0x80000000 | 7,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int, QMetaType::QByteArray,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 24,    2,    2,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 22, 0x80000000 | 32,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 22, QMetaType::QString, QMetaType::UInt, QMetaType::Int,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 35,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 35,    2,
    QMetaType::Void, 0x80000000 | 43, QMetaType::QByteArray, 0x80000000 | 44,    2,    2,   45,
    QMetaType::Void, 0x80000000 | 43, QMetaType::QByteArray,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reqSync((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->tcpTransmit((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: _t->registerUserSig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QMap<int,QString>(*)>(_a[2]))); break;
        case 3: _t->unregisterUserSig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->getRegisteredUsersSig((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[2]))); break;
        case 5: _t->getRegistrationSig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[3]))); break;
        case 6: _t->authenticateSig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QList<QSslCertificate>(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 7: _t->setInfoSig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QMap<int,QString>(*)>(_a[3]))); break;
        case 8: _t->setTextureSig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 9: _t->idToNameSig((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->nameToIdSig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->idToTextureSig((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->userStateChanged((*reinterpret_cast< const User*(*)>(_a[1]))); break;
        case 13: _t->userTextMessage((*reinterpret_cast< const User*(*)>(_a[1])),(*reinterpret_cast< const TextMessage(*)>(_a[2]))); break;
        case 14: _t->userConnected((*reinterpret_cast< const User*(*)>(_a[1]))); break;
        case 15: _t->userDisconnected((*reinterpret_cast< const User*(*)>(_a[1]))); break;
        case 16: _t->channelStateChanged((*reinterpret_cast< const Channel*(*)>(_a[1]))); break;
        case 17: _t->channelCreated((*reinterpret_cast< const Channel*(*)>(_a[1]))); break;
        case 18: _t->channelRemoved((*reinterpret_cast< const Channel*(*)>(_a[1]))); break;
        case 19: _t->textMessageFilterSig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const User*(*)>(_a[2])),(*reinterpret_cast< MumbleProto::TextMessage(*)>(_a[3]))); break;
        case 20: _t->contextAction((*reinterpret_cast< const User*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 21: _t->regSslError((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 22: _t->finished(); break;
        case 23: _t->update(); break;
        case 24: _t->newClient(); break;
        case 25: _t->connectionClosed((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 26: _t->sslError((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 27: _t->message((*reinterpret_cast< Mumble::Protocol::TCPMessageType(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< ServerUser*(*)>(_a[3]))); break;
        case 28: _t->message((*reinterpret_cast< Mumble::Protocol::TCPMessageType(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 29: _t->checkTimeout(); break;
        case 30: _t->tcpTransmitData((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 31: _t->doSync((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 32: _t->encrypted(); break;
        case 33: _t->udpActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslCertificate> >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServerUser* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Server::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::reqSync)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Server::*)(QByteArray , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::tcpTransmit)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Server::*)(int & , const QMap<int,QString> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::registerUserSig)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Server::*)(int & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::unregisterUserSig)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Server::*)(const QString & , QMap<int,QString> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::getRegisteredUsersSig)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Server::*)(int & , int , QMap<int,QString> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::getRegistrationSig)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Server::*)(int & , QString & , int , const QList<QSslCertificate> & , const QString & , bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::authenticateSig)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Server::*)(int & , int , const QMap<int,QString> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::setInfoSig)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Server::*)(int & , int , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::setTextureSig)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Server::*)(QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::idToNameSig)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Server::*)(int & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::nameToIdSig)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Server::*)(QByteArray & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::idToTextureSig)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Server::*)(const User * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::userStateChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Server::*)(const User * , const TextMessage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::userTextMessage)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Server::*)(const User * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::userConnected)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Server::*)(const User * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::userDisconnected)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Server::*)(const Channel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::channelStateChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Server::*)(const Channel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::channelCreated)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Server::*)(const Channel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::channelRemoved)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Server::*)(int & , const User * , MumbleProto::TextMessage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::textMessageFilterSig)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Server::*)(const User * , const QString & , unsigned int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Server::contextAction)) {
                *result = 20;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Server::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_Server.data,
    qt_meta_data_Server,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Server.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void Server::reqSync(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Server::tcpTransmit(QByteArray _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Server::registerUserSig(int & _t1, const QMap<int,QString> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Server::unregisterUserSig(int & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Server::getRegisteredUsersSig(const QString & _t1, QMap<int,QString> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Server::getRegistrationSig(int & _t1, int _t2, QMap<int,QString> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Server::authenticateSig(int & _t1, QString & _t2, int _t3, const QList<QSslCertificate> & _t4, const QString & _t5, bool _t6, const QString & _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Server::setInfoSig(int & _t1, int _t2, const QMap<int,QString> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Server::setTextureSig(int & _t1, int _t2, const QByteArray & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Server::idToNameSig(QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Server::nameToIdSig(int & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Server::idToTextureSig(QByteArray & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Server::userStateChanged(const User * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Server::userTextMessage(const User * _t1, const TextMessage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Server::userConnected(const User * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Server::userDisconnected(const User * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Server::channelStateChanged(const Channel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Server::channelCreated(const Channel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Server::channelRemoved(const Channel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Server::textMessageFilterSig(int & _t1, const User * _t2, MumbleProto::TextMessage & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Server::contextAction(const User * _t1, const QString & _t2, unsigned int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
