/****************************************************************************
** Meta object code from reading C++ file 'qwebkitplatformplugin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Api/qwebkitplatformplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebkitplatformplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QWebSelectMethod[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      54,   18,   17,   17, 0x05,
      80,   17,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QWebSelectMethod[] = {
    "QWebSelectMethod\0\0index,allowMultiplySelections,shift\0"
    "selectItem(int,bool,bool)\0didHide()\0"
};

void QWebSelectMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QWebSelectMethod *_t = static_cast<QWebSelectMethod *>(_o);
        switch (_id) {
        case 0: _t->selectItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->didHide(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QWebSelectMethod::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWebSelectMethod::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebSelectMethod,
      qt_meta_data_QWebSelectMethod, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWebSelectMethod::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWebSelectMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWebSelectMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWebSelectMethod))
        return static_cast<void*>(const_cast< QWebSelectMethod*>(this));
    return QObject::qt_metacast(_clname);
}

int QWebSelectMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QWebSelectMethod::selectItem(int _t1, bool _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWebSelectMethod::didHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_QWebNotificationPresenter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      48,   26,   26,   26, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QWebNotificationPresenter[] = {
    "QWebNotificationPresenter\0\0"
    "notificationClosed()\0notificationClicked()\0"
};

void QWebNotificationPresenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QWebNotificationPresenter *_t = static_cast<QWebNotificationPresenter *>(_o);
        switch (_id) {
        case 0: _t->notificationClosed(); break;
        case 1: _t->notificationClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QWebNotificationPresenter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWebNotificationPresenter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebNotificationPresenter,
      qt_meta_data_QWebNotificationPresenter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWebNotificationPresenter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWebNotificationPresenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWebNotificationPresenter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWebNotificationPresenter))
        return static_cast<void*>(const_cast< QWebNotificationPresenter*>(this));
    return QObject::qt_metacast(_clname);
}

int QWebNotificationPresenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QWebNotificationPresenter::notificationClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QWebNotificationPresenter::notificationClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_QWebHapticFeedbackPlayer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QWebHapticFeedbackPlayer[] = {
    "QWebHapticFeedbackPlayer\0"
};

void QWebHapticFeedbackPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QWebHapticFeedbackPlayer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWebHapticFeedbackPlayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebHapticFeedbackPlayer,
      qt_meta_data_QWebHapticFeedbackPlayer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWebHapticFeedbackPlayer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWebHapticFeedbackPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWebHapticFeedbackPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWebHapticFeedbackPlayer))
        return static_cast<void*>(const_cast< QWebHapticFeedbackPlayer*>(this));
    return QObject::qt_metacast(_clname);
}

int QWebHapticFeedbackPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QWebTouchModifier[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QWebTouchModifier[] = {
    "QWebTouchModifier\0"
};

void QWebTouchModifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QWebTouchModifier::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWebTouchModifier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebTouchModifier,
      qt_meta_data_QWebTouchModifier, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWebTouchModifier::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWebTouchModifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWebTouchModifier::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWebTouchModifier))
        return static_cast<void*>(const_cast< QWebTouchModifier*>(this));
    return QObject::qt_metacast(_clname);
}

int QWebTouchModifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
