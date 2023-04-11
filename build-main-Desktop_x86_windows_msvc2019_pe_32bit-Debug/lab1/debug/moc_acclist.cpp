/****************************************************************************
** Meta object code from reading C++ file 'acclist.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../labba1/lab1/acclist.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'acclist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_AccList_t {};
static constexpr auto qt_meta_stringdata_AccList = QtMocHelpers::stringData(
    "AccList",
    "addRow",
    "",
    "DBModel::Row",
    "row",
    "on_addAccBtn_clicked",
    "on_searchButton_clicked",
    "removeItem",
    "url",
    "login",
    "on_searchInput_cursorPositionChanged",
    "arg1",
    "arg2"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_AccList_t {
    uint offsetsAndSizes[26];
    char stringdata0[8];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[4];
    char stringdata5[21];
    char stringdata6[24];
    char stringdata7[11];
    char stringdata8[4];
    char stringdata9[6];
    char stringdata10[37];
    char stringdata11[5];
    char stringdata12[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AccList_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AccList_t qt_meta_stringdata_AccList = {
    {
        QT_MOC_LITERAL(0, 7),  // "AccList"
        QT_MOC_LITERAL(8, 6),  // "addRow"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 12),  // "DBModel::Row"
        QT_MOC_LITERAL(29, 3),  // "row"
        QT_MOC_LITERAL(33, 20),  // "on_addAccBtn_clicked"
        QT_MOC_LITERAL(54, 23),  // "on_searchButton_clicked"
        QT_MOC_LITERAL(78, 10),  // "removeItem"
        QT_MOC_LITERAL(89, 3),  // "url"
        QT_MOC_LITERAL(93, 5),  // "login"
        QT_MOC_LITERAL(99, 36),  // "on_searchInput_cursorPosition..."
        QT_MOC_LITERAL(136, 4),  // "arg1"
        QT_MOC_LITERAL(141, 4)   // "arg2"
    },
    "AccList",
    "addRow",
    "",
    "DBModel::Row",
    "row",
    "on_addAccBtn_clicked",
    "on_searchButton_clicked",
    "removeItem",
    "url",
    "login",
    "on_searchInput_cursorPositionChanged",
    "arg1",
    "arg2"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AccList[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x08,    1 /* Private */,
       5,    0,   47,    2, 0x08,    3 /* Private */,
       6,    0,   48,    2, 0x08,    4 /* Private */,
       7,    2,   49,    2, 0x08,    5 /* Private */,
      10,    2,   54,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject AccList::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AccList.offsetsAndSizes,
    qt_meta_data_AccList,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AccList_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AccList, std::true_type>,
        // method 'addRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const DBModel::Row, std::false_type>,
        // method 'on_addAccBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'on_searchInput_cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void AccList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addRow((*reinterpret_cast< std::add_pointer_t<DBModel::Row>>(_a[1]))); break;
        case 1: _t->on_addAccBtn_clicked(); break;
        case 2: _t->on_searchButton_clicked(); break;
        case 3: _t->removeItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->on_searchInput_cursorPositionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *AccList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccList.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AccList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
