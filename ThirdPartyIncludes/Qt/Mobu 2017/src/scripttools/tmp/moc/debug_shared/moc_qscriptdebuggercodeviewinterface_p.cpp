/****************************************************************************
** Meta object code from reading C++ file 'qscriptdebuggercodeviewinterface_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../debugging/qscriptdebuggercodeviewinterface_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptdebuggercodeviewinterface_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QScriptDebuggerCodeViewInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      48,   34,   33,   33, 0x05,
     100,   82,   33,   33, 0x05,
     154,  134,   33,   33, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QScriptDebuggerCodeViewInterface[] = {
    "QScriptDebuggerCodeViewInterface\0\0"
    "lineNumber,on\0breakpointToggleRequest(int,bool)\0"
    "lineNumber,enable\0breakpointEnableRequest(int,bool)\0"
    "pos,lineNumber,path\0"
    "toolTipRequest(QPoint,int,QStringList)\0"
};

void QScriptDebuggerCodeViewInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QScriptDebuggerCodeViewInterface *_t = static_cast<QScriptDebuggerCodeViewInterface *>(_o);
        switch (_id) {
        case 0: _t->breakpointToggleRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->breakpointEnableRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->toolTipRequest((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QScriptDebuggerCodeViewInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QScriptDebuggerCodeViewInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QScriptDebuggerCodeViewInterface,
      qt_meta_data_QScriptDebuggerCodeViewInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QScriptDebuggerCodeViewInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QScriptDebuggerCodeViewInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QScriptDebuggerCodeViewInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDebuggerCodeViewInterface))
        return static_cast<void*>(const_cast< QScriptDebuggerCodeViewInterface*>(this));
    return QWidget::qt_metacast(_clname);
}

int QScriptDebuggerCodeViewInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QScriptDebuggerCodeViewInterface::breakpointToggleRequest(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QScriptDebuggerCodeViewInterface::breakpointEnableRequest(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QScriptDebuggerCodeViewInterface::toolTipRequest(const QPoint & _t1, int _t2, const QStringList & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
