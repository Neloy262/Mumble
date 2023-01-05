/****************************************************************************
** Meta object code from reading C++ file 'ServerHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/mumble/ServerHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ServerHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerHandler_t {
    QByteArrayData data[23];
    char stringdata0[380];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerHandler_t qt_meta_stringdata_ServerHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ServerHandler"
QT_MOC_LITERAL(1, 14, 5), // "error"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(4, 50, 6), // "reason"
QT_MOC_LITERAL(5, 57, 17), // "aboutToDisconnect"
QT_MOC_LITERAL(6, 75, 12), // "disconnected"
QT_MOC_LITERAL(7, 88, 9), // "connected"
QT_MOC_LITERAL(8, 98, 13), // "pingRequested"
QT_MOC_LITERAL(9, 112, 7), // "message"
QT_MOC_LITERAL(10, 120, 32), // "Mumble::Protocol::TCPMessageType"
QT_MOC_LITERAL(11, 153, 4), // "type"
QT_MOC_LITERAL(12, 158, 25), // "serverConnectionConnected"
QT_MOC_LITERAL(13, 184, 32), // "serverConnectionTimeoutOnConnect"
QT_MOC_LITERAL(14, 217, 28), // "serverConnectionStateChanged"
QT_MOC_LITERAL(15, 246, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(16, 275, 22), // "serverConnectionClosed"
QT_MOC_LITERAL(17, 298, 12), // "setSslErrors"
QT_MOC_LITERAL(18, 311, 16), // "QList<QSslError>"
QT_MOC_LITERAL(19, 328, 8), // "udpReady"
QT_MOC_LITERAL(20, 337, 16), // "hostnameResolved"
QT_MOC_LITERAL(21, 354, 16), // "sendPingInternal"
QT_MOC_LITERAL(22, 371, 8) // "sendPing"

    },
    "ServerHandler\0error\0\0QAbstractSocket::SocketError\0"
    "reason\0aboutToDisconnect\0disconnected\0"
    "connected\0pingRequested\0message\0"
    "Mumble::Protocol::TCPMessageType\0type\0"
    "serverConnectionConnected\0"
    "serverConnectionTimeoutOnConnect\0"
    "serverConnectionStateChanged\0"
    "QAbstractSocket::SocketState\0"
    "serverConnectionClosed\0setSslErrors\0"
    "QList<QSslError>\0udpReady\0hostnameResolved\0"
    "sendPingInternal\0sendPing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       5,    2,   94,    2, 0x06 /* Public */,
       6,    2,   99,    2, 0x06 /* Public */,
       7,    0,  104,    2, 0x06 /* Public */,
       8,    0,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,  106,    2, 0x09 /* Protected */,
      12,    0,  111,    2, 0x09 /* Protected */,
      13,    0,  112,    2, 0x09 /* Protected */,
      14,    1,  113,    2, 0x09 /* Protected */,
      16,    2,  116,    2, 0x09 /* Protected */,
      17,    1,  121,    2, 0x09 /* Protected */,
      19,    0,  124,    2, 0x09 /* Protected */,
      20,    0,  125,    2, 0x09 /* Protected */,
      21,    0,  126,    2, 0x08 /* Private */,
      22,    0,  127,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, QMetaType::QByteArray,   11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ServerHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->aboutToDisconnect((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->disconnected((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->connected(); break;
        case 4: _t->pingRequested(); break;
        case 5: _t->message((*reinterpret_cast< Mumble::Protocol::TCPMessageType(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: _t->serverConnectionConnected(); break;
        case 7: _t->serverConnectionTimeoutOnConnect(); break;
        case 8: _t->serverConnectionStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 9: _t->serverConnectionClosed((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->setSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 11: _t->udpReady(); break;
        case 12: _t->hostnameResolved(); break;
        case 13: _t->sendPingInternal(); break;
        case 14: _t->sendPing(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerHandler::*)(QAbstractSocket::SocketError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerHandler::error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ServerHandler::*)(QAbstractSocket::SocketError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerHandler::aboutToDisconnect)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ServerHandler::*)(QAbstractSocket::SocketError , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerHandler::disconnected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ServerHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerHandler::connected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ServerHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerHandler::pingRequested)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ServerHandler::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_ServerHandler.data,
    qt_meta_data_ServerHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ServerHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerHandler.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ServerHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ServerHandler::error(QAbstractSocket::SocketError _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServerHandler::aboutToDisconnect(QAbstractSocket::SocketError _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ServerHandler::disconnected(QAbstractSocket::SocketError _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ServerHandler::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ServerHandler::pingRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
