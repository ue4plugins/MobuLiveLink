/****************************************************************************
** Meta object code from reading C++ file 'qscriptdebuggerconsolewidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../debugging/qscriptdebuggerconsolewidget_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptdebuggerconsolewidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QScriptDebuggerConsoleWidget[] = {

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
      30,   29,   29,   29, 0x08,
      56,   29,   29,   29, 0x08,
      81,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QScriptDebuggerConsoleWidget[] = {
    "QScriptDebuggerConsoleWidget\0\0"
    "_q_onLineEntered(QString)\0"
    "_q_onLineEdited(QString)\0"
    "_q_onCompletionTaskFinished()\0"
};

void QScriptDebuggerConsoleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QScriptDebuggerConsoleWidget *_t = static_cast<QScriptDebuggerConsoleWidget *>(_o);
        switch (_id) {
        case 0: _t->d_func()->_q_onLineEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->d_func()->_q_onLineEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_onCompletionTaskFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QScriptDebuggerConsoleWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QScriptDebuggerConsoleWidget::staticMetaObject = {
    { &QScriptDebuggerConsoleWidgetInterface::staticMetaObject, qt_meta_stringdata_QScriptDebuggerConsoleWidget,
      qt_meta_data_QScriptDebuggerConsoleWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QScriptDebuggerConsoleWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QScriptDebuggerConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QScriptDebuggerConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDebuggerConsoleWidget))
        return static_cast<void*>(const_cast< QScriptDebuggerConsoleWidget*>(this));
    return QScriptDebuggerConsoleWidgetInterface::qt_metacast(_clname);
}

int QScriptDebuggerConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScriptDebuggerConsoleWidgetInterface::qt_metacall(_c, _id, _a);
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
