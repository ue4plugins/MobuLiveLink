/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeimage_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativeimage_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeimage_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeImage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   24, // properties
       1,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      37,   18,   18,   18, 0x05,

 // properties: name, type, flags
      71,   62, 0x0049510b,
      86,   80, ((uint)QMetaType::QReal << 24) | 0x00495001,
      99,   80, ((uint)QMetaType::QReal << 24) | 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       1,

 // enums: name, flags, count, data
      62, 0x0,    6,   40,

 // enum data: key, value
     113, uint(QDeclarativeImage::Stretch),
     121, uint(QDeclarativeImage::PreserveAspectFit),
     139, uint(QDeclarativeImage::PreserveAspectCrop),
     158, uint(QDeclarativeImage::Tile),
     163, uint(QDeclarativeImage::TileVertically),
     178, uint(QDeclarativeImage::TileHorizontally),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeImage[] = {
    "QDeclarativeImage\0\0fillModeChanged()\0"
    "paintedGeometryChanged()\0FillMode\0"
    "fillMode\0qreal\0paintedWidth\0paintedHeight\0"
    "Stretch\0PreserveAspectFit\0PreserveAspectCrop\0"
    "Tile\0TileVertically\0TileHorizontally\0"
};

void QDeclarativeImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeImage *_t = static_cast<QDeclarativeImage *>(_o);
        switch (_id) {
        case 0: _t->fillModeChanged(); break;
        case 1: _t->paintedGeometryChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeImage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeImage::staticMetaObject = {
    { &QDeclarativeImageBase::staticMetaObject, qt_meta_stringdata_QDeclarativeImage,
      qt_meta_data_QDeclarativeImage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeImage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeImage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeImage))
        return static_cast<void*>(const_cast< QDeclarativeImage*>(this));
    return QDeclarativeImageBase::qt_metacast(_clname);
}

int QDeclarativeImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeImageBase::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< FillMode*>(_v) = fillMode(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = paintedWidth(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = paintedHeight(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFillMode(*reinterpret_cast< FillMode*>(_v)); break;
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
void QDeclarativeImage::fillModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeImage::paintedGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
