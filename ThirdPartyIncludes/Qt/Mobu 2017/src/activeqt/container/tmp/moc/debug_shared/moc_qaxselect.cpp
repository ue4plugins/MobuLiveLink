/****************************************************************************
** Meta object code from reading C++ file 'qaxselect.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qaxselect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaxselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAxSelect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   11,   10,   10, 0x08,
      53,   11,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAxSelect[] = {
    "QAxSelect\0\0index\0on_ActiveXList_clicked(QModelIndex)\0"
    "on_ActiveXList_doubleClicked(QModelIndex)\0"
};

void QAxSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QAxSelect *_t = static_cast<QAxSelect *>(_o);
        switch (_id) {
        case 0: _t->on_ActiveXList_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_ActiveXList_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QAxSelect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QAxSelect::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QAxSelect,
      qt_meta_data_QAxSelect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAxSelect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAxSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAxSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAxSelect))
        return static_cast<void*>(const_cast< QAxSelect*>(this));
    return QDialog::qt_metacast(_clname);
}

int QAxSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
