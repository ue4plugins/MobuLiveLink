/****************************************************************************
** Meta object code from reading C++ file 'qlinecontrol_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qlinecontrol_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlinecontrol_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLineControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   14,   13,   13, 0x05,
      47,   13,   13,   13, 0x05,
      66,   13,   13,   13, 0x05,
      94,   13,   13,   13, 0x05,
     115,   13,   13,   13, 0x05,
     135,   13,   13,   13, 0x05,
     155,   13,   13,   13, 0x05,
     174,   13,   13,   13, 0x05,
     185,   13,   13,   13, 0x05,
     203,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     223,   13,   13,   13, 0x08,
     245,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QLineControl[] = {
    "QLineControl\0\0,\0cursorPositionChanged(int,int)\0"
    "selectionChanged()\0displayTextChanged(QString)\0"
    "textChanged(QString)\0textEdited(QString)\0"
    "resetInputContext()\0updateMicroFocus()\0"
    "accepted()\0editingFinished()\0"
    "updateNeeded(QRect)\0_q_clipboardChanged()\0"
    "_q_deleteSelected()\0"
};

void QLineControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QLineControl *_t = static_cast<QLineControl *>(_o);
        switch (_id) {
        case 0: _t->cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->displayTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->resetInputContext(); break;
        case 6: _t->updateMicroFocus(); break;
        case 7: _t->accepted(); break;
        case 8: _t->editingFinished(); break;
        case 9: _t->updateNeeded((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 10: _t->_q_clipboardChanged(); break;
        case 11: _t->_q_deleteSelected(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QLineControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QLineControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLineControl,
      qt_meta_data_QLineControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLineControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLineControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLineControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLineControl))
        return static_cast<void*>(const_cast< QLineControl*>(this));
    return QObject::qt_metacast(_clname);
}

int QLineControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QLineControl::cursorPositionChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QLineControl::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QLineControl::displayTextChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QLineControl::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QLineControl::textEdited(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QLineControl::resetInputContext()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QLineControl::updateMicroFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QLineControl::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void QLineControl::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void QLineControl::updateNeeded(const QRect & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
