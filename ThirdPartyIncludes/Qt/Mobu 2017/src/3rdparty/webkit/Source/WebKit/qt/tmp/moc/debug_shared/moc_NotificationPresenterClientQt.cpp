/****************************************************************************
** Meta object code from reading C++ file 'NotificationPresenterClientQt.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../WebCoreSupport/NotificationPresenterClientQt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NotificationPresenterClientQt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebCore__NotificationWrapper[] = {

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
      30,   29,   29,   29, 0x0a,
      51,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WebCore__NotificationWrapper[] = {
    "WebCore::NotificationWrapper\0\0"
    "notificationClosed()\0notificationClicked()\0"
};

void WebCore::NotificationWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NotificationWrapper *_t = static_cast<NotificationWrapper *>(_o);
        switch (_id) {
        case 0: _t->notificationClosed(); break;
        case 1: _t->notificationClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WebCore::NotificationWrapper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebCore::NotificationWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebCore__NotificationWrapper,
      qt_meta_data_WebCore__NotificationWrapper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebCore::NotificationWrapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebCore::NotificationWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebCore::NotificationWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebCore__NotificationWrapper))
        return static_cast<void*>(const_cast< NotificationWrapper*>(this));
    if (!strcmp(_clname, "QWebNotificationData"))
        return static_cast< QWebNotificationData*>(const_cast< NotificationWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int WebCore::NotificationWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
