/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativepainteditem_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativepainteditem_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativepainteditem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativePaintedItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      44,   24,   24,   24, 0x05,
      66,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   24,   24,   24, 0x09,
     107,   24,   24,   24, 0x09,

 // properties: name, type, flags
     126,  120, 0x15495103,
     146,  139, 0x43495103,
     160,  156, 0x02095103,
     180,  175, 0x01095103,
     198,  192, ((uint)QMetaType::QReal << 24) | 0x00495103,

 // properties: notify_signal_id
       1,
       0,
       0,
       0,
       2,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePaintedItem[] = {
    "QDeclarativePaintedItem\0\0fillColorChanged()\0"
    "contentsSizeChanged()\0contentsScaleChanged()\0"
    "dirtyCache(QRect)\0clearCache()\0QSize\0"
    "contentsSize\0QColor\0fillColor\0int\0"
    "pixelCacheSize\0bool\0smoothCache\0qreal\0"
    "contentsScale\0"
};

void QDeclarativePaintedItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativePaintedItem *_t = static_cast<QDeclarativePaintedItem *>(_o);
        switch (_id) {
        case 0: _t->fillColorChanged(); break;
        case 1: _t->contentsSizeChanged(); break;
        case 2: _t->contentsScaleChanged(); break;
        case 3: _t->dirtyCache((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 4: _t->clearCache(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativePaintedItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePaintedItem::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_QDeclarativePaintedItem,
      qt_meta_data_QDeclarativePaintedItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePaintedItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePaintedItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePaintedItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePaintedItem))
        return static_cast<void*>(const_cast< QDeclarativePaintedItem*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int QDeclarativePaintedItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = contentsSize(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = fillColor(); break;
        case 2: *reinterpret_cast< int*>(_v) = pixelCacheSize(); break;
        case 3: *reinterpret_cast< bool*>(_v) = smoothCache(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = contentsScale(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setContentsSize(*reinterpret_cast< QSize*>(_v)); break;
        case 1: setFillColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setPixelCacheSize(*reinterpret_cast< int*>(_v)); break;
        case 3: setSmoothCache(*reinterpret_cast< bool*>(_v)); break;
        case 4: setContentsScale(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativePaintedItem::fillColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativePaintedItem::contentsSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativePaintedItem::contentsScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
