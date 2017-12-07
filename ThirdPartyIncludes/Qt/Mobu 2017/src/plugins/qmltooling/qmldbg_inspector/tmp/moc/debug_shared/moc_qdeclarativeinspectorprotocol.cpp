/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeinspectorprotocol.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qdeclarativeinspectorprotocol.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeinspectorprotocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QmlJSDebugger__InspectorProtocol[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      33, 0x0,   18,   22,
      41, 0x0,    4,   58,

 // enum data: key, value
      46, uint(QmlJSDebugger::InspectorProtocol::AnimationSpeedChanged),
      68, uint(QmlJSDebugger::InspectorProtocol::AnimationPausedChanged),
      91, uint(QmlJSDebugger::InspectorProtocol::ChangeTool),
     102, uint(QmlJSDebugger::InspectorProtocol::ClearComponentCache),
     122, uint(QmlJSDebugger::InspectorProtocol::ColorChanged),
     135, uint(QmlJSDebugger::InspectorProtocol::CreateObject),
     148, uint(QmlJSDebugger::InspectorProtocol::CurrentObjectsChanged),
     170, uint(QmlJSDebugger::InspectorProtocol::DestroyObject),
     184, uint(QmlJSDebugger::InspectorProtocol::MoveObject),
     195, uint(QmlJSDebugger::InspectorProtocol::ObjectIdList),
     208, uint(QmlJSDebugger::InspectorProtocol::Reload),
     215, uint(QmlJSDebugger::InspectorProtocol::Reloaded),
     224, uint(QmlJSDebugger::InspectorProtocol::SetAnimationSpeed),
     242, uint(QmlJSDebugger::InspectorProtocol::SetAnimationPaused),
     261, uint(QmlJSDebugger::InspectorProtocol::SetCurrentObjects),
     279, uint(QmlJSDebugger::InspectorProtocol::SetDesignMode),
     293, uint(QmlJSDebugger::InspectorProtocol::ShowAppOnTop),
     306, uint(QmlJSDebugger::InspectorProtocol::ToolChanged),
     318, uint(QmlJSDebugger::InspectorProtocol::ColorPickerTool),
     334, uint(QmlJSDebugger::InspectorProtocol::SelectMarqueeTool),
     352, uint(QmlJSDebugger::InspectorProtocol::SelectTool),
     363, uint(QmlJSDebugger::InspectorProtocol::ZoomTool),

       0        // eod
};

static const char qt_meta_stringdata_QmlJSDebugger__InspectorProtocol[] = {
    "QmlJSDebugger::InspectorProtocol\0"
    "Message\0Tool\0AnimationSpeedChanged\0"
    "AnimationPausedChanged\0ChangeTool\0"
    "ClearComponentCache\0ColorChanged\0"
    "CreateObject\0CurrentObjectsChanged\0"
    "DestroyObject\0MoveObject\0ObjectIdList\0"
    "Reload\0Reloaded\0SetAnimationSpeed\0"
    "SetAnimationPaused\0SetCurrentObjects\0"
    "SetDesignMode\0ShowAppOnTop\0ToolChanged\0"
    "ColorPickerTool\0SelectMarqueeTool\0"
    "SelectTool\0ZoomTool\0"
};

void QmlJSDebugger::InspectorProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QmlJSDebugger::InspectorProtocol::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QmlJSDebugger::InspectorProtocol::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlJSDebugger__InspectorProtocol,
      qt_meta_data_QmlJSDebugger__InspectorProtocol, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QmlJSDebugger::InspectorProtocol::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QmlJSDebugger::InspectorProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QmlJSDebugger::InspectorProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QmlJSDebugger__InspectorProtocol))
        return static_cast<void*>(const_cast< InspectorProtocol*>(this));
    return QObject::qt_metacast(_clname);
}

int QmlJSDebugger::InspectorProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
