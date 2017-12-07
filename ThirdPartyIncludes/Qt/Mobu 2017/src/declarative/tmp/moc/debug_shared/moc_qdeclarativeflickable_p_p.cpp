/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeflickable_p_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativeflickable_p_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeflickable_p_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeFlickableVisibleArea[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      44,   34,   33,   33, 0x05,
      78,   68,   33,   33, 0x05,
     113,  102,   33,   33, 0x05,
     150,  138,   33,   33, 0x05,

 // properties: name, type, flags
      34,  176, ((uint)QMetaType::QReal << 24) | 0x00495001,
      68,  176, ((uint)QMetaType::QReal << 24) | 0x00495001,
     102,  176, ((uint)QMetaType::QReal << 24) | 0x00495001,
     138,  176, ((uint)QMetaType::QReal << 24) | 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeFlickableVisibleArea[] = {
    "QDeclarativeFlickableVisibleArea\0\0"
    "xPosition\0xPositionChanged(qreal)\0"
    "yPosition\0yPositionChanged(qreal)\0"
    "widthRatio\0widthRatioChanged(qreal)\0"
    "heightRatio\0heightRatioChanged(qreal)\0"
    "qreal\0"
};

void QDeclarativeFlickableVisibleArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeFlickableVisibleArea *_t = static_cast<QDeclarativeFlickableVisibleArea *>(_o);
        switch (_id) {
        case 0: _t->xPositionChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->yPositionChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->widthRatioChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->heightRatioChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeFlickableVisibleArea::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeFlickableVisibleArea::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeFlickableVisibleArea,
      qt_meta_data_QDeclarativeFlickableVisibleArea, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeFlickableVisibleArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeFlickableVisibleArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeFlickableVisibleArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeFlickableVisibleArea))
        return static_cast<void*>(const_cast< QDeclarativeFlickableVisibleArea*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeFlickableVisibleArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< qreal*>(_v) = xPosition(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = yPosition(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = widthRatio(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = heightRatio(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeFlickableVisibleArea::xPositionChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeFlickableVisibleArea::yPositionChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDeclarativeFlickableVisibleArea::widthRatioChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDeclarativeFlickableVisibleArea::heightRatioChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
