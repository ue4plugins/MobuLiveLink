/****************************************************************************
** Meta object code from reading C++ file 'qnetworkaccessftpbackend_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../access/qnetworkaccessftpbackend_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkaccessftpbackend_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QNetworkAccessFtpBackend[] = {

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
      33,   26,   25,   25, 0x0a,
      91,   25,   25,   25, 0x0a,
     101,   25,   25,   25, 0x0a,
     126,  116,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QNetworkAccessFtpBackend[] = {
    "QNetworkAccessFtpBackend\0\0object\0"
    "ftpConnectionReady(QNetworkAccessCache::CacheableObject*)\0"
    "ftpDone()\0ftpReadyRead()\0code,text\0"
    "ftpRawCommandReply(int,QString)\0"
};

void QNetworkAccessFtpBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNetworkAccessFtpBackend *_t = static_cast<QNetworkAccessFtpBackend *>(_o);
        switch (_id) {
        case 0: _t->ftpConnectionReady((*reinterpret_cast< QNetworkAccessCache::CacheableObject*(*)>(_a[1]))); break;
        case 1: _t->ftpDone(); break;
        case 2: _t->ftpReadyRead(); break;
        case 3: _t->ftpRawCommandReply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QNetworkAccessFtpBackend::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNetworkAccessFtpBackend::staticMetaObject = {
    { &QNetworkAccessBackend::staticMetaObject, qt_meta_stringdata_QNetworkAccessFtpBackend,
      qt_meta_data_QNetworkAccessFtpBackend, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNetworkAccessFtpBackend::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNetworkAccessFtpBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNetworkAccessFtpBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkAccessFtpBackend))
        return static_cast<void*>(const_cast< QNetworkAccessFtpBackend*>(this));
    return QNetworkAccessBackend::qt_metacast(_clname);
}

int QNetworkAccessFtpBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessBackend::qt_metacall(_c, _id, _a);
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
