/****************************************************************************
** Meta object code from reading C++ file 'NetworkStateNotifierPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../platform/network/qt/NetworkStateNotifierPrivate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkStateNotifierPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebCore__NetworkStateNotifierPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   37,   37,   37, 0x0a,
      63,   37,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WebCore__NetworkStateNotifierPrivate[] = {
    "WebCore::NetworkStateNotifierPrivate\0"
    "\0onlineStateChanged(bool)\0"
    "networkAccessPermissionChanged(bool)\0"
};

void WebCore::NetworkStateNotifierPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetworkStateNotifierPrivate *_t = static_cast<NetworkStateNotifierPrivate *>(_o);
        switch (_id) {
        case 0: _t->onlineStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->networkAccessPermissionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebCore::NetworkStateNotifierPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebCore::NetworkStateNotifierPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__NetworkStateNotifierPrivate,
      qt_meta_data_WebCore__NetworkStateNotifierPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebCore::NetworkStateNotifierPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebCore::NetworkStateNotifierPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebCore::NetworkStateNotifierPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__NetworkStateNotifierPrivate))
        return static_cast<void*>(const_cast< NetworkStateNotifierPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::NetworkStateNotifierPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
