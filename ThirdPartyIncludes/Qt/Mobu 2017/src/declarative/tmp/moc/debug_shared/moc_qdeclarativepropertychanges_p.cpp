/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativepropertychanges_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qdeclarativepropertychanges_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativepropertychanges_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativePropertyChanges[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      37,   28, 0x88095003,
      49,   44, 0x01095103,
      68,   44, 0x01095003,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativePropertyChanges[] = {
    "QDeclarativePropertyChanges\0QObject*\0"
    "target\0bool\0restoreEntryValues\0explicit\0"
};

void QDeclarativePropertyChanges::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativePropertyChanges::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativePropertyChanges::staticMetaObject = {
    { &QDeclarativeStateOperation::staticMetaObject, qt_meta_stringdata_QDeclarativePropertyChanges,
      qt_meta_data_QDeclarativePropertyChanges, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativePropertyChanges::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativePropertyChanges::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativePropertyChanges::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePropertyChanges))
        return static_cast<void*>(const_cast< QDeclarativePropertyChanges*>(this));
    return QDeclarativeStateOperation::qt_metacast(_clname);
}

int QDeclarativePropertyChanges::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeStateOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = object(); break;
        case 1: *reinterpret_cast< bool*>(_v) = restoreEntryValues(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isExplicit(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setObject(*reinterpret_cast< QObject**>(_v)); break;
        case 1: setRestoreEntryValues(*reinterpret_cast< bool*>(_v)); break;
        case 2: setIsExplicit(*reinterpret_cast< bool*>(_v)); break;
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
QT_END_MOC_NAMESPACE
