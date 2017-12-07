/****************************************************************************
** Meta object code from reading C++ file 'liveselectiontool.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../editor/liveselectiontool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'liveselectiontool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QmlJSDebugger__LiveSelectionTool[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x08,
      70,   63,   33,   33, 0x08,
     106,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QmlJSDebugger__LiveSelectionTool[] = {
    "QmlJSDebugger::LiveSelectionTool\0\0"
    "contextMenuElementSelected()\0action\0"
    "contextMenuElementHovered(QAction*)\0"
    "repaintBoundingRects()\0"
};

void QmlJSDebugger::LiveSelectionTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LiveSelectionTool *_t = static_cast<LiveSelectionTool *>(_o);
        switch (_id) {
        case 0: _t->contextMenuElementSelected(); break;
        case 1: _t->contextMenuElementHovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->repaintBoundingRects(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QmlJSDebugger::LiveSelectionTool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QmlJSDebugger::LiveSelectionTool::staticMetaObject = {
    { &AbstractLiveEditTool::staticMetaObject, qt_meta_stringdata_QmlJSDebugger__LiveSelectionTool,
      qt_meta_data_QmlJSDebugger__LiveSelectionTool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QmlJSDebugger::LiveSelectionTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QmlJSDebugger::LiveSelectionTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QmlJSDebugger::LiveSelectionTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QmlJSDebugger__LiveSelectionTool))
        return static_cast<void*>(const_cast< LiveSelectionTool*>(this));
    return AbstractLiveEditTool::qt_metacast(_clname);
}

int QmlJSDebugger::LiveSelectionTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractLiveEditTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
