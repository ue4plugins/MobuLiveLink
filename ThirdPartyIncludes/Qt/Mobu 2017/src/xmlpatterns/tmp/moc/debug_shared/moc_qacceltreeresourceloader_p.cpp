/****************************************************************************
** Meta object code from reading C++ file 'qacceltreeresourceloader_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../acceltree/qacceltreeresourceloader_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qacceltreeresourceloader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPatternist__NetworkLoop[] = {

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
      31,   26,   25,   25, 0x0a,
      66,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QPatternist__NetworkLoop[] = {
    "QPatternist::NetworkLoop\0\0code\0"
    "error(QNetworkReply::NetworkError)\0"
    "finished()\0"
};

void QPatternist::NetworkLoop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetworkLoop *_t = static_cast<NetworkLoop *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPatternist::NetworkLoop::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPatternist::NetworkLoop::staticMetaObject = {
    { &QEventLoop::staticMetaObject, qt_meta_stringdata_QPatternist__NetworkLoop,
      qt_meta_data_QPatternist__NetworkLoop, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPatternist::NetworkLoop::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPatternist::NetworkLoop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPatternist::NetworkLoop::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPatternist__NetworkLoop))
        return static_cast<void*>(const_cast< NetworkLoop*>(this));
    return QEventLoop::qt_metacast(_clname);
}

int QPatternist::NetworkLoop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEventLoop::qt_metacall(_c, _id, _a);
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
