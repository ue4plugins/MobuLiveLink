/****************************************************************************
** Meta object code from reading C++ file 'q3sqlform.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sql/q3sqlform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3sqlform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3SqlForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   11,   10,   10, 0x0a,
      38,   11,   10,   10, 0x0a,
      59,   10,   10,   10, 0x0a,
      72,   10,   10,   10, 0x0a,
      86,   10,   10,   10, 0x0a,
      94,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Q3SqlForm[] = {
    "Q3SqlForm\0\0widget\0readField(QWidget*)\0"
    "writeField(QWidget*)\0readFields()\0"
    "writeFields()\0clear()\0clearValues()\0"
};

void Q3SqlForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3SqlForm *_t = static_cast<Q3SqlForm *>(_o);
        switch (_id) {
        case 0: _t->readField((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->writeField((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->readFields(); break;
        case 3: _t->writeFields(); break;
        case 4: _t->clear(); break;
        case 5: _t->clearValues(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3SqlForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3SqlForm::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Q3SqlForm,
      qt_meta_data_Q3SqlForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3SqlForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3SqlForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3SqlForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3SqlForm))
        return static_cast<void*>(const_cast< Q3SqlForm*>(this));
    return QObject::qt_metacast(_clname);
}

int Q3SqlForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
