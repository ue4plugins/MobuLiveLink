/****************************************************************************
** Meta object code from reading C++ file 'qwebpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Api/qwebpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QWebPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
      10,  169, // properties
       3,  199, // enums/sets
       0,    0, // constructors
       0,       // flags
      27,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      33,   24,    9,    9, 0x05,
      54,   51,    9,    9, 0x05,
      96,   73,    9,    9, 0x05,
     138,  133,    9,    9, 0x05,
     164,    9,    9,    9, 0x05,
     189,  183,    9,    9, 0x05,
     219,  214,    9,    9, 0x05,
     260,  250,    9,    9, 0x05,
     305,  284,    9,    9, 0x05,
     336,    9,    9,    9, 0x05,
     359,  183,    9,    9, 0x05,
     390,  386,    9,    9, 0x05,
     416,  408,    9,    9, 0x05,
     455,  408,    9,    9, 0x05,
     496,  408,    9,    9, 0x05,
     541,  535,    9,    9, 0x05,
     584,  576,    9,    9, 0x05,
     619,    9,    9,    9, 0x05,
     639,    9,    9,    9, 0x05,
     676,  657,    9,    9, 0x05,
     744,  718,    9,    9, 0x05,
     814,  803,    9,    9, 0x05,
     867,  183,    9,    9, 0x05,
     906,    9,    9,    9, 0x05,
     946,  932,    9,    9, 0x05,
    1003,  932,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
    1071,    9, 1066,    9, 0x0a,
    1099,    9,    9,    9, 0x08,
    1137, 1129,    9,    9, 0x08,
    1165,    9,    9,    9, 0x08,

 // properties: name, type, flags
    1190, 1066, 0x01095001,
    1207, 1199, 0x0a095001,
    1220, 1199, 0x0a095001,
    1233, 1066, 0x01095001,
    1252, 1246, 0x15095103,
    1265, 1246, 0x15095103,
    1287, 1066, 0x01095103,
    1334, 1313, 0x0009510b,
    1364, 1355, 0x44095103,
    1372, 1066, 0x01095103,

 // enums: name, flags, count, data
    1388, 0x0,    6,  211,
    1403, 0x0,   71,  223,
    1313, 0x0,    3,  365,

 // enum data: key, value
    1413, uint(QWebPage::NavigationTypeLinkClicked),
    1439, uint(QWebPage::NavigationTypeFormSubmitted),
    1467, uint(QWebPage::NavigationTypeBackOrForward),
    1495, uint(QWebPage::NavigationTypeReload),
    1516, uint(QWebPage::NavigationTypeFormResubmitted),
    1546, uint(QWebPage::NavigationTypeOther),
    1566, uint(QWebPage::NoWebAction),
    1578, uint(QWebPage::OpenLink),
    1587, uint(QWebPage::OpenLinkInNewWindow),
    1607, uint(QWebPage::OpenFrameInNewWindow),
    1628, uint(QWebPage::DownloadLinkToDisk),
    1647, uint(QWebPage::CopyLinkToClipboard),
    1667, uint(QWebPage::OpenImageInNewWindow),
    1688, uint(QWebPage::DownloadImageToDisk),
    1708, uint(QWebPage::CopyImageToClipboard),
    1729, uint(QWebPage::Back),
    1734, uint(QWebPage::Forward),
    1742, uint(QWebPage::Stop),
    1747, uint(QWebPage::Reload),
    1754, uint(QWebPage::Cut),
    1758, uint(QWebPage::Copy),
    1763, uint(QWebPage::Paste),
    1769, uint(QWebPage::Undo),
    1774, uint(QWebPage::Redo),
    1779, uint(QWebPage::MoveToNextChar),
    1794, uint(QWebPage::MoveToPreviousChar),
    1813, uint(QWebPage::MoveToNextWord),
    1828, uint(QWebPage::MoveToPreviousWord),
    1847, uint(QWebPage::MoveToNextLine),
    1862, uint(QWebPage::MoveToPreviousLine),
    1881, uint(QWebPage::MoveToStartOfLine),
    1899, uint(QWebPage::MoveToEndOfLine),
    1915, uint(QWebPage::MoveToStartOfBlock),
    1934, uint(QWebPage::MoveToEndOfBlock),
    1951, uint(QWebPage::MoveToStartOfDocument),
    1973, uint(QWebPage::MoveToEndOfDocument),
    1993, uint(QWebPage::SelectNextChar),
    2008, uint(QWebPage::SelectPreviousChar),
    2027, uint(QWebPage::SelectNextWord),
    2042, uint(QWebPage::SelectPreviousWord),
    2061, uint(QWebPage::SelectNextLine),
    2076, uint(QWebPage::SelectPreviousLine),
    2095, uint(QWebPage::SelectStartOfLine),
    2113, uint(QWebPage::SelectEndOfLine),
    2129, uint(QWebPage::SelectStartOfBlock),
    2148, uint(QWebPage::SelectEndOfBlock),
    2165, uint(QWebPage::SelectStartOfDocument),
    2187, uint(QWebPage::SelectEndOfDocument),
    2207, uint(QWebPage::DeleteStartOfWord),
    2225, uint(QWebPage::DeleteEndOfWord),
    2241, uint(QWebPage::SetTextDirectionDefault),
    2265, uint(QWebPage::SetTextDirectionLeftToRight),
    2293, uint(QWebPage::SetTextDirectionRightToLeft),
    2321, uint(QWebPage::ToggleBold),
    2332, uint(QWebPage::ToggleItalic),
    2345, uint(QWebPage::ToggleUnderline),
    2361, uint(QWebPage::InspectElement),
    2376, uint(QWebPage::InsertParagraphSeparator),
    2401, uint(QWebPage::InsertLineSeparator),
    2421, uint(QWebPage::SelectAll),
    2431, uint(QWebPage::ReloadAndBypassCache),
    2452, uint(QWebPage::PasteAndMatchStyle),
    2471, uint(QWebPage::RemoveFormat),
    2484, uint(QWebPage::ToggleStrikethrough),
    2504, uint(QWebPage::ToggleSubscript),
    2520, uint(QWebPage::ToggleSuperscript),
    2538, uint(QWebPage::InsertUnorderedList),
    2558, uint(QWebPage::InsertOrderedList),
    2576, uint(QWebPage::Indent),
    2583, uint(QWebPage::Outdent),
    2591, uint(QWebPage::AlignCenter),
    2603, uint(QWebPage::AlignJustified),
    2618, uint(QWebPage::AlignLeft),
    2628, uint(QWebPage::AlignRight),
    2639, uint(QWebPage::StopScheduledPageRefresh),
    2664, uint(QWebPage::CopyImageUrlToClipboard),
    2688, uint(QWebPage::WebActionCount),
    2703, uint(QWebPage::DontDelegateLinks),
    2721, uint(QWebPage::DelegateExternalLinks),
    2743, uint(QWebPage::DelegateAllLinks),

       0        // eod
};

static const char qt_meta_stringdata_QWebPage[] = {
    "QWebPage\0\0loadStarted()\0progress\0"
    "loadProgress(int)\0ok\0loadFinished(bool)\0"
    "link,title,textContent\0"
    "linkHovered(QString,QString,QString)\0"
    "text\0statusBarMessage(QString)\0"
    "selectionChanged()\0frame\0"
    "frameCreated(QWebFrame*)\0geom\0"
    "geometryChangeRequested(QRect)\0dirtyRect\0"
    "repaintRequested(QRect)\0dx,dy,scrollViewRect\0"
    "scrollRequested(int,int,QRect)\0"
    "windowCloseRequested()\0"
    "printRequested(QWebFrame*)\0url\0"
    "linkClicked(QUrl)\0visible\0"
    "toolBarVisibilityChangeRequested(bool)\0"
    "statusBarVisibilityChangeRequested(bool)\0"
    "menuBarVisibilityChangeRequested(bool)\0"
    "reply\0unsupportedContent(QNetworkReply*)\0"
    "request\0downloadRequested(QNetworkRequest)\0"
    "microFocusChanged()\0contentsChanged()\0"
    "frame,databaseName\0"
    "databaseQuotaExceeded(QWebFrame*,QString)\0"
    "origin,defaultOriginQuota\0"
    "applicationCacheQuotaExceeded(QWebSecurityOrigin*,quint64)\0"
    "frame,item\0"
    "saveFrameStateRequested(QWebFrame*,QWebHistoryItem*)\0"
    "restoreFrameStateRequested(QWebFrame*)\0"
    "viewportChangeRequested()\0frame,feature\0"
    "featurePermissionRequested(QWebFrame*,QWebPage::Feature)\0"
    "featurePermissionRequestCanceled(QWebFrame*,QWebPage::Feature)\0"
    "bool\0shouldInterruptJavaScript()\0"
    "_q_onLoadProgressChanged(int)\0checked\0"
    "_q_webActionTriggered(bool)\0"
    "_q_cleanupLeakMessages()\0modified\0"
    "QString\0selectedText\0selectedHtml\0"
    "hasSelection\0QSize\0viewportSize\0"
    "preferredContentsSize\0forwardUnsupportedContent\0"
    "LinkDelegationPolicy\0linkDelegationPolicy\0"
    "QPalette\0palette\0contentEditable\0"
    "NavigationType\0WebAction\0"
    "NavigationTypeLinkClicked\0"
    "NavigationTypeFormSubmitted\0"
    "NavigationTypeBackOrForward\0"
    "NavigationTypeReload\0NavigationTypeFormResubmitted\0"
    "NavigationTypeOther\0NoWebAction\0"
    "OpenLink\0OpenLinkInNewWindow\0"
    "OpenFrameInNewWindow\0DownloadLinkToDisk\0"
    "CopyLinkToClipboard\0OpenImageInNewWindow\0"
    "DownloadImageToDisk\0CopyImageToClipboard\0"
    "Back\0Forward\0Stop\0Reload\0Cut\0Copy\0"
    "Paste\0Undo\0Redo\0MoveToNextChar\0"
    "MoveToPreviousChar\0MoveToNextWord\0"
    "MoveToPreviousWord\0MoveToNextLine\0"
    "MoveToPreviousLine\0MoveToStartOfLine\0"
    "MoveToEndOfLine\0MoveToStartOfBlock\0"
    "MoveToEndOfBlock\0MoveToStartOfDocument\0"
    "MoveToEndOfDocument\0SelectNextChar\0"
    "SelectPreviousChar\0SelectNextWord\0"
    "SelectPreviousWord\0SelectNextLine\0"
    "SelectPreviousLine\0SelectStartOfLine\0"
    "SelectEndOfLine\0SelectStartOfBlock\0"
    "SelectEndOfBlock\0SelectStartOfDocument\0"
    "SelectEndOfDocument\0DeleteStartOfWord\0"
    "DeleteEndOfWord\0SetTextDirectionDefault\0"
    "SetTextDirectionLeftToRight\0"
    "SetTextDirectionRightToLeft\0ToggleBold\0"
    "ToggleItalic\0ToggleUnderline\0"
    "InspectElement\0InsertParagraphSeparator\0"
    "InsertLineSeparator\0SelectAll\0"
    "ReloadAndBypassCache\0PasteAndMatchStyle\0"
    "RemoveFormat\0ToggleStrikethrough\0"
    "ToggleSubscript\0ToggleSuperscript\0"
    "InsertUnorderedList\0InsertOrderedList\0"
    "Indent\0Outdent\0AlignCenter\0AlignJustified\0"
    "AlignLeft\0AlignRight\0StopScheduledPageRefresh\0"
    "CopyImageUrlToClipboard\0WebActionCount\0"
    "DontDelegateLinks\0DelegateExternalLinks\0"
    "DelegateAllLinks\0"
};

void QWebPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QWebPage *_t = static_cast<QWebPage *>(_o);
        switch (_id) {
        case 0: _t->loadStarted(); break;
        case 1: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->linkHovered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->statusBarMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->selectionChanged(); break;
        case 6: _t->frameCreated((*reinterpret_cast< QWebFrame*(*)>(_a[1]))); break;
        case 7: _t->geometryChangeRequested((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 8: _t->repaintRequested((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 9: _t->scrollRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3]))); break;
        case 10: _t->windowCloseRequested(); break;
        case 11: _t->printRequested((*reinterpret_cast< QWebFrame*(*)>(_a[1]))); break;
        case 12: _t->linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 13: _t->toolBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->statusBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->menuBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->unsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 17: _t->downloadRequested((*reinterpret_cast< const QNetworkRequest(*)>(_a[1]))); break;
        case 18: _t->microFocusChanged(); break;
        case 19: _t->contentsChanged(); break;
        case 20: _t->databaseQuotaExceeded((*reinterpret_cast< QWebFrame*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 21: _t->applicationCacheQuotaExceeded((*reinterpret_cast< QWebSecurityOrigin*(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 22: _t->saveFrameStateRequested((*reinterpret_cast< QWebFrame*(*)>(_a[1])),(*reinterpret_cast< QWebHistoryItem*(*)>(_a[2]))); break;
        case 23: _t->restoreFrameStateRequested((*reinterpret_cast< QWebFrame*(*)>(_a[1]))); break;
        case 24: _t->viewportChangeRequested(); break;
        case 25: _t->featurePermissionRequested((*reinterpret_cast< QWebFrame*(*)>(_a[1])),(*reinterpret_cast< QWebPage::Feature(*)>(_a[2]))); break;
        case 26: _t->featurePermissionRequestCanceled((*reinterpret_cast< QWebFrame*(*)>(_a[1])),(*reinterpret_cast< QWebPage::Feature(*)>(_a[2]))); break;
        case 27: { bool _r = _t->shouldInterruptJavaScript();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: _t->d->_q_onLoadProgressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->d->_q_webActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->d->_q_cleanupLeakMessages(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QWebPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWebPage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebPage,
      qt_meta_data_QWebPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWebPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWebPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWebPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWebPage))
        return static_cast<void*>(const_cast< QWebPage*>(this));
    return QObject::qt_metacast(_clname);
}

int QWebPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isModified(); break;
        case 1: *reinterpret_cast< QString*>(_v) = selectedText(); break;
        case 2: *reinterpret_cast< QString*>(_v) = selectedHtml(); break;
        case 3: *reinterpret_cast< bool*>(_v) = hasSelection(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = viewportSize(); break;
        case 5: *reinterpret_cast< QSize*>(_v) = preferredContentsSize(); break;
        case 6: *reinterpret_cast< bool*>(_v) = forwardUnsupportedContent(); break;
        case 7: *reinterpret_cast< LinkDelegationPolicy*>(_v) = linkDelegationPolicy(); break;
        case 8: *reinterpret_cast< QPalette*>(_v) = palette(); break;
        case 9: *reinterpret_cast< bool*>(_v) = isContentEditable(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 4: setViewportSize(*reinterpret_cast< QSize*>(_v)); break;
        case 5: setPreferredContentsSize(*reinterpret_cast< QSize*>(_v)); break;
        case 6: setForwardUnsupportedContent(*reinterpret_cast< bool*>(_v)); break;
        case 7: setLinkDelegationPolicy(*reinterpret_cast< LinkDelegationPolicy*>(_v)); break;
        case 8: setPalette(*reinterpret_cast< QPalette*>(_v)); break;
        case 9: setContentEditable(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QWebPage::loadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QWebPage::loadProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWebPage::loadFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWebPage::linkHovered(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QWebPage::statusBarMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QWebPage::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QWebPage::frameCreated(QWebFrame * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QWebPage::geometryChangeRequested(const QRect & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QWebPage::repaintRequested(const QRect & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QWebPage::scrollRequested(int _t1, int _t2, const QRect & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QWebPage::windowCloseRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void QWebPage::printRequested(QWebFrame * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QWebPage::linkClicked(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QWebPage::toolBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QWebPage::statusBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QWebPage::menuBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QWebPage::unsupportedContent(QNetworkReply * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QWebPage::downloadRequested(const QNetworkRequest & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QWebPage::microFocusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}

// SIGNAL 19
void QWebPage::contentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, 0);
}

// SIGNAL 20
void QWebPage::databaseQuotaExceeded(QWebFrame * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QWebPage::applicationCacheQuotaExceeded(QWebSecurityOrigin * _t1, quint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void QWebPage::saveFrameStateRequested(QWebFrame * _t1, QWebHistoryItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void QWebPage::restoreFrameStateRequested(QWebFrame * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void QWebPage::viewportChangeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 24, 0);
}

// SIGNAL 25
void QWebPage::featurePermissionRequested(QWebFrame * _t1, QWebPage::Feature _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void QWebPage::featurePermissionRequestCanceled(QWebFrame * _t1, QWebPage::Feature _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}
QT_END_MOC_NAMESPACE
