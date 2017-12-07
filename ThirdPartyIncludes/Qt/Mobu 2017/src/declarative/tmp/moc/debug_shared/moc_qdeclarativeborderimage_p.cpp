/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeborderimage_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativeborderimage_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeborderimage_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeBorderImage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   39, // properties
       1,   51, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      53,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   24,   24,   24, 0x08,
      90,   24,   24,   24, 0x08,
     108,   24,   24,   24, 0x08,

 // properties: name, type, flags
     152,  129, 0x00095409,
     168,  159, 0x0049510b,
     187,  159, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,

 // enums: name, flags, count, data
     159, 0x0,    3,   55,

 // enum data: key, value
     204, uint(QDeclarativeBorderImage::Stretch),
     212, uint(QDeclarativeBorderImage::Repeat),
     219, uint(QDeclarativeBorderImage::Round),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeBorderImage[] = {
    "QDeclarativeBorderImage\0\0"
    "horizontalTileModeChanged()\0"
    "verticalTileModeChanged()\0doUpdate()\0"
    "requestFinished()\0sciRequestFinished()\0"
    "QDeclarativeScaleGrid*\0border\0TileMode\0"
    "horizontalTileMode\0verticalTileMode\0"
    "Stretch\0Repeat\0Round\0"
};

void QDeclarativeBorderImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeBorderImage *_t = static_cast<QDeclarativeBorderImage *>(_o);
        switch (_id) {
        case 0: _t->horizontalTileModeChanged(); break;
        case 1: _t->verticalTileModeChanged(); break;
        case 2: _t->doUpdate(); break;
        case 3: _t->requestFinished(); break;
        case 4: _t->sciRequestFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeBorderImage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeBorderImage::staticMetaObject = {
    { &QDeclarativeImageBase::staticMetaObject, qt_meta_stringdata_QDeclarativeBorderImage,
      qt_meta_data_QDeclarativeBorderImage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeBorderImage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeBorderImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeBorderImage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeBorderImage))
        return static_cast<void*>(const_cast< QDeclarativeBorderImage*>(this));
    return QDeclarativeImageBase::qt_metacast(_clname);
}

int QDeclarativeBorderImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeImageBase::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QDeclarativeScaleGrid**>(_v) = border(); break;
        case 1: *reinterpret_cast< TileMode*>(_v) = horizontalTileMode(); break;
        case 2: *reinterpret_cast< TileMode*>(_v) = verticalTileMode(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setHorizontalTileMode(*reinterpret_cast< TileMode*>(_v)); break;
        case 2: setVerticalTileMode(*reinterpret_cast< TileMode*>(_v)); break;
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
void QDeclarativeBorderImage::horizontalTileModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeBorderImage::verticalTileModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
