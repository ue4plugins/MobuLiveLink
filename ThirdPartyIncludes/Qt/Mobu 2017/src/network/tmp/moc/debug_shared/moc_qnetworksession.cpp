/****************************************************************************
** Meta object code from reading C++ file 'qnetworksession.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bearer/qnetworksession.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworksession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QNetworkSession[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      54,   16,   16,   16, 0x05,
      63,   16,   16,   16, 0x05,
      72,   16,   16,   16, 0x05,
     127,  109,   16,   16, 0x05,
     185,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     213,   16,   16,   16, 0x0a,
     220,   16,   16,   16, 0x0a,
     228,   16,   16,   16, 0x0a,
     235,   16,   16,   16, 0x0a,
     245,   16,   16,   16, 0x0a,
     254,   16,   16,   16, 0x0a,
     263,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QNetworkSession[] = {
    "QNetworkSession\0\0stateChanged(QNetworkSession::State)\0"
    "opened()\0closed()\0"
    "error(QNetworkSession::SessionError)\0"
    "config,isSeamless\0"
    "preferredConfigurationChanged(QNetworkConfiguration,bool)\0"
    "newConfigurationActivated()\0open()\0"
    "close()\0stop()\0migrate()\0ignore()\0"
    "accept()\0reject()\0"
};

void QNetworkSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNetworkSession *_t = static_cast<QNetworkSession *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QNetworkSession::State(*)>(_a[1]))); break;
        case 1: _t->opened(); break;
        case 2: _t->closed(); break;
        case 3: _t->error((*reinterpret_cast< QNetworkSession::SessionError(*)>(_a[1]))); break;
        case 4: _t->preferredConfigurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->newConfigurationActivated(); break;
        case 6: _t->open(); break;
        case 7: _t->close(); break;
        case 8: _t->stop(); break;
        case 9: _t->migrate(); break;
        case 10: _t->ignore(); break;
        case 11: _t->accept(); break;
        case 12: _t->reject(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QNetworkSession::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNetworkSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNetworkSession,
      qt_meta_data_QNetworkSession, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNetworkSession::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNetworkSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNetworkSession::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkSession))
        return static_cast<void*>(const_cast< QNetworkSession*>(this));
    return QObject::qt_metacast(_clname);
}

int QNetworkSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QNetworkSession::stateChanged(QNetworkSession::State _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkSession::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QNetworkSession::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QNetworkSession::error(QNetworkSession::SessionError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNetworkSession::preferredConfigurationChanged(const QNetworkConfiguration & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QNetworkSession::newConfigurationActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
