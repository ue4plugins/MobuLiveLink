/****************************************************************************
** Meta object code from reading C++ file 'qnetworkreplyimpl_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../access/qnetworkreplyimpl_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkreplyimpl_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QNetworkReplyImpl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      39,   18,   18,   18, 0x0a,
      58,   18,   18,   18, 0x0a,
      87,   18,   18,   18, 0x0a,
     111,   18,   18,   18, 0x0a,
     143,   18,   18,   18, 0x0a,
     172,   18,   18,   18, 0x0a,
     198,   18,   18,   18, 0x0a,

 // methods: signature, parameters, type, tag, flags
     236,   18,  218,   18, 0x02,
     283,  269,   18,   18, 0x02,
     343,  336,   18,   18, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_QNetworkReplyImpl[] = {
    "QNetworkReplyImpl\0\0_q_startOperation()\0"
    "_q_copyReadyRead()\0_q_copyReadChannelFinished()\0"
    "_q_bufferOutgoingData()\0"
    "_q_bufferOutgoingDataFinished()\0"
    "_q_networkSessionConnected()\0"
    "_q_networkSessionFailed()\0_q_cacheDestroyed()\0"
    "QSslConfiguration\0sslConfigurationImplementation()\0"
    "configuration\0"
    "setSslConfigurationImplementation(QSslConfiguration)\0"
    "errors\0ignoreSslErrorsImplementation(QList<QSslError>)\0"
};

void QNetworkReplyImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNetworkReplyImpl *_t = static_cast<QNetworkReplyImpl *>(_o);
        switch (_id) {
        case 0: _t->d_func()->_q_startOperation(); break;
        case 1: _t->d_func()->_q_copyReadyRead(); break;
        case 2: _t->d_func()->_q_copyReadChannelFinished(); break;
        case 3: _t->d_func()->_q_bufferOutgoingData(); break;
        case 4: _t->d_func()->_q_bufferOutgoingDataFinished(); break;
        case 5: _t->d_func()->_q_networkSessionConnected(); break;
        case 6: _t->d_func()->_q_networkSessionFailed(); break;
        case 7: _t->d_func()->_q_cacheDestroyed(); break;
        case 8: { QSslConfiguration _r = _t->sslConfigurationImplementation();
            if (_a[0]) *reinterpret_cast< QSslConfiguration*>(_a[0]) = _r; }  break;
        case 9: _t->setSslConfigurationImplementation((*reinterpret_cast< const QSslConfiguration(*)>(_a[1]))); break;
        case 10: _t->ignoreSslErrorsImplementation((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QNetworkReplyImpl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNetworkReplyImpl::staticMetaObject = {
    { &QNetworkReply::staticMetaObject, qt_meta_stringdata_QNetworkReplyImpl,
      qt_meta_data_QNetworkReplyImpl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNetworkReplyImpl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNetworkReplyImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNetworkReplyImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkReplyImpl))
        return static_cast<void*>(const_cast< QNetworkReplyImpl*>(this));
    return QNetworkReply::qt_metacast(_clname);
}

int QNetworkReplyImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_QDisabledNetworkReply[] = {

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

static const char qt_meta_stringdata_QDisabledNetworkReply[] = {
    "QDisabledNetworkReply\0"
};

void QDisabledNetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDisabledNetworkReply::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDisabledNetworkReply::staticMetaObject = {
    { &QNetworkReply::staticMetaObject, qt_meta_stringdata_QDisabledNetworkReply,
      qt_meta_data_QDisabledNetworkReply, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDisabledNetworkReply::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDisabledNetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDisabledNetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDisabledNetworkReply))
        return static_cast<void*>(const_cast< QDisabledNetworkReply*>(this));
    return QNetworkReply::qt_metacast(_clname);
}

int QDisabledNetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
