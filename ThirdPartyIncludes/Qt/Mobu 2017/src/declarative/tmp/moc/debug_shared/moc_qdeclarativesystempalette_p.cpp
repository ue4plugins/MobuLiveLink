/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativesystempalette_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qdeclarativesystempalette_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativesystempalette_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeSystemPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      15,   19, // properties
       1,   79, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,

 // properties: name, type, flags
      82,   44, 0x0049510b,
     100,   93, 0x43495001,
     107,   93, 0x43495001,
     118,   93, 0x43495001,
     123,   93, 0x43495001,
     128,   93, 0x43495001,
     142,   93, 0x43495001,
     149,   93, 0x43495001,
     160,   93, 0x43495001,
     166,   93, 0x43495001,
     175,   93, 0x43495001,
     180,   93, 0x43495001,
     184,   93, 0x43495001,
     191,   93, 0x43495001,
     201,   93, 0x43495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
     217, 0x0,    3,   83,

 // enum data: key, value
     228, uint(QDeclarativeSystemPalette::Active),
     235, uint(QDeclarativeSystemPalette::Inactive),
     244, uint(QDeclarativeSystemPalette::Disabled),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeSystemPalette[] = {
    "QDeclarativeSystemPalette\0\0paletteChanged()\0"
    "QDeclarativeSystemPalette::ColorGroup\0"
    "colorGroup\0QColor\0window\0windowText\0"
    "base\0text\0alternateBase\0button\0"
    "buttonText\0light\0midlight\0dark\0mid\0"
    "shadow\0highlight\0highlightedText\0"
    "ColorGroup\0Active\0Inactive\0Disabled\0"
};

void QDeclarativeSystemPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeSystemPalette *_t = static_cast<QDeclarativeSystemPalette *>(_o);
        switch (_id) {
        case 0: _t->paletteChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeSystemPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeSystemPalette::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeSystemPalette,
      qt_meta_data_QDeclarativeSystemPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeSystemPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeSystemPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeSystemPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeSystemPalette))
        return static_cast<void*>(const_cast< QDeclarativeSystemPalette*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeSystemPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeSystemPalette::ColorGroup*>(_v) = colorGroup(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = window(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = windowText(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = base(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = text(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = alternateBase(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = button(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = buttonText(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = light(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = midlight(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = dark(); break;
        case 11: *reinterpret_cast< QColor*>(_v) = mid(); break;
        case 12: *reinterpret_cast< QColor*>(_v) = shadow(); break;
        case 13: *reinterpret_cast< QColor*>(_v) = highlight(); break;
        case 14: *reinterpret_cast< QColor*>(_v) = highlightedText(); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setColorGroup(*reinterpret_cast< QDeclarativeSystemPalette::ColorGroup*>(_v)); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeSystemPalette::paletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
