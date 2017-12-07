/****************************************************************************
** Meta object code from reading C++ file 'qhttpsocketengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../socket/qhttpsocketengine_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttpsocketengine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QHttpSocketEngine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      41,   18,   18,   18, 0x0a,
      66,   18,   18,   18, 0x0a,
      95,   18,   18,   18, 0x0a,
     126,  120,   18,   18, 0x0a,
     178,  172,   18,   18, 0x0a,
     231,   18,   18,   18, 0x08,
     261,   18,   18,   18, 0x08,
     292,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QHttpSocketEngine[] = {
    "QHttpSocketEngine\0\0slotSocketConnected()\0"
    "slotSocketDisconnected()\0"
    "slotSocketReadNotification()\0"
    "slotSocketBytesWritten()\0error\0"
    "slotSocketError(QAbstractSocket::SocketError)\0"
    "state\0slotSocketStateChanged(QAbstractSocket::SocketState)\0"
    "emitPendingReadNotification()\0"
    "emitPendingWriteNotification()\0"
    "emitPendingConnectionNotification()\0"
};

void QHttpSocketEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QHttpSocketEngine *_t = static_cast<QHttpSocketEngine *>(_o);
        switch (_id) {
        case 0: _t->slotSocketConnected(); break;
        case 1: _t->slotSocketDisconnected(); break;
        case 2: _t->slotSocketReadNotification(); break;
        case 3: _t->slotSocketBytesWritten(); break;
        case 4: _t->slotSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->slotSocketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 6: _t->emitPendingReadNotification(); break;
        case 7: _t->emitPendingWriteNotification(); break;
        case 8: _t->emitPendingConnectionNotification(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QHttpSocketEngine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QHttpSocketEngine::staticMetaObject = {
    { &QAbstractSocketEngine::staticMetaObject, qt_meta_stringdata_QHttpSocketEngine,
      qt_meta_data_QHttpSocketEngine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QHttpSocketEngine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QHttpSocketEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QHttpSocketEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHttpSocketEngine))
        return static_cast<void*>(const_cast< QHttpSocketEngine*>(this));
    return QAbstractSocketEngine::qt_metacast(_clname);
}

int QHttpSocketEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSocketEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
