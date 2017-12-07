/****************************************************************************
** Meta object code from reading C++ file 'qsyntaxhighlighter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../text/qsyntaxhighlighter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsyntaxhighlighter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSyntaxHighlighter[] = {

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
      20,   19,   19,   19, 0x0a,
      40,   34,   19,   19, 0x0a,
      98,   69,   19,   19, 0x08,
     129,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QSyntaxHighlighter[] = {
    "QSyntaxHighlighter\0\0rehighlight()\0"
    "block\0rehighlightBlock(QTextBlock)\0"
    "from,charsRemoved,charsAdded\0"
    "_q_reformatBlocks(int,int,int)\0"
    "_q_delayedRehighlight()\0"
};

void QSyntaxHighlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSyntaxHighlighter *_t = static_cast<QSyntaxHighlighter *>(_o);
        switch (_id) {
        case 0: _t->rehighlight(); break;
        case 1: _t->rehighlightBlock((*reinterpret_cast< const QTextBlock(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_reformatBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->d_func()->_q_delayedRehighlight(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSyntaxHighlighter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSyntaxHighlighter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSyntaxHighlighter,
      qt_meta_data_QSyntaxHighlighter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSyntaxHighlighter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSyntaxHighlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSyntaxHighlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSyntaxHighlighter))
        return static_cast<void*>(const_cast< QSyntaxHighlighter*>(this));
    return QObject::qt_metacast(_clname);
}

int QSyntaxHighlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
