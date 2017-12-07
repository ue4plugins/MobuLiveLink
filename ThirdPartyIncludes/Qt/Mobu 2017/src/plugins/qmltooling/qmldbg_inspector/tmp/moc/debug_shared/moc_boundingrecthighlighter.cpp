/****************************************************************************
** Meta object code from reading C++ file 'boundingrecthighlighter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../editor/boundingrecthighlighter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boundingrecthighlighter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QmlJSDebugger__BoundingRectHighlighter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   39,   39,   39, 0x08,
      50,   39,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QmlJSDebugger__BoundingRectHighlighter[] = {
    "QmlJSDebugger::BoundingRectHighlighter\0"
    "\0refresh()\0itemDestroyed(QObject*)\0"
};

void QmlJSDebugger::BoundingRectHighlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BoundingRectHighlighter *_t = static_cast<BoundingRectHighlighter *>(_o);
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->itemDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QmlJSDebugger::BoundingRectHighlighter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QmlJSDebugger::BoundingRectHighlighter::staticMetaObject = {
    { &LiveLayerItem::staticMetaObject, qt_meta_stringdata_QmlJSDebugger__BoundingRectHighlighter,
      qt_meta_data_QmlJSDebugger__BoundingRectHighlighter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QmlJSDebugger::BoundingRectHighlighter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QmlJSDebugger::BoundingRectHighlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QmlJSDebugger::BoundingRectHighlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QmlJSDebugger__BoundingRectHighlighter))
        return static_cast<void*>(const_cast< BoundingRectHighlighter*>(this));
    return LiveLayerItem::qt_metacast(_clname);
}

int QmlJSDebugger::BoundingRectHighlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LiveLayerItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_QmlJSDebugger__BoundingBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QmlJSDebugger__BoundingBox[] = {
    "QmlJSDebugger::BoundingBox\0"
};

void QmlJSDebugger::BoundingBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QmlJSDebugger::BoundingBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QmlJSDebugger::BoundingBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlJSDebugger__BoundingBox,
      qt_meta_data_QmlJSDebugger__BoundingBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QmlJSDebugger::BoundingBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QmlJSDebugger::BoundingBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QmlJSDebugger::BoundingBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QmlJSDebugger__BoundingBox))
        return static_cast<void*>(const_cast< BoundingBox*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlJSDebugger::BoundingBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
