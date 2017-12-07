/****************************************************************************
** Meta object code from reading C++ file 'DnsPrefetchHelper.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../platform/network/qt/DnsPrefetchHelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DnsPrefetchHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebCore__DnsPrefetchHelper[] = {

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
      37,   28,   27,   27, 0x0a,
      53,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WebCore__DnsPrefetchHelper[] = {
    "WebCore::DnsPrefetchHelper\0\0hostname\0"
    "lookup(QString)\0lookedUp(QHostInfo)\0"
};

void WebCore::DnsPrefetchHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DnsPrefetchHelper *_t = static_cast<DnsPrefetchHelper *>(_o);
        switch (_id) {
        case 0: _t->lookup((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->lookedUp((*reinterpret_cast< const QHostInfo(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebCore::DnsPrefetchHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebCore::DnsPrefetchHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__DnsPrefetchHelper,
      qt_meta_data_WebCore__DnsPrefetchHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebCore::DnsPrefetchHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebCore::DnsPrefetchHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebCore::DnsPrefetchHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__DnsPrefetchHelper))
        return static_cast<void*>(const_cast< DnsPrefetchHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::DnsPrefetchHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
