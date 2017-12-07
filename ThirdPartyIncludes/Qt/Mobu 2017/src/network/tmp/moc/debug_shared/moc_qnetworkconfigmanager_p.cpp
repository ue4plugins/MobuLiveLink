/****************************************************************************
** Meta object code from reading C++ file 'qnetworkconfigmanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bearer/qnetworkconfigmanager_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkconfigmanager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QNetworkConfigurationManagerPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      44,   37,   36,   36, 0x05,
      86,   37,   36,   36, 0x05,
     130,   37,   36,   36, 0x05,
     174,   36,   36,   36, 0x05,
     213,  204,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
     238,   36,   36,   36, 0x0a,
     261,   36,   36,   36, 0x0a,
     282,  278,   36,   36, 0x08,
     338,  278,   36,   36, 0x08,
     396,  278,   36,   36, 0x08,
     454,   36,   36,   36, 0x08,

 // methods: signature, parameters, type, tag, flags
     468,   36,   36,   36, 0x00,

       0        // eod
};

static const char qt_meta_stringdata_QNetworkConfigurationManagerPrivate[] = {
    "QNetworkConfigurationManagerPrivate\0"
    "\0config\0configurationAdded(QNetworkConfiguration)\0"
    "configurationRemoved(QNetworkConfiguration)\0"
    "configurationChanged(QNetworkConfiguration)\0"
    "configurationUpdateComplete()\0isOnline\0"
    "onlineStateChanged(bool)\0"
    "updateConfigurations()\0addPostRoutine()\0"
    "ptr\0configurationAdded(QNetworkConfigurationPrivatePointer)\0"
    "configurationRemoved(QNetworkConfigurationPrivatePointer)\0"
    "configurationChanged(QNetworkConfigurationPrivatePointer)\0"
    "pollEngines()\0startPolling()\0"
};

void QNetworkConfigurationManagerPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNetworkConfigurationManagerPrivate *_t = static_cast<QNetworkConfigurationManagerPrivate *>(_o);
        switch (_id) {
        case 0: _t->configurationAdded((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 1: _t->configurationRemoved((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 2: _t->configurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 3: _t->configurationUpdateComplete(); break;
        case 4: _t->onlineStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->updateConfigurations(); break;
        case 6: _t->addPostRoutine(); break;
        case 7: _t->configurationAdded((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 8: _t->configurationRemoved((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 9: _t->configurationChanged((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 10: _t->pollEngines(); break;
        case 11: _t->startPolling(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QNetworkConfigurationManagerPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNetworkConfigurationManagerPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNetworkConfigurationManagerPrivate,
      qt_meta_data_QNetworkConfigurationManagerPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNetworkConfigurationManagerPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNetworkConfigurationManagerPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNetworkConfigurationManagerPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkConfigurationManagerPrivate))
        return static_cast<void*>(const_cast< QNetworkConfigurationManagerPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int QNetworkConfigurationManagerPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QNetworkConfigurationManagerPrivate::configurationAdded(const QNetworkConfiguration & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkConfigurationManagerPrivate::configurationRemoved(const QNetworkConfiguration & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkConfigurationManagerPrivate::configurationChanged(const QNetworkConfiguration & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkConfigurationManagerPrivate::configurationUpdateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QNetworkConfigurationManagerPrivate::onlineStateChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
