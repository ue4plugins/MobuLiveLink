/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativestateoperations_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qdeclarativestateoperations_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativestateoperations_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeParentChange[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      43,   25, 0x0009500b,
      50,   25, 0x0009510b,
      82,   57, 0x0009510b,
      84,   57, 0x0009510b,
      86,   57, 0x0009510b,
      92,   57, 0x0009510b,
      99,   57, 0x0009510b,
     105,   57, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeParentChange[] = {
    "QDeclarativeParentChange\0QDeclarativeItem*\0"
    "target\0parent\0QDeclarativeScriptString\0"
    "x\0y\0width\0height\0scale\0rotation\0"
};

void QDeclarativeParentChange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeParentChange::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeParentChange::staticMetaObject = {
    { &QDeclarativeStateOperation::staticMetaObject, qt_meta_stringdata_QDeclarativeParentChange,
      qt_meta_data_QDeclarativeParentChange, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeParentChange::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeParentChange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeParentChange::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeParentChange))
        return static_cast<void*>(const_cast< QDeclarativeParentChange*>(this));
    if (!strcmp(_clname, "QDeclarativeActionEvent"))
        return static_cast< QDeclarativeActionEvent*>(const_cast< QDeclarativeParentChange*>(this));
    return QDeclarativeStateOperation::qt_metacast(_clname);
}

int QDeclarativeParentChange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeStateOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeItem**>(_v) = object(); break;
        case 1: *reinterpret_cast< QDeclarativeItem**>(_v) = parent(); break;
        case 2: *reinterpret_cast< QDeclarativeScriptString*>(_v) = x(); break;
        case 3: *reinterpret_cast< QDeclarativeScriptString*>(_v) = y(); break;
        case 4: *reinterpret_cast< QDeclarativeScriptString*>(_v) = width(); break;
        case 5: *reinterpret_cast< QDeclarativeScriptString*>(_v) = height(); break;
        case 6: *reinterpret_cast< QDeclarativeScriptString*>(_v) = scale(); break;
        case 7: *reinterpret_cast< QDeclarativeScriptString*>(_v) = rotation(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setObject(*reinterpret_cast< QDeclarativeItem**>(_v)); break;
        case 1: setParent(*reinterpret_cast< QDeclarativeItem**>(_v)); break;
        case 2: setX(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        case 3: setY(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        case 4: setWidth(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        case 5: setHeight(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        case 6: setScale(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        case 7: setRotation(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QDeclarativeStateChangeScript[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      55,   30, 0x0009510b,
      70,   62, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeStateChangeScript[] = {
    "QDeclarativeStateChangeScript\0"
    "QDeclarativeScriptString\0script\0QString\0"
    "name\0"
};

void QDeclarativeStateChangeScript::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeStateChangeScript::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeStateChangeScript::staticMetaObject = {
    { &QDeclarativeStateOperation::staticMetaObject, qt_meta_stringdata_QDeclarativeStateChangeScript,
      qt_meta_data_QDeclarativeStateChangeScript, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeStateChangeScript::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeStateChangeScript::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeStateChangeScript::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeStateChangeScript))
        return static_cast<void*>(const_cast< QDeclarativeStateChangeScript*>(this));
    if (!strcmp(_clname, "QDeclarativeActionEvent"))
        return static_cast< QDeclarativeActionEvent*>(const_cast< QDeclarativeStateChangeScript*>(this));
    return QDeclarativeStateOperation::qt_metacast(_clname);
}

int QDeclarativeStateChangeScript::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeStateOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeScriptString*>(_v) = script(); break;
        case 1: *reinterpret_cast< QString*>(_v) = name(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setScript(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        case 1: setName(*reinterpret_cast< QString*>(_v)); break;
        }
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
static const uint qt_meta_data_QDeclarativeAnchorSet[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      47,   22, 0x0009510f,
      52,   22, 0x0009510f,
      58,   22, 0x0009510f,
      75,   22, 0x0009510f,
      79,   22, 0x0009510f,
      86,   22, 0x0009510f,
     101,   22, 0x0009510f,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeAnchorSet[] = {
    "QDeclarativeAnchorSet\0QDeclarativeScriptString\0"
    "left\0right\0horizontalCenter\0top\0bottom\0"
    "verticalCenter\0baseline\0"
};

void QDeclarativeAnchorSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeAnchorSet::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeAnchorSet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeAnchorSet,
      qt_meta_data_QDeclarativeAnchorSet, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeAnchorSet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeAnchorSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeAnchorSet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeAnchorSet))
        return static_cast<void*>(const_cast< QDeclarativeAnchorSet*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeAnchorSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeScriptString*>(_v) = left(); break;
        case 1: *reinterpret_cast< QDeclarativeScriptString*>(_v) = right(); break;
        case 2: *reinterpret_cast< QDeclarativeScriptString*>(_v) = horizontalCenter(); break;
        case 3: *reinterpret_cast< QDeclarativeScriptString*>(_v) = top(); break;
        case 4: *reinterpret_cast< QDeclarativeScriptString*>(_v) = bottom(); break;
        case 5: *reinterpret_cast< QDeclarativeScriptString*>(_v) = verticalCenter(); break;
        case 6: *reinterpret_cast< QDeclarativeScriptString*>(_v) = baseline(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLeft(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        case 1: setRight(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        case 2: setHorizontalCenter(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        case 3: setTop(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        case 4: setBottom(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        case 5: setVerticalCenter(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        case 6: setBaseline(*reinterpret_cast< QDeclarativeScriptString*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 0: resetLeft(); break;
        case 1: resetRight(); break;
        case 2: resetHorizontalCenter(); break;
        case 3: resetTop(); break;
        case 4: resetBottom(); break;
        case 5: resetVerticalCenter(); break;
        case 6: resetBaseline(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QDeclarativeAnchorChanges[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      44,   26, 0x0009500b,
      74,   51, 0x00095409,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeAnchorChanges[] = {
    "QDeclarativeAnchorChanges\0QDeclarativeItem*\0"
    "target\0QDeclarativeAnchorSet*\0anchors\0"
};

void QDeclarativeAnchorChanges::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeAnchorChanges::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeAnchorChanges::staticMetaObject = {
    { &QDeclarativeStateOperation::staticMetaObject, qt_meta_stringdata_QDeclarativeAnchorChanges,
      qt_meta_data_QDeclarativeAnchorChanges, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeAnchorChanges::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeAnchorChanges::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeAnchorChanges::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeAnchorChanges))
        return static_cast<void*>(const_cast< QDeclarativeAnchorChanges*>(this));
    if (!strcmp(_clname, "QDeclarativeActionEvent"))
        return static_cast< QDeclarativeActionEvent*>(const_cast< QDeclarativeAnchorChanges*>(this));
    return QDeclarativeStateOperation::qt_metacast(_clname);
}

int QDeclarativeAnchorChanges::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeStateOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeItem**>(_v) = object(); break;
        case 1: *reinterpret_cast< QDeclarativeAnchorSet**>(_v) = anchors(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setObject(*reinterpret_cast< QDeclarativeItem**>(_v)); break;
        }
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
QT_END_MOC_NAMESPACE
