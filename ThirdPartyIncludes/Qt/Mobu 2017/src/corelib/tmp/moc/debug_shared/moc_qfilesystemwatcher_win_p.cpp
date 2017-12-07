/****************************************************************************
** Meta object code from reading C++ file 'qfilesystemwatcher_win_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../io/qfilesystemwatcher_win_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfilesystemwatcher_win_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QWindowsFileSystemWatcherEngine[] = {

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

static const char qt_meta_stringdata_QWindowsFileSystemWatcherEngine[] = {
    "QWindowsFileSystemWatcherEngine\0"
};

void QWindowsFileSystemWatcherEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QWindowsFileSystemWatcherEngine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWindowsFileSystemWatcherEngine::staticMetaObject = {
    { &QFileSystemWatcherEngine::staticMetaObject, qt_meta_stringdata_QWindowsFileSystemWatcherEngine,
      qt_meta_data_QWindowsFileSystemWatcherEngine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWindowsFileSystemWatcherEngine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWindowsFileSystemWatcherEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWindowsFileSystemWatcherEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsFileSystemWatcherEngine))
        return static_cast<void*>(const_cast< QWindowsFileSystemWatcherEngine*>(this));
    return QFileSystemWatcherEngine::qt_metacast(_clname);
}

int QWindowsFileSystemWatcherEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileSystemWatcherEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QWindowsFileSystemWatcherEngineThread[] = {

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
      52,   39,   38,   38, 0x05,
      78,   39,   38,   38, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QWindowsFileSystemWatcherEngineThread[] = {
    "QWindowsFileSystemWatcherEngineThread\0"
    "\0path,removed\0fileChanged(QString,bool)\0"
    "directoryChanged(QString,bool)\0"
};

void QWindowsFileSystemWatcherEngineThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QWindowsFileSystemWatcherEngineThread *_t = static_cast<QWindowsFileSystemWatcherEngineThread *>(_o);
        switch (_id) {
        case 0: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QWindowsFileSystemWatcherEngineThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWindowsFileSystemWatcherEngineThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QWindowsFileSystemWatcherEngineThread,
      qt_meta_data_QWindowsFileSystemWatcherEngineThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWindowsFileSystemWatcherEngineThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWindowsFileSystemWatcherEngineThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWindowsFileSystemWatcherEngineThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsFileSystemWatcherEngineThread))
        return static_cast<void*>(const_cast< QWindowsFileSystemWatcherEngineThread*>(this));
    return QThread::qt_metacast(_clname);
}

int QWindowsFileSystemWatcherEngineThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void QWindowsFileSystemWatcherEngineThread::fileChanged(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWindowsFileSystemWatcherEngineThread::directoryChanged(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
