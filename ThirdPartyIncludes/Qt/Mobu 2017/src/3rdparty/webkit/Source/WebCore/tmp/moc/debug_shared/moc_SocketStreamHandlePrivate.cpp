/****************************************************************************
** Meta object code from reading C++ file 'SocketStreamHandlePrivate.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../platform/network/qt/SocketStreamHandlePrivate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SocketStreamHandlePrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebCore__SocketStreamHandlePrivate[] = {

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
      36,   35,   35,   35, 0x0a,
      54,   35,   35,   35, 0x0a,
      85,   76,   72,   35, 0x0a,
     107,   35,   35,   35, 0x0a,
     115,   35,   35,   35, 0x0a,
     132,   35,   35,   35, 0x0a,
     147,   35,   35,   35, 0x0a,
     189,   35,   35,   35, 0x0a,
     212,   35,   35,   35, 0x0a,
     237,   35,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WebCore__SocketStreamHandlePrivate[] = {
    "WebCore::SocketStreamHandlePrivate\0\0"
    "socketConnected()\0socketReadyRead()\0"
    "int\0data,len\0send(const char*,int)\0"
    "close()\0socketSentData()\0socketClosed()\0"
    "socketError(QAbstractSocket::SocketError)\0"
    "socketClosedCallback()\0socketErrorCallback(int)\0"
    "socketSslErrors(QList<QSslError>)\0"
};

void WebCore::SocketStreamHandlePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SocketStreamHandlePrivate *_t = static_cast<SocketStreamHandlePrivate *>(_o);
        switch (_id) {
        case 0: _t->socketConnected(); break;
        case 1: _t->socketReadyRead(); break;
        case 2: { int _r = _t->send((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->close(); break;
        case 4: _t->socketSentData(); break;
        case 5: _t->socketClosed(); break;
        case 6: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->socketClosedCallback(); break;
        case 8: _t->socketErrorCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->socketSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebCore::SocketStreamHandlePrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebCore::SocketStreamHandlePrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__SocketStreamHandlePrivate,
      qt_meta_data_WebCore__SocketStreamHandlePrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebCore::SocketStreamHandlePrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebCore::SocketStreamHandlePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebCore::SocketStreamHandlePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__SocketStreamHandlePrivate))
        return static_cast<void*>(const_cast< SocketStreamHandlePrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::SocketStreamHandlePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
