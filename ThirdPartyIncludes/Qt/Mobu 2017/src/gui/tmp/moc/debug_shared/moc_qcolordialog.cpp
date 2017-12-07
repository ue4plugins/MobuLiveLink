/****************************************************************************
** Meta object code from reading C++ file 'qcolordialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogs/qcolordialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcolordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QColorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   49, // properties
       1,   57, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x05,
      48,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   13,   13,   13, 0x08,
      91,   85,   13,   13, 0x08,
     118,  114,   13,   13, 0x08,
     145,  143,   13,   13, 0x08,
     167,  143,   13,   13, 0x08,

 // properties: name, type, flags
     198,  191, 0x43495103,
     230,  211, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,

 // enums: name, flags, count, data
     238, 0x0,    3,   61,

 // enum data: key, value
     256, uint(QColorDialog::ShowAlphaChannel),
     273, uint(QColorDialog::NoButtons),
     283, uint(QColorDialog::DontUseNativeDialog),

       0        // eod
};

static const char qt_meta_stringdata_QColorDialog[] = {
    "QColorDialog\0\0color\0currentColorChanged(QColor)\0"
    "colorSelected(QColor)\0_q_addCustom()\0"
    "h,s,v\0_q_newHsv(int,int,int)\0rgb\0"
    "_q_newColorTypedIn(QRgb)\0,\0"
    "_q_newCustom(int,int)\0_q_newStandard(int,int)\0"
    "QColor\0currentColor\0ColorDialogOptions\0"
    "options\0ColorDialogOption\0ShowAlphaChannel\0"
    "NoButtons\0DontUseNativeDialog\0"
};

void QColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QColorDialog *_t = static_cast<QColorDialog *>(_o);
        switch (_id) {
        case 0: _t->currentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->colorSelected((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_addCustom(); break;
        case 3: _t->d_func()->_q_newHsv((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->d_func()->_q_newColorTypedIn((*reinterpret_cast< QRgb(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_newCustom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->d_func()->_q_newStandard((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QColorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QColorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QColorDialog,
      qt_meta_data_QColorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QColorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QColorDialog))
        return static_cast<void*>(const_cast< QColorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = currentColor(); break;
        case 1: *reinterpret_cast< ColorDialogOptions*>(_v) = options(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setOptions(*reinterpret_cast< ColorDialogOptions*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QColorDialog::currentColorChanged(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QColorDialog::colorSelected(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
