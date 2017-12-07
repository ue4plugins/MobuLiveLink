/****************************************************************************
** Meta object code from reading C++ file 'qbearerengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bearer/qbearerengine_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbearerengine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QBearerEngine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   15,   14,   14, 0x05,
      78,   15,   14,   14, 0x05,
     136,   15,   14,   14, 0x05,
     194,   14,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QBearerEngine[] = {
    "QBearerEngine\0\0config\0"
    "configurationAdded(QNetworkConfigurationPrivatePointer)\0"
    "configurationRemoved(QNetworkConfigurationPrivatePointer)\0"
    "configurationChanged(QNetworkConfigurationPrivatePointer)\0"
    "updateCompleted()\0"
};

void QBearerEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QBearerEngine *_t = static_cast<QBearerEngine *>(_o);
        switch (_id) {
        case 0: _t->configurationAdded((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 1: _t->configurationRemoved((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 2: _t->configurationChanged((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 3: _t->updateCompleted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QBearerEngine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QBearerEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QBearerEngine,
      qt_meta_data_QBearerEngine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QBearerEngine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QBearerEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QBearerEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QBearerEngine))
        return static_cast<void*>(const_cast< QBearerEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int QBearerEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QBearerEngine::configurationAdded(QNetworkConfigurationPrivatePointer _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QBearerEngine::configurationRemoved(QNetworkConfigurationPrivatePointer _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QBearerEngine::configurationChanged(QNetworkConfigurationPrivatePointer _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QBearerEngine::updateCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
