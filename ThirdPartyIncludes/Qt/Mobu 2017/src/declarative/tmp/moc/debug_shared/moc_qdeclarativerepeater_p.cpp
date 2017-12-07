/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativerepeater_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativerepeater_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativerepeater_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeRepeater[] = {

 // content:
       6,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       3,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
      30,   21,

 // signals: signature, parameters, type, tag, flags
      47,   46,   46,   46, 0x05,
      62,   46,   46,   46, 0x05,
      80,   46,   46,   46, 0x05,
     106,   95,   46,   46, 0x85,
     139,   95,   46,   46, 0x85,

 // slots: signature, parameters, type, tag, flags
     176,  174,   46,   46, 0x08,
     199,  174,   46,   46, 0x08,
     224,  221,   46,   46, 0x08,
     248,   46,   46,   46, 0x08,

 // methods: signature, parameters, type, tag, flags
     285,  279,  261,   46, 0x82,

 // signals: revision
       0,
       0,
       0,
       1,
       1,

 // slots: revision
       0,
       0,
       0,
       0,

 // methods: revision
       1,

 // properties: name, type, flags
     306,  297, 0xff495103,
      21,  312, 0x0049510b,
     339,  335, 0x02495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeRepeater[] = {
    "QDeclarativeRepeater\0delegate\0"
    "DefaultProperty\0\0modelChanged()\0"
    "delegateChanged()\0countChanged()\0"
    "index,item\0itemAdded(int,QDeclarativeItem*)\0"
    "itemRemoved(int,QDeclarativeItem*)\0,\0"
    "itemsInserted(int,int)\0itemsRemoved(int,int)\0"
    ",,\0itemsMoved(int,int,int)\0modelReset()\0"
    "QDeclarativeItem*\0index\0itemAt(int)\0"
    "QVariant\0model\0QDeclarativeComponent*\0"
    "int\0count\0"
};

void QDeclarativeRepeater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeRepeater *_t = static_cast<QDeclarativeRepeater *>(_o);
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->delegateChanged(); break;
        case 2: _t->countChanged(); break;
        case 3: _t->itemAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QDeclarativeItem*(*)>(_a[2]))); break;
        case 4: _t->itemRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QDeclarativeItem*(*)>(_a[2]))); break;
        case 5: _t->itemsInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->itemsRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->itemsMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->modelReset(); break;
        case 9: { QDeclarativeItem* _r = _t->itemAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDeclarativeItem**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeRepeater::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeRepeater::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_QDeclarativeRepeater,
      qt_meta_data_QDeclarativeRepeater, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeRepeater::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeRepeater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeRepeater::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeRepeater))
        return static_cast<void*>(const_cast< QDeclarativeRepeater*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int QDeclarativeRepeater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = model(); break;
        case 1: *reinterpret_cast< QDeclarativeComponent**>(_v) = delegate(); break;
        case 2: *reinterpret_cast< int*>(_v) = count(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setModel(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: setDelegate(*reinterpret_cast< QDeclarativeComponent**>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeRepeater::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeRepeater::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeRepeater::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeRepeater::itemAdded(int _t1, QDeclarativeItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDeclarativeRepeater::itemRemoved(int _t1, QDeclarativeItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
