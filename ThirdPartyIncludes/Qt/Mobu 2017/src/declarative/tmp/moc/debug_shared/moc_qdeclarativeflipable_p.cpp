/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeflipable_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativeflipable_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeflipable_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeFlipable[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   34, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      37,   21,   21,   21, 0x05,
      51,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   21,   21,   21, 0x08,

 // properties: name, type, flags
     100,   83, 0x0049510b,
     106,   83, 0x0049510b,
     116,  111, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
     111, 0x0,    2,   50,

 // enum data: key, value
     121, uint(QDeclarativeFlipable::Front),
     127, uint(QDeclarativeFlipable::Back),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeFlipable[] = {
    "QDeclarativeFlipable\0\0frontChanged()\0"
    "backChanged()\0sideChanged()\0"
    "retransformBack()\0QGraphicsObject*\0"
    "front\0back\0Side\0side\0Front\0Back\0"
};

void QDeclarativeFlipable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeFlipable *_t = static_cast<QDeclarativeFlipable *>(_o);
        switch (_id) {
        case 0: _t->frontChanged(); break;
        case 1: _t->backChanged(); break;
        case 2: _t->sideChanged(); break;
        case 3: _t->retransformBack(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeFlipable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeFlipable::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_QDeclarativeFlipable,
      qt_meta_data_QDeclarativeFlipable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeFlipable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeFlipable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeFlipable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeFlipable))
        return static_cast<void*>(const_cast< QDeclarativeFlipable*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int QDeclarativeFlipable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGraphicsObject**>(_v) = front(); break;
        case 1: *reinterpret_cast< QGraphicsObject**>(_v) = back(); break;
        case 2: *reinterpret_cast< Side*>(_v) = side(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFront(*reinterpret_cast< QGraphicsObject**>(_v)); break;
        case 1: setBack(*reinterpret_cast< QGraphicsObject**>(_v)); break;
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
void QDeclarativeFlipable::frontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeFlipable::backChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeFlipable::sideChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
