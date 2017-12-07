/****************************************************************************
** Meta object code from reading C++ file 'qnetworkconfigmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bearer/qnetworkconfigmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkconfigmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QNetworkConfigurationManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   30,   29,   29, 0x05,
      79,   30,   29,   29, 0x05,
     123,   30,   29,   29, 0x05,
     176,  167,   29,   29, 0x05,
     201,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
     219,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QNetworkConfigurationManager[] = {
    "QNetworkConfigurationManager\0\0config\0"
    "configurationAdded(QNetworkConfiguration)\0"
    "configurationRemoved(QNetworkConfiguration)\0"
    "configurationChanged(QNetworkConfiguration)\0"
    "isOnline\0onlineStateChanged(bool)\0"
    "updateCompleted()\0updateConfigurations()\0"
};

void QNetworkConfigurationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNetworkConfigurationManager *_t = static_cast<QNetworkConfigurationManager *>(_o);
        switch (_id) {
        case 0: _t->configurationAdded((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 1: _t->configurationRemoved((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 2: _t->configurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 3: _t->onlineStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateCompleted(); break;
        case 5: _t->updateConfigurations(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QNetworkConfigurationManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNetworkConfigurationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNetworkConfigurationManager,
      qt_meta_data_QNetworkConfigurationManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNetworkConfigurationManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNetworkConfigurationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNetworkConfigurationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkConfigurationManager))
        return static_cast<void*>(const_cast< QNetworkConfigurationManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QNetworkConfigurationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QNetworkConfigurationManager::configurationAdded(const QNetworkConfiguration & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkConfigurationManager::configurationRemoved(const QNetworkConfiguration & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkConfigurationManager::configurationChanged(const QNetworkConfiguration & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkConfigurationManager::onlineStateChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNetworkConfigurationManager::updateCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
