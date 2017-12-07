/****************************************************************************
** Meta object code from reading C++ file 'qabstractsocket.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../socket/qabstractsocket.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAbstractSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       5,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      29,   16,   16,   16, 0x05,
      41,   16,   16,   16, 0x05,
      56,   16,   16,   16, 0x05,
      99,   16,   16,   16, 0x05,
     155,  135,   16,   16, 0x05,
     214,   16,   16,   16, 0x15,
     233,   16,   16,   16, 0x15,

 // slots: signature, parameters, type, tag, flags
     275,  256,   16,   16, 0x09,
     343,  329,   16,   16, 0x29,
     388,   16,   16,   16, 0x09,
     423,   16,   16,   16, 0x08,
     449,   16,   16,   16, 0x08,
     479,   16,   16,   16, 0x08,
     507,   16,   16,   16, 0x08,
     527,   16,   16,   16, 0x08,

 // enums: name, flags, count, data
     548, 0x0,    3,  114,
     559, 0x0,    3,  120,
     580, 0x0,   20,  126,
     592, 0x0,   13,  166,
     604, 0x0,    4,  192,

 // enum data: key, value
     617, uint(QAbstractSocket::TcpSocket),
     627, uint(QAbstractSocket::UdpSocket),
     637, uint(QAbstractSocket::UnknownSocketType),
     655, uint(QAbstractSocket::IPv4Protocol),
     668, uint(QAbstractSocket::IPv6Protocol),
     681, uint(QAbstractSocket::UnknownNetworkLayerProtocol),
     709, uint(QAbstractSocket::ConnectionRefusedError),
     732, uint(QAbstractSocket::RemoteHostClosedError),
     754, uint(QAbstractSocket::HostNotFoundError),
     772, uint(QAbstractSocket::SocketAccessError),
     790, uint(QAbstractSocket::SocketResourceError),
     810, uint(QAbstractSocket::SocketTimeoutError),
     829, uint(QAbstractSocket::DatagramTooLargeError),
     851, uint(QAbstractSocket::NetworkError),
     864, uint(QAbstractSocket::AddressInUseError),
     882, uint(QAbstractSocket::SocketAddressNotAvailableError),
     913, uint(QAbstractSocket::UnsupportedSocketOperationError),
     945, uint(QAbstractSocket::UnfinishedSocketOperationError),
     976, uint(QAbstractSocket::ProxyAuthenticationRequiredError),
    1009, uint(QAbstractSocket::SslHandshakeFailedError),
    1033, uint(QAbstractSocket::ProxyConnectionRefusedError),
    1061, uint(QAbstractSocket::ProxyConnectionClosedError),
    1088, uint(QAbstractSocket::ProxyConnectionTimeoutError),
    1116, uint(QAbstractSocket::ProxyNotFoundError),
    1135, uint(QAbstractSocket::ProxyProtocolError),
    1154, uint(QAbstractSocket::UnknownSocketError),
    1173, uint(QAbstractSocket::UnconnectedState),
    1190, uint(QAbstractSocket::HostLookupState),
    1206, uint(QAbstractSocket::ConnectingState),
    1222, uint(QAbstractSocket::ConnectedState),
    1237, uint(QAbstractSocket::BoundState),
    1248, uint(QAbstractSocket::ListeningState),
    1263, uint(QAbstractSocket::ClosingState),
    1276, uint(QAbstractSocket::Idle),
    1281, uint(QAbstractSocket::HostLookup),
    1292, uint(QAbstractSocket::Connecting),
    1303, uint(QAbstractSocket::Connected),
    1313, uint(QAbstractSocket::Closing),
    1321, uint(QAbstractSocket::Connection),
    1332, uint(QAbstractSocket::LowDelayOption),
    1347, uint(QAbstractSocket::KeepAliveOption),
    1363, uint(QAbstractSocket::MulticastTtlOption),
    1382, uint(QAbstractSocket::MulticastLoopbackOption),

       0        // eod
};

static const char qt_meta_stringdata_QAbstractSocket[] = {
    "QAbstractSocket\0\0hostFound()\0connected()\0"
    "disconnected()\0"
    "stateChanged(QAbstractSocket::SocketState)\0"
    "error(QAbstractSocket::SocketError)\0"
    "proxy,authenticator\0"
    "proxyAuthenticationRequired(QNetworkProxy,QAuthenticator*)\0"
    "connectionClosed()\0delayedCloseFinished()\0"
    "hostName,port,mode\0"
    "connectToHostImplementation(QString,quint16,OpenMode)\0"
    "hostName,port\0"
    "connectToHostImplementation(QString,quint16)\0"
    "disconnectFromHostImplementation()\0"
    "_q_connectToNextAddress()\0"
    "_q_startConnecting(QHostInfo)\0"
    "_q_abortConnectionAttempt()\0"
    "_q_testConnection()\0_q_forceDisconnect()\0"
    "SocketType\0NetworkLayerProtocol\0"
    "SocketError\0SocketState\0SocketOption\0"
    "TcpSocket\0UdpSocket\0UnknownSocketType\0"
    "IPv4Protocol\0IPv6Protocol\0"
    "UnknownNetworkLayerProtocol\0"
    "ConnectionRefusedError\0RemoteHostClosedError\0"
    "HostNotFoundError\0SocketAccessError\0"
    "SocketResourceError\0SocketTimeoutError\0"
    "DatagramTooLargeError\0NetworkError\0"
    "AddressInUseError\0SocketAddressNotAvailableError\0"
    "UnsupportedSocketOperationError\0"
    "UnfinishedSocketOperationError\0"
    "ProxyAuthenticationRequiredError\0"
    "SslHandshakeFailedError\0"
    "ProxyConnectionRefusedError\0"
    "ProxyConnectionClosedError\0"
    "ProxyConnectionTimeoutError\0"
    "ProxyNotFoundError\0ProxyProtocolError\0"
    "UnknownSocketError\0UnconnectedState\0"
    "HostLookupState\0ConnectingState\0"
    "ConnectedState\0BoundState\0ListeningState\0"
    "ClosingState\0Idle\0HostLookup\0Connecting\0"
    "Connected\0Closing\0Connection\0"
    "LowDelayOption\0KeepAliveOption\0"
    "MulticastTtlOption\0MulticastLoopbackOption\0"
};

void QAbstractSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QAbstractSocket *_t = static_cast<QAbstractSocket *>(_o);
        switch (_id) {
        case 0: _t->hostFound(); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 4: _t->error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 6: _t->connectionClosed(); break;
        case 7: _t->delayedCloseFinished(); break;
        case 8: _t->connectToHostImplementation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< OpenMode(*)>(_a[3]))); break;
        case 9: _t->connectToHostImplementation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 10: _t->disconnectFromHostImplementation(); break;
        case 11: _t->d_func()->_q_connectToNextAddress(); break;
        case 12: _t->d_func()->_q_startConnecting((*reinterpret_cast< const QHostInfo(*)>(_a[1]))); break;
        case 13: _t->d_func()->_q_abortConnectionAttempt(); break;
        case 14: _t->d_func()->_q_testConnection(); break;
        case 15: _t->d_func()->_q_forceDisconnect(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QAbstractSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QAbstractSocket::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QAbstractSocket,
      qt_meta_data_QAbstractSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAbstractSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAbstractSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAbstractSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractSocket))
        return static_cast<void*>(const_cast< QAbstractSocket*>(this));
    return QIODevice::qt_metacast(_clname);
}

int QAbstractSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void QAbstractSocket::hostFound()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QAbstractSocket::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QAbstractSocket::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QAbstractSocket::stateChanged(QAbstractSocket::SocketState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAbstractSocket::error(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAbstractSocket::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QAbstractSocket::connectionClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QAbstractSocket::delayedCloseFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
