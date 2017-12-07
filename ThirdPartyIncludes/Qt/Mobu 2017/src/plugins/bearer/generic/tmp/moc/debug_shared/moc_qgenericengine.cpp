/****************************************************************************
** Meta object code from reading C++ file 'qgenericengine.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qgenericengine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgenericengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGenericEngine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,

 // methods: signature, parameters, type, tag, flags
      34,   15,   15,   15, 0x02,
      47,   15,   15,   15, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_QGenericEngine[] = {
    "QGenericEngine\0\0doRequestUpdate()\0"
    "initialize()\0requestUpdate()\0"
};

void QGenericEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGenericEngine *_t = static_cast<QGenericEngine *>(_o);
        switch (_id) {
        case 0: _t->doRequestUpdate(); break;
        case 1: _t->initialize(); break;
        case 2: _t->requestUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QGenericEngine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGenericEngine::staticMetaObject = {
    { &QBearerEngineImpl::staticMetaObject, qt_meta_stringdata_QGenericEngine,
      qt_meta_data_QGenericEngine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGenericEngine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGenericEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGenericEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGenericEngine))
        return static_cast<void*>(const_cast< QGenericEngine*>(this));
    return QBearerEngineImpl::qt_metacast(_clname);
}

int QGenericEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBearerEngineImpl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
