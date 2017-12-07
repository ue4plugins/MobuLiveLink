/****************************************************************************
** Meta object code from reading C++ file 'qsocks5socketengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../socket/qsocks5socketengine_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsocks5socketengine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSocks5SocketEngine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      49,   20,   20,   20, 0x08,
      84,   20,   20,   20, 0x08,
     136,   20,   20,   20, 0x08,
     167,   20,   20,   20, 0x08,
     198,   20,   20,   20, 0x08,
     231,   20,   20,   20, 0x08,
     265,   20,   20,   20, 0x08,
     304,   20,   20,   20, 0x08,
     335,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QSocks5SocketEngine[] = {
    "QSocks5SocketEngine\0\0_q_controlSocketConnected()\0"
    "_q_controlSocketReadNotification()\0"
    "_q_controlSocketError(QAbstractSocket::SocketError)\0"
    "_q_udpSocketReadNotification()\0"
    "_q_controlSocketBytesWritten()\0"
    "_q_emitPendingReadNotification()\0"
    "_q_emitPendingWriteNotification()\0"
    "_q_emitPendingConnectionNotification()\0"
    "_q_controlSocketDisconnected()\0"
    "_q_controlSocketStateChanged(QAbstractSocket::SocketState)\0"
};

void QSocks5SocketEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSocks5SocketEngine *_t = static_cast<QSocks5SocketEngine *>(_o);
        switch (_id) {
        case 0: _t->d_func()->_q_controlSocketConnected(); break;
        case 1: _t->d_func()->_q_controlSocketReadNotification(); break;
        case 2: _t->d_func()->_q_controlSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_udpSocketReadNotification(); break;
        case 4: _t->d_func()->_q_controlSocketBytesWritten(); break;
        case 5: _t->d_func()->_q_emitPendingReadNotification(); break;
        case 6: _t->d_func()->_q_emitPendingWriteNotification(); break;
        case 7: _t->d_func()->_q_emitPendingConnectionNotification(); break;
        case 8: _t->d_func()->_q_controlSocketDisconnected(); break;
        case 9: _t->d_func()->_q_controlSocketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSocks5SocketEngine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSocks5SocketEngine::staticMetaObject = {
    { &QAbstractSocketEngine::staticMetaObject, qt_meta_stringdata_QSocks5SocketEngine,
      qt_meta_data_QSocks5SocketEngine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSocks5SocketEngine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSocks5SocketEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSocks5SocketEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSocks5SocketEngine))
        return static_cast<void*>(const_cast< QSocks5SocketEngine*>(this));
    return QAbstractSocketEngine::qt_metacast(_clname);
}

int QSocks5SocketEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSocketEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
