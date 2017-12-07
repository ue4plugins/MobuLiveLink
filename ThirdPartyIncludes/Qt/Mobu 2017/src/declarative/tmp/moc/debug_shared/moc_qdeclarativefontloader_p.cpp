/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativefontloader_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qdeclarativefontloader_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativefontloader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeFontLoader[] = {

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
      24,   23,   23,   23, 0x05,
      40,   23,   23,   23, 0x05,
      54,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      72,   70,   23,   23, 0x08,

 // properties: name, type, flags
     132,  127, 0x11495103,
     147,  139, 0x0a495103,
     159,  152, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
     152, 0x0,    4,   50,

 // enum data: key, value
     166, uint(QDeclarativeFontLoader::Null),
     171, uint(QDeclarativeFontLoader::Ready),
     177, uint(QDeclarativeFontLoader::Loading),
     185, uint(QDeclarativeFontLoader::Error),

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeFontLoader[] = {
    "QDeclarativeFontLoader\0\0sourceChanged()\0"
    "nameChanged()\0statusChanged()\0,\0"
    "updateFontInfo(QString,QDeclarativeFontLoader::Status)\0"
    "QUrl\0source\0QString\0name\0Status\0status\0"
    "Null\0Ready\0Loading\0Error\0"
};

void QDeclarativeFontLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeFontLoader *_t = static_cast<QDeclarativeFontLoader *>(_o);
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->statusChanged(); break;
        case 3: _t->updateFontInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QDeclarativeFontLoader::Status(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeFontLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeFontLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeFontLoader,
      qt_meta_data_QDeclarativeFontLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeFontLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeFontLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeFontLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeFontLoader))
        return static_cast<void*>(const_cast< QDeclarativeFontLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeFontLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QUrl*>(_v) = source(); break;
        case 1: *reinterpret_cast< QString*>(_v) = name(); break;
        case 2: *reinterpret_cast< Status*>(_v) = status(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: setName(*reinterpret_cast< QString*>(_v)); break;
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
void QDeclarativeFontLoader::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QDeclarativeFontLoader::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QDeclarativeFontLoader::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
