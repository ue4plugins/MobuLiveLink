/****************************************************************************
** Meta object code from reading C++ file 'qsql_psql.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../sql/drivers/psql/qsql_psql.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsql_psql.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPSQLDriver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   18,   13,   12, 0x09,
      70,   18,   13,   12, 0x09,
     133,   12,  121,   12, 0x09,
     175,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QPSQLDriver[] = {
    "QPSQLDriver\0\0bool\0name\0"
    "subscribeToNotificationImplementation(QString)\0"
    "unsubscribeFromNotificationImplementation(QString)\0"
    "QStringList\0subscribedToNotificationsImplementation()\0"
    "_q_handleNotification(int)\0"
};

void QPSQLDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPSQLDriver *_t = static_cast<QPSQLDriver *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->subscribeToNotificationImplementation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->unsubscribeFromNotificationImplementation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { QStringList _r = _t->subscribedToNotificationsImplementation();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 3: _t->_q_handleNotification((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPSQLDriver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPSQLDriver::staticMetaObject = {
    { &QSqlDriver::staticMetaObject, qt_meta_stringdata_QPSQLDriver,
      qt_meta_data_QPSQLDriver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPSQLDriver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPSQLDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPSQLDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPSQLDriver))
        return static_cast<void*>(const_cast< QPSQLDriver*>(this));
    return QSqlDriver::qt_metacast(_clname);
}

int QPSQLDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlDriver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
