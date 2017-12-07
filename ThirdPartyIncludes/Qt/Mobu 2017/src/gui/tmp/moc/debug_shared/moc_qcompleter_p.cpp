/****************************************************************************
** Meta object code from reading C++ file 'qcompleter_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qcompleter_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcompleter_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCompletionModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   17,   17,   17, 0x0a,
      43,   17,   17,   17, 0x0a,
      58,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QCompletionModel[] = {
    "QCompletionModel\0\0rowsAdded()\0"
    "invalidate()\0rowsInserted()\0"
    "modelDestroyed()\0"
};

void QCompletionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCompletionModel *_t = static_cast<QCompletionModel *>(_o);
        switch (_id) {
        case 0: _t->rowsAdded(); break;
        case 1: _t->invalidate(); break;
        case 2: _t->rowsInserted(); break;
        case 3: _t->modelDestroyed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QCompletionModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCompletionModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_QCompletionModel,
      qt_meta_data_QCompletionModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCompletionModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCompletionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCompletionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCompletionModel))
        return static_cast<void*>(const_cast< QCompletionModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int QCompletionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QCompletionModel::rowsAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
