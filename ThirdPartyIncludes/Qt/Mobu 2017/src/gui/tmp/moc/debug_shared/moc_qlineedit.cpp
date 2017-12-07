/****************************************************************************
** Meta object code from reading C++ file 'qlineedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qlineedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
      18,  119, // properties
       1,  191, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      32,   10,   10,   10, 0x05,
      54,   52,   10,   10, 0x05,
      85,   10,   10,   10, 0x05,
     101,   10,   10,   10, 0x05,
     119,   10,   10,   10, 0x05,
     138,   10,   10,   10, 0x15,

 // slots: signature, parameters, type, tag, flags
     150,   10,   10,   10, 0x0a,
     167,   10,   10,   10, 0x0a,
     175,   10,   10,   10, 0x0a,
     187,   10,   10,   10, 0x0a,
     194,   10,   10,   10, 0x0a,
     201,   10,   10,   10, 0x0a,
     207,   10,   10,   10, 0x0a,
     214,   10,   10,   10, 0x0a,
     222,   10,   10,   10, 0x08,
     248,   10,   10,   10, 0x08,
     271,   52,   10,   10, 0x08,
     305,   10,   10,   10, 0x08,
     339,   10,   10,   10, 0x08,
     361,   10,   10,   10, 0x08,

 // properties: name, type, flags
     392,  384, 0x0a095103,
     402,  384, 0x0a595103,
     411,  407, 0x02095103,
     426,  421, 0x01095103,
     441,  432, 0x0009510b,
     450,  384, 0x0a095001,
     462,  407, 0x02095103,
     491,  477, 0x0009510b,
     501,  421, 0x01094103,
     510,  421, 0x01095001,
     526,  384, 0x0a095001,
     539,  421, 0x01095103,
     551,  421, 0x01095103,
     560,  421, 0x01095001,
     574,  421, 0x01095001,
     588,  421, 0x01095001,
     604,  384, 0x0a095103,
     640,  620, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
     432, 0x0,    4,  195,

 // enum data: key, value
     656, uint(QLineEdit::Normal),
     663, uint(QLineEdit::NoEcho),
     670, uint(QLineEdit::Password),
     679, uint(QLineEdit::PasswordEchoOnEdit),

       0        // eod
};

static const char qt_meta_stringdata_QLineEdit[] = {
    "QLineEdit\0\0textChanged(QString)\0"
    "textEdited(QString)\0,\0"
    "cursorPositionChanged(int,int)\0"
    "returnPressed()\0editingFinished()\0"
    "selectionChanged()\0lostFocus()\0"
    "setText(QString)\0clear()\0selectAll()\0"
    "undo()\0redo()\0cut()\0copy()\0paste()\0"
    "_q_handleWindowActivate()\0"
    "_q_textEdited(QString)\0"
    "_q_cursorPositionChanged(int,int)\0"
    "_q_completionHighlighted(QString)\0"
    "_q_selectionChanged()\0_q_updateNeeded(QRect)\0"
    "QString\0inputMask\0text\0int\0maxLength\0"
    "bool\0frame\0EchoMode\0echoMode\0displayText\0"
    "cursorPosition\0Qt::Alignment\0alignment\0"
    "modified\0hasSelectedText\0selectedText\0"
    "dragEnabled\0readOnly\0undoAvailable\0"
    "redoAvailable\0acceptableInput\0"
    "placeholderText\0Qt::CursorMoveStyle\0"
    "cursorMoveStyle\0Normal\0NoEcho\0Password\0"
    "PasswordEchoOnEdit\0"
};

void QLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QLineEdit *_t = static_cast<QLineEdit *>(_o);
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->returnPressed(); break;
        case 4: _t->editingFinished(); break;
        case 5: _t->selectionChanged(); break;
        case 6: _t->lostFocus(); break;
        case 7: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->clear(); break;
        case 9: _t->selectAll(); break;
        case 10: _t->undo(); break;
        case 11: _t->redo(); break;
        case 12: _t->cut(); break;
        case 13: _t->copy(); break;
        case 14: _t->paste(); break;
        case 15: _t->d_func()->_q_handleWindowActivate(); break;
        case 16: _t->d_func()->_q_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->d_func()->_q_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->d_func()->_q_completionHighlighted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->d_func()->_q_selectionChanged(); break;
        case 20: _t->d_func()->_q_updateNeeded((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QLineEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QLineEdit,
      qt_meta_data_QLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLineEdit))
        return static_cast<void*>(const_cast< QLineEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int QLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = inputMask(); break;
        case 1: *reinterpret_cast< QString*>(_v) = text(); break;
        case 2: *reinterpret_cast< int*>(_v) = maxLength(); break;
        case 3: *reinterpret_cast< bool*>(_v) = hasFrame(); break;
        case 4: *reinterpret_cast< EchoMode*>(_v) = echoMode(); break;
        case 5: *reinterpret_cast< QString*>(_v) = displayText(); break;
        case 6: *reinterpret_cast< int*>(_v) = cursorPosition(); break;
        case 7: *reinterpret_cast< Qt::Alignment*>(_v) = alignment(); break;
        case 8: *reinterpret_cast< bool*>(_v) = isModified(); break;
        case 9: *reinterpret_cast< bool*>(_v) = hasSelectedText(); break;
        case 10: *reinterpret_cast< QString*>(_v) = selectedText(); break;
        case 11: *reinterpret_cast< bool*>(_v) = dragEnabled(); break;
        case 12: *reinterpret_cast< bool*>(_v) = isReadOnly(); break;
        case 13: *reinterpret_cast< bool*>(_v) = isUndoAvailable(); break;
        case 14: *reinterpret_cast< bool*>(_v) = isRedoAvailable(); break;
        case 15: *reinterpret_cast< bool*>(_v) = hasAcceptableInput(); break;
        case 16: *reinterpret_cast< QString*>(_v) = placeholderText(); break;
        case 17: *reinterpret_cast< Qt::CursorMoveStyle*>(_v) = cursorMoveStyle(); break;
        }
        _id -= 18;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setInputMask(*reinterpret_cast< QString*>(_v)); break;
        case 1: setText(*reinterpret_cast< QString*>(_v)); break;
        case 2: setMaxLength(*reinterpret_cast< int*>(_v)); break;
        case 3: setFrame(*reinterpret_cast< bool*>(_v)); break;
        case 4: setEchoMode(*reinterpret_cast< EchoMode*>(_v)); break;
        case 6: setCursorPosition(*reinterpret_cast< int*>(_v)); break;
        case 7: setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 8: setModified(*reinterpret_cast< bool*>(_v)); break;
        case 11: setDragEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 12: setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 16: setPlaceholderText(*reinterpret_cast< QString*>(_v)); break;
        case 17: setCursorMoveStyle(*reinterpret_cast< Qt::CursorMoveStyle*>(_v)); break;
        }
        _id -= 18;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QLineEdit::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QLineEdit::textEdited(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QLineEdit::cursorPositionChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QLineEdit::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QLineEdit::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QLineEdit::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QLineEdit::lostFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
