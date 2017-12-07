/****************************************************************************
** Meta object code from reading C++ file 'q3dataview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sql/q3dataview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3dataview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3DataView[] = {

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
      16,   12,   11,   11, 0x0a,
      37,   11,   11,   11, 0x0a,
      50,   11,   11,   11, 0x0a,
      64,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Q3DataView[] = {
    "Q3DataView\0\0buf\0refresh(QSqlRecord*)\0"
    "readFields()\0writeFields()\0clearValues()\0"
};

void Q3DataView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3DataView *_t = static_cast<Q3DataView *>(_o);
        switch (_id) {
        case 0: _t->refresh((*reinterpret_cast< QSqlRecord*(*)>(_a[1]))); break;
        case 1: _t->readFields(); break;
        case 2: _t->writeFields(); break;
        case 3: _t->clearValues(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3DataView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3DataView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Q3DataView,
      qt_meta_data_Q3DataView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3DataView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3DataView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3DataView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3DataView))
        return static_cast<void*>(const_cast< Q3DataView*>(this));
    return QWidget::qt_metacast(_clname);
}

int Q3DataView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
