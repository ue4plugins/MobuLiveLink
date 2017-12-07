/****************************************************************************
** Meta object code from reading C++ file 'abstractviewinspector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../abstractviewinspector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractviewinspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QmlJSDebugger__AbstractViewInspector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      51,   38,   37,   37, 0x05,
      96,   83,   37,   37, 0x05,
     122,   37,   37,   37, 0x05,
     140,   37,   37,   37, 0x05,
     169,   37,   37,   37, 0x05,
     191,   37,   37,   37, 0x05,
     211,   37,   37,   37, 0x05,
     240,  234,   37,   37, 0x05,
     276,  269,   37,   37, 0x05,
     312,  305,   37,   37, 0x05,

 // slots: signature, parameters, type, tag, flags
     341,   38,   37,   37, 0x0a,
     370,  234,   37,   37, 0x0a,
     395,   37,   37,   37, 0x0a,
     421,   37,   37,   37, 0x0a,
     440,   37,   37,   37, 0x0a,
     467,   37,   37,   37, 0x0a,
     501,  495,   37,   37, 0x0a,
     538,  529,   37,   37, 0x0a,
     560,  269,   37,   37, 0x0a,
     585,  305,   37,   37, 0x0a,
     618,  610,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QmlJSDebugger__AbstractViewInspector[] = {
    "QmlJSDebugger::AbstractViewInspector\0"
    "\0inDesignMode\0designModeBehaviorChanged(bool)\0"
    "showAppOnTop\0showAppOnTopChanged(bool)\0"
    "reloadRequested()\0marqueeSelectToolActivated()\0"
    "selectToolActivated()\0zoomToolActivated()\0"
    "colorPickerActivated()\0color\0"
    "selectedColorChanged(QColor)\0factor\0"
    "animationSpeedChanged(qreal)\0paused\0"
    "animationPausedChanged(bool)\0"
    "sendDesignModeBehavior(bool)\0"
    "sendColorChanged(QColor)\0"
    "changeToColorPickerTool()\0changeToZoomTool()\0"
    "changeToSingleSelectTool()\0"
    "changeToMarqueeSelectTool()\0value\0"
    "setDesignModeBehavior(bool)\0appOnTop\0"
    "setShowAppOnTop(bool)\0setAnimationSpeed(qreal)\0"
    "setAnimationPaused(bool)\0message\0"
    "handleMessage(QByteArray)\0"
};

void QmlJSDebugger::AbstractViewInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AbstractViewInspector *_t = static_cast<AbstractViewInspector *>(_o);
        switch (_id) {
        case 0: _t->designModeBehaviorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showAppOnTopChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->reloadRequested(); break;
        case 3: _t->marqueeSelectToolActivated(); break;
        case 4: _t->selectToolActivated(); break;
        case 5: _t->zoomToolActivated(); break;
        case 6: _t->colorPickerActivated(); break;
        case 7: _t->selectedColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->animationSpeedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->animationPausedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->sendDesignModeBehavior((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->sendColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 12: _t->changeToColorPickerTool(); break;
        case 13: _t->changeToZoomTool(); break;
        case 14: _t->changeToSingleSelectTool(); break;
        case 15: _t->changeToMarqueeSelectTool(); break;
        case 16: _t->setDesignModeBehavior((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->setShowAppOnTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->setAnimationSpeed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 19: _t->setAnimationPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->handleMessage((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QmlJSDebugger::AbstractViewInspector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QmlJSDebugger::AbstractViewInspector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlJSDebugger__AbstractViewInspector,
      qt_meta_data_QmlJSDebugger__AbstractViewInspector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QmlJSDebugger::AbstractViewInspector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QmlJSDebugger::AbstractViewInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QmlJSDebugger::AbstractViewInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QmlJSDebugger__AbstractViewInspector))
        return static_cast<void*>(const_cast< AbstractViewInspector*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlJSDebugger::AbstractViewInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void QmlJSDebugger::AbstractViewInspector::designModeBehaviorChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlJSDebugger::AbstractViewInspector::showAppOnTopChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlJSDebugger::AbstractViewInspector::reloadRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QmlJSDebugger::AbstractViewInspector::marqueeSelectToolActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QmlJSDebugger::AbstractViewInspector::selectToolActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QmlJSDebugger::AbstractViewInspector::zoomToolActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QmlJSDebugger::AbstractViewInspector::colorPickerActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QmlJSDebugger::AbstractViewInspector::selectedColorChanged(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QmlJSDebugger::AbstractViewInspector::animationSpeedChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QmlJSDebugger::AbstractViewInspector::animationPausedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
