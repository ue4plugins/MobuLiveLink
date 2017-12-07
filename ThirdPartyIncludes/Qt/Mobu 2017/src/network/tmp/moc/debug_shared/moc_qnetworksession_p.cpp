/****************************************************************************
** Meta object code from reading C++ file 'qnetworksession_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bearer/qnetworksession_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworksession_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QNetworkSessionPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      58,   52,   23,   23, 0x05,
     101,   95,   23,   23, 0x05,
     138,   23,   23,   23, 0x05,
     147,   23,   23,   23, 0x05,
     193,  175,   23,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QNetworkSessionPrivate[] = {
    "QNetworkSessionPrivate\0\0"
    "quitPendingWaitsForOpened()\0error\0"
    "error(QNetworkSession::SessionError)\0"
    "state\0stateChanged(QNetworkSession::State)\0"
    "closed()\0newConfigurationActivated()\0"
    "config,isSeamless\0"
    "preferredConfigurationChanged(QNetworkConfiguration,bool)\0"
};

void QNetworkSessionPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNetworkSessionPrivate *_t = static_cast<QNetworkSessionPrivate *>(_o);
        switch (_id) {
        case 0: _t->quitPendingWaitsForOpened(); break;
        case 1: _t->error((*reinterpret_cast< QNetworkSession::SessionError(*)>(_a[1]))); break;
        case 2: _t->stateChanged((*reinterpret_cast< QNetworkSession::State(*)>(_a[1]))); break;
        case 3: _t->closed(); break;
        case 4: _t->newConfigurationActivated(); break;
        case 5: _t->preferredConfigurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QNetworkSessionPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNetworkSessionPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNetworkSessionPrivate,
      qt_meta_data_QNetworkSessionPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNetworkSessionPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNetworkSessionPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNetworkSessionPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkSessionPrivate))
        return static_cast<void*>(const_cast< QNetworkSessionPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int QNetworkSessionPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QNetworkSessionPrivate::quitPendingWaitsForOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QNetworkSessionPrivate::error(QNetworkSession::SessionError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkSessionPrivate::stateChanged(QNetworkSession::State _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkSessionPrivate::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QNetworkSessionPrivate::newConfigurationActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QNetworkSessionPrivate::preferredConfigurationChanged(const QNetworkConfiguration & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
