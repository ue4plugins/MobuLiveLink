/****************************************************************************
** Meta object code from reading C++ file 'qscriptbreakpointswidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../debugging/qscriptbreakpointswidget_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptbreakpointswidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QScriptBreakpointsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x08,
      45,   25,   25,   25, 0x08,
      67,   25,   25,   25, 0x08,
     102,  100,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QScriptBreakpointsWidget[] = {
    "QScriptBreakpointsWidget\0\0_q_newBreakpoint()\0"
    "_q_deleteBreakpoint()\0"
    "_q_onCurrentChanged(QModelIndex)\0,\0"
    "_q_onNewBreakpointRequest(QString,int)\0"
};

void QScriptBreakpointsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QScriptBreakpointsWidget *_t = static_cast<QScriptBreakpointsWidget *>(_o);
        switch (_id) {
        case 0: _t->d_func()->_q_newBreakpoint(); break;
        case 1: _t->d_func()->_q_deleteBreakpoint(); break;
        case 2: _t->d_func()->_q_onCurrentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_onNewBreakpointRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QScriptBreakpointsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QScriptBreakpointsWidget::staticMetaObject = {
    { &QScriptBreakpointsWidgetInterface::staticMetaObject, qt_meta_stringdata_QScriptBreakpointsWidget,
      qt_meta_data_QScriptBreakpointsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QScriptBreakpointsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QScriptBreakpointsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QScriptBreakpointsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptBreakpointsWidget))
        return static_cast<void*>(const_cast< QScriptBreakpointsWidget*>(this));
    return QScriptBreakpointsWidgetInterface::qt_metacast(_clname);
}

int QScriptBreakpointsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScriptBreakpointsWidgetInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
