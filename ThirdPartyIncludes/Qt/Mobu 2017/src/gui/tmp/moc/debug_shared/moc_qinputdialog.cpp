/****************************************************************************
** Meta object code from reading C++ file 'qinputdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogs/qinputdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinputdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QInputDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x05,
      45,   14,   13,   13, 0x05,
      78,   72,   13,   13, 0x05,
      99,   72,   13,   13, 0x05,
     121,   72,   13,   13, 0x05,
     148,   72,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     176,   13,   13,   13, 0x08,
     202,  200,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QInputDialog[] = {
    "QInputDialog\0\0text\0textValueChanged(QString)\0"
    "textValueSelected(QString)\0value\0"
    "intValueChanged(int)\0intValueSelected(int)\0"
    "doubleValueChanged(double)\0"
    "doubleValueSelected(double)\0"
    "_q_textChanged(QString)\0,\0"
    "_q_currentRowChanged(QModelIndex,QModelIndex)\0"
};

void QInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QInputDialog *_t = static_cast<QInputDialog *>(_o);
        switch (_id) {
        case 0: _t->textValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->textValueSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->intValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->intValueSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->doubleValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->doubleValueSelected((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->d_func()->_q_currentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QInputDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QInputDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QInputDialog,
      qt_meta_data_QInputDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QInputDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QInputDialog))
        return static_cast<void*>(const_cast< QInputDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QInputDialog::textValueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QInputDialog::textValueSelected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QInputDialog::intValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QInputDialog::intValueSelected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QInputDialog::doubleValueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QInputDialog::doubleValueSelected(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
