/****************************************************************************
** Meta object code from reading C++ file 'qgraphicswidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsview/qgraphicswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGraphicsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      14,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      35,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   16,   51,   16, 0x0a,
      64,   16,   16,   16, 0x08,

 // properties: name, type, flags
      87,   78, 0x44095103,
     101,   95, 0x40095103,
     126,  106, 0x0009510f,
     149,  142, 0x16495003,
     154,  142, 0x16095103,
     166,  142, 0x16095103,
     180,  142, 0x16095103,
     204,  192, 0x4b095103,
     231,  215, 0x0009510b,
     259,  243, 0x0009510b,
     279,  271, 0x0a095103,
     298,  291, 0x14495103,
     307,   51, 0x01095103,
     343,  326, 0x0049510b,

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
       1,

       0        // eod
};

static const char qt_meta_stringdata_QGraphicsWidget[] = {
    "QGraphicsWidget\0\0geometryChanged()\0"
    "layoutChanged()\0bool\0close()\0_q_relayout()\0"
    "QPalette\0palette\0QFont\0font\0"
    "Qt::LayoutDirection\0layoutDirection\0"
    "QSizeF\0size\0minimumSize\0preferredSize\0"
    "maximumSize\0QSizePolicy\0sizePolicy\0"
    "Qt::FocusPolicy\0focusPolicy\0Qt::WindowFlags\0"
    "windowFlags\0QString\0windowTitle\0QRectF\0"
    "geometry\0autoFillBackground\0"
    "QGraphicsLayout*\0layout\0"
};

void QGraphicsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGraphicsWidget *_t = static_cast<QGraphicsWidget *>(_o);
        switch (_id) {
        case 0: _t->geometryChanged(); break;
        case 1: _t->layoutChanged(); break;
        case 2: { bool _r = _t->close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->d_func()->_q_relayout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGraphicsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGraphicsWidget::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_QGraphicsWidget,
      qt_meta_data_QGraphicsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGraphicsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGraphicsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGraphicsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsWidget))
        return static_cast<void*>(const_cast< QGraphicsWidget*>(this));
    if (!strcmp(_clname, "QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< QGraphicsWidget*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< QGraphicsWidget*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< QGraphicsWidget*>(this));
    return QGraphicsObject::qt_metacast(_clname);
}

int QGraphicsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPalette*>(_v) = palette(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = font(); break;
        case 2: *reinterpret_cast< Qt::LayoutDirection*>(_v) = layoutDirection(); break;
        case 3: *reinterpret_cast< QSizeF*>(_v) = size(); break;
        case 4: *reinterpret_cast< QSizeF*>(_v) = minimumSize(); break;
        case 5: *reinterpret_cast< QSizeF*>(_v) = preferredSize(); break;
        case 6: *reinterpret_cast< QSizeF*>(_v) = maximumSize(); break;
        case 7: *reinterpret_cast< QSizePolicy*>(_v) = sizePolicy(); break;
        case 8: *reinterpret_cast< Qt::FocusPolicy*>(_v) = focusPolicy(); break;
        case 9: *reinterpret_cast< Qt::WindowFlags*>(_v) = windowFlags(); break;
        case 10: *reinterpret_cast< QString*>(_v) = windowTitle(); break;
        case 11: *reinterpret_cast< QRectF*>(_v) = geometry(); break;
        case 12: *reinterpret_cast< bool*>(_v) = autoFillBackground(); break;
        case 13: *reinterpret_cast< QGraphicsLayout**>(_v) = layout(); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPalette(*reinterpret_cast< QPalette*>(_v)); break;
        case 1: setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 3: resize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 4: setMinimumSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 5: setPreferredSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 6: setMaximumSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 7: setSizePolicy(*reinterpret_cast< QSizePolicy*>(_v)); break;
        case 8: setFocusPolicy(*reinterpret_cast< Qt::FocusPolicy*>(_v)); break;
        case 9: setWindowFlags(*reinterpret_cast< Qt::WindowFlags*>(_v)); break;
        case 10: setWindowTitle(*reinterpret_cast< QString*>(_v)); break;
        case 11: setGeometry(*reinterpret_cast< QRectF*>(_v)); break;
        case 12: setAutoFillBackground(*reinterpret_cast< bool*>(_v)); break;
        case 13: setLayout(*reinterpret_cast< QGraphicsLayout**>(_v)); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 2: unsetLayoutDirection(); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGraphicsWidget::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QGraphicsWidget::layoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
