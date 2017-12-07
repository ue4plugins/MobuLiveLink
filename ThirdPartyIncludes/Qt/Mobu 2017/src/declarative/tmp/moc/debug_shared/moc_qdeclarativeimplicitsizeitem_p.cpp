/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeimplicitsizeitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativeimplicitsizeitem_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeimplicitsizeitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeImplicitSizeItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x85,
      53,   29,   29,   29, 0x85,

 // signals: revision
       1,
       1,

 // properties: name, type, flags
      83,   77, ((uint)QMetaType::QReal << 24) | 0x00c95001,
      97,   77, ((uint)QMetaType::QReal << 24) | 0x00c95001,

 // properties: notify_signal_id
       0,
       1,

 // properties: revision
       1,
       1,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeImplicitSizeItem[] = {
    "QDeclarativeImplicitSizeItem\0\0"
    "implicitWidthChanged()\0implicitHeightChanged()\0"
    "qreal\0implicitWidth\0implicitHeight\0"
};

void QDeclarativeImplicitSizeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeImplicitSizeItem *_t = static_cast<QDeclarativeImplicitSizeItem *>(_o);
        switch (_id) {
        case 0: _t->implicitWidthChanged(); break;
        case 1: _t->implicitHeightChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeImplicitSizeItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeImplicitSizeItem::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_QDeclarativeImplicitSizeItem,
      qt_meta_data_QDeclarativeImplicitSizeItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeImplicitSizeItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeImplicitSizeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeImplicitSizeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeImplicitSizeItem))
        return static_cast<void*>(const_cast< QDeclarativeImplicitSizeItem*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int QDeclarativeImplicitSizeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = implicitWidth(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = implicitHeight(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeImplicitSizeItem::implicitWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeImplicitSizeItem::implicitHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_QDeclarativeImplicitSizePaintedItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x85,
      60,   36,   36,   36, 0x85,

 // signals: revision
       1,
       1,

 // properties: name, type, flags
      90,   84, ((uint)QMetaType::QReal << 24) | 0x00c95001,
     104,   84, ((uint)QMetaType::QReal << 24) | 0x00c95001,

 // properties: notify_signal_id
       0,
       1,

 // properties: revision
       1,
       1,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeImplicitSizePaintedItem[] = {
    "QDeclarativeImplicitSizePaintedItem\0"
    "\0implicitWidthChanged()\0implicitHeightChanged()\0"
    "qreal\0implicitWidth\0implicitHeight\0"
};

void QDeclarativeImplicitSizePaintedItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeImplicitSizePaintedItem *_t = static_cast<QDeclarativeImplicitSizePaintedItem *>(_o);
        switch (_id) {
        case 0: _t->implicitWidthChanged(); break;
        case 1: _t->implicitHeightChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeImplicitSizePaintedItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeImplicitSizePaintedItem::staticMetaObject = {
    { &QDeclarativePaintedItem::staticMetaObject, qt_meta_stringdata_QDeclarativeImplicitSizePaintedItem,
      qt_meta_data_QDeclarativeImplicitSizePaintedItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeImplicitSizePaintedItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeImplicitSizePaintedItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeImplicitSizePaintedItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeImplicitSizePaintedItem))
        return static_cast<void*>(const_cast< QDeclarativeImplicitSizePaintedItem*>(this));
    return QDeclarativePaintedItem::qt_metacast(_clname);
}

int QDeclarativeImplicitSizePaintedItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativePaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = implicitWidth(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = implicitHeight(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeImplicitSizePaintedItem::implicitWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeImplicitSizePaintedItem::implicitHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
