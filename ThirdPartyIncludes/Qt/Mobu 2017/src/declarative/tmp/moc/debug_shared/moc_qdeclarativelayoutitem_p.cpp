/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativelayoutitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativelayoutitem_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativelayoutitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeLayoutItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      45,   23,   23,   23, 0x05,
      66,   23,   23,   23, 0x05,

 // properties: name, type, flags
      96,   89, 0x16495103,
     108,   89, 0x16495103,
     120,   89, 0x16495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeLayoutItem[] = {
    "QDeclarativeLayoutItem\0\0maximumSizeChanged()\0"
    "minimumSizeChanged()\0preferredSizeChanged()\0"
    "QSizeF\0maximumSize\0minimumSize\0"
    "preferredSize\0"
};

void QDeclarativeLayoutItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeLayoutItem *_t = static_cast<QDeclarativeLayoutItem *>(_o);
        switch (_id) {
        case 0: _t->maximumSizeChanged(); break;
        case 1: _t->minimumSizeChanged(); break;
        case 2: _t->preferredSizeChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeLayoutItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeLayoutItem::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_QDeclarativeLayoutItem,
      qt_meta_data_QDeclarativeLayoutItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeLayoutItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeLayoutItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeLayoutItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeLayoutItem))
        return static_cast<void*>(const_cast< QDeclarativeLayoutItem*>(this));
    if (!strcmp(_clname, "QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< QDeclarativeLayoutItem*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< QDeclarativeLayoutItem*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int QDeclarativeLayoutItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSizeF*>(_v) = maximumSize(); break;
        case 1: *reinterpret_cast< QSizeF*>(_v) = minimumSize(); break;
        case 2: *reinterpret_cast< QSizeF*>(_v) = preferredSize(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMaximumSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 1: setMinimumSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 2: setPreferredSize(*reinterpret_cast< QSizeF*>(_v)); break;
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
void QDeclarativeLayoutItem::maximumSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeLayoutItem::minimumSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeLayoutItem::preferredSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
