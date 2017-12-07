/****************************************************************************
** Meta object code from reading C++ file 'qwizard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogs/qwizard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QWizard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       6,   69, // properties
       3,   93, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,    9,    8,    8, 0x05,
      34,    8,    8,    8, 0x05,
      56,   50,    8,    8, 0x05,
      81,    9,    8,    8, 0x05,
      96,    9,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     113,    8,    8,    8, 0x0a,
     120,    8,    8,    8, 0x0a,
     127,    8,    8,    8, 0x0a,
     137,    8,    8,    8, 0x08,
     166,    8,    8,    8, 0x08,
     190,    8,    8,    8, 0x08,

 // properties: name, type, flags
     242,  230, 0x0009510b,
     268,  254, 0x0009510b,
     291,  276, 0x0009510b,
     303,  276, 0x0009510b,
     322,  318, 0x02095103,
     330,  318, 0x02495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
     230, 0x0,    5,  105,
     340, 0x0,   16,  115,
     254, 0x1,   16,  147,

 // enum data: key, value
     353, uint(QWizard::ClassicStyle),
     366, uint(QWizard::ModernStyle),
     378, uint(QWizard::MacStyle),
     387, uint(QWizard::AeroStyle),
     397, uint(QWizard::NStyles),
     405, uint(QWizard::IndependentPages),
     422, uint(QWizard::IgnoreSubTitles),
     438, uint(QWizard::ExtendedWatermarkPixmap),
     462, uint(QWizard::NoDefaultButton),
     478, uint(QWizard::NoBackButtonOnStartPage),
     502, uint(QWizard::NoBackButtonOnLastPage),
     525, uint(QWizard::DisabledBackButtonOnLastPage),
     554, uint(QWizard::HaveNextButtonOnLastPage),
     579, uint(QWizard::HaveFinishButtonOnEarlyPages),
     608, uint(QWizard::NoCancelButton),
     623, uint(QWizard::CancelButtonOnLeft),
     642, uint(QWizard::HaveHelpButton),
     657, uint(QWizard::HelpButtonOnRight),
     675, uint(QWizard::HaveCustomButton1),
     693, uint(QWizard::HaveCustomButton2),
     711, uint(QWizard::HaveCustomButton3),
     405, uint(QWizard::IndependentPages),
     422, uint(QWizard::IgnoreSubTitles),
     438, uint(QWizard::ExtendedWatermarkPixmap),
     462, uint(QWizard::NoDefaultButton),
     478, uint(QWizard::NoBackButtonOnStartPage),
     502, uint(QWizard::NoBackButtonOnLastPage),
     525, uint(QWizard::DisabledBackButtonOnLastPage),
     554, uint(QWizard::HaveNextButtonOnLastPage),
     579, uint(QWizard::HaveFinishButtonOnEarlyPages),
     608, uint(QWizard::NoCancelButton),
     623, uint(QWizard::CancelButtonOnLeft),
     642, uint(QWizard::HaveHelpButton),
     657, uint(QWizard::HelpButtonOnRight),
     675, uint(QWizard::HaveCustomButton1),
     693, uint(QWizard::HaveCustomButton2),
     711, uint(QWizard::HaveCustomButton3),

       0        // eod
};

static const char qt_meta_stringdata_QWizard[] = {
    "QWizard\0\0id\0currentIdChanged(int)\0"
    "helpRequested()\0which\0customButtonClicked(int)\0"
    "pageAdded(int)\0pageRemoved(int)\0back()\0"
    "next()\0restart()\0_q_emitCustomButtonClicked()\0"
    "_q_updateButtonStates()\0"
    "_q_handleFieldObjectDestroyed(QObject*)\0"
    "WizardStyle\0wizardStyle\0WizardOptions\0"
    "options\0Qt::TextFormat\0titleFormat\0"
    "subTitleFormat\0int\0startId\0currentId\0"
    "WizardOption\0ClassicStyle\0ModernStyle\0"
    "MacStyle\0AeroStyle\0NStyles\0IndependentPages\0"
    "IgnoreSubTitles\0ExtendedWatermarkPixmap\0"
    "NoDefaultButton\0NoBackButtonOnStartPage\0"
    "NoBackButtonOnLastPage\0"
    "DisabledBackButtonOnLastPage\0"
    "HaveNextButtonOnLastPage\0"
    "HaveFinishButtonOnEarlyPages\0"
    "NoCancelButton\0CancelButtonOnLeft\0"
    "HaveHelpButton\0HelpButtonOnRight\0"
    "HaveCustomButton1\0HaveCustomButton2\0"
    "HaveCustomButton3\0"
};

void QWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QWizard *_t = static_cast<QWizard *>(_o);
        switch (_id) {
        case 0: _t->currentIdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->helpRequested(); break;
        case 2: _t->customButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->pageAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->pageRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->back(); break;
        case 6: _t->next(); break;
        case 7: _t->restart(); break;
        case 8: _t->d_func()->_q_emitCustomButtonClicked(); break;
        case 9: _t->d_func()->_q_updateButtonStates(); break;
        case 10: _t->d_func()->_q_handleFieldObjectDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QWizard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWizard::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QWizard,
      qt_meta_data_QWizard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWizard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWizard))
        return static_cast<void*>(const_cast< QWizard*>(this));
    return QDialog::qt_metacast(_clname);
}

int QWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< WizardStyle*>(_v) = wizardStyle(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(options()); break;
        case 2: *reinterpret_cast< Qt::TextFormat*>(_v) = titleFormat(); break;
        case 3: *reinterpret_cast< Qt::TextFormat*>(_v) = subTitleFormat(); break;
        case 4: *reinterpret_cast< int*>(_v) = startId(); break;
        case 5: *reinterpret_cast< int*>(_v) = currentId(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWizardStyle(*reinterpret_cast< WizardStyle*>(_v)); break;
        case 1: setOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: setTitleFormat(*reinterpret_cast< Qt::TextFormat*>(_v)); break;
        case 3: setSubTitleFormat(*reinterpret_cast< Qt::TextFormat*>(_v)); break;
        case 4: setStartId(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QWizard::currentIdChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWizard::helpRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QWizard::customButtonClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWizard::pageAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QWizard::pageRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_QWizardPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   12,   12,   12, 0x08,
      61,   12,   12,   12, 0x08,

 // properties: name, type, flags
     100,   92, 0x0a095103,
     106,   92, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_QWizardPage[] = {
    "QWizardPage\0\0completeChanged()\0"
    "_q_maybeEmitCompleteChanged()\0"
    "_q_updateCachedCompleteState()\0QString\0"
    "title\0subTitle\0"
};

void QWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QWizardPage *_t = static_cast<QWizardPage *>(_o);
        switch (_id) {
        case 0: _t->completeChanged(); break;
        case 1: _t->d_func()->_q_maybeEmitCompleteChanged(); break;
        case 2: _t->d_func()->_q_updateCachedCompleteState(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QWizardPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWizardPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QWizardPage,
      qt_meta_data_QWizardPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWizardPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWizardPage))
        return static_cast<void*>(const_cast< QWizardPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int QWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = title(); break;
        case 1: *reinterpret_cast< QString*>(_v) = subTitle(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: setSubTitle(*reinterpret_cast< QString*>(_v)); break;
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
void QWizardPage::completeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
