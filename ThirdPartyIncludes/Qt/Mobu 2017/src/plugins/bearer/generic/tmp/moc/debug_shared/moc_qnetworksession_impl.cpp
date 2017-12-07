/****************************************************************************
** Meta object code from reading C++ file 'qnetworksession_impl.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qnetworksession_impl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworksession_impl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QNetworkSessionPrivateImpl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x08,
      66,   59,   27,   27, 0x08,
     124,   59,   27,   27, 0x08,
     175,  166,   27,   27, 0x08,
     235,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QNetworkSessionPrivateImpl[] = {
    "QNetworkSessionPrivateImpl\0\0"
    "networkConfigurationsChanged()\0config\0"
    "configurationChanged(QNetworkConfigurationPrivatePointer)\0"
    "forcedSessionClose(QNetworkConfiguration)\0"
    "id,error\0"
    "connectionError(QString,QBearerEngineImpl::ConnectionError)\0"
    "decrementTimeout()\0"
};

void QNetworkSessionPrivateImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNetworkSessionPrivateImpl *_t = static_cast<QNetworkSessionPrivateImpl *>(_o);
        switch (_id) {
        case 0: _t->networkConfigurationsChanged(); break;
        case 1: _t->configurationChanged((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 2: _t->forcedSessionClose((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 3: _t->connectionError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QBearerEngineImpl::ConnectionError(*)>(_a[2]))); break;
        case 4: _t->decrementTimeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QNetworkSessionPrivateImpl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNetworkSessionPrivateImpl::staticMetaObject = {
    { &QNetworkSessionPrivate::staticMetaObject, qt_meta_stringdata_QNetworkSessionPrivateImpl,
      qt_meta_data_QNetworkSessionPrivateImpl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNetworkSessionPrivateImpl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNetworkSessionPrivateImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNetworkSessionPrivateImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkSessionPrivateImpl))
        return static_cast<void*>(const_cast< QNetworkSessionPrivateImpl*>(this));
    return QNetworkSessionPrivate::qt_metacast(_clname);
}

int QNetworkSessionPrivateImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkSessionPrivate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
