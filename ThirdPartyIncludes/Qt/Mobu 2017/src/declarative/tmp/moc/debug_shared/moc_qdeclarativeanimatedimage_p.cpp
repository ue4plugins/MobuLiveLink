/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeanimatedimage_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsitems/qdeclarativeanimatedimage_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeanimatedimage_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeAnimatedImage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      44,   26,   26,   26, 0x05,
      60,   26,   26,   26, 0x05,
      75,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   26,   26,   26, 0x08,
     109,   26,   26,   26, 0x08,
     132,   26,   26,   26, 0x08,

 // properties: name, type, flags
     160,  155, 0x01495103,
     168,  155, 0x01495103,
     179,  175, 0x02495103,
     192,  175, 0x02095001,
     209,  203, 0x15495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       3,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeAnimatedImage[] = {
    "QDeclarativeAnimatedImage\0\0playingChanged()\0"
    "pausedChanged()\0frameChanged()\0"
    "sourceSizeChanged()\0movieUpdate()\0"
    "movieRequestFinished()\0playingStatusChanged()\0"
    "bool\0playing\0paused\0int\0currentFrame\0"
    "frameCount\0QSize\0sourceSize\0"
};

void QDeclarativeAnimatedImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeAnimatedImage *_t = static_cast<QDeclarativeAnimatedImage *>(_o);
        switch (_id) {
        case 0: _t->playingChanged(); break;
        case 1: _t->pausedChanged(); break;
        case 2: _t->frameChanged(); break;
        case 3: _t->sourceSizeChanged(); break;
        case 4: _t->movieUpdate(); break;
        case 5: _t->movieRequestFinished(); break;
        case 6: _t->playingStatusChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeAnimatedImage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeAnimatedImage::staticMetaObject = {
    { &QDeclarativeImage::staticMetaObject, qt_meta_stringdata_QDeclarativeAnimatedImage,
      qt_meta_data_QDeclarativeAnimatedImage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeAnimatedImage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeAnimatedImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeAnimatedImage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeAnimatedImage))
        return static_cast<void*>(const_cast< QDeclarativeAnimatedImage*>(this));
    return QDeclarativeImage::qt_metacast(_clname);
}

int QDeclarativeAnimatedImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeImage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isPlaying(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isPaused(); break;
        case 2: *reinterpret_cast< int*>(_v) = currentFrame(); break;
        case 3: *reinterpret_cast< int*>(_v) = frameCount(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = sourceSize(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPlaying(*reinterpret_cast< bool*>(_v)); break;
        case 1: setPaused(*reinterpret_cast< bool*>(_v)); break;
        case 2: setCurrentFrame(*reinterpret_cast< int*>(_v)); break;
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
void QDeclarativeAnimatedImage::playingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeAnimatedImage::pausedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeAnimatedImage::frameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QDeclarativeAnimatedImage::sourceSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
