/****************************************************************************
** Meta object code from reading C++ file 'secretworker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../labba1/Qt-Secret/Qt-Secret-GUI/secretworker.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'secretworker.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SecretWorker_t {};
static constexpr auto qt_meta_stringdata_SecretWorker = QtMocHelpers::stringData(
    "SecretWorker",
    "showKeysOnQml",
    "",
    "showEncDecResOnQml",
    "showSignResOnQml",
    "generateKeys",
    "rsa",
    "encryptMessage",
    "encPubKey",
    "inputText",
    "decryptMessage",
    "decPrivKey",
    "inputMessage",
    "signMessage",
    "signPrivKey",
    "checkSign",
    "signPubKey"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_SecretWorker_t {
    uint offsetsAndSizes[34];
    char stringdata0[13];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[17];
    char stringdata5[13];
    char stringdata6[4];
    char stringdata7[15];
    char stringdata8[10];
    char stringdata9[10];
    char stringdata10[15];
    char stringdata11[11];
    char stringdata12[13];
    char stringdata13[12];
    char stringdata14[12];
    char stringdata15[10];
    char stringdata16[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SecretWorker_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SecretWorker_t qt_meta_stringdata_SecretWorker = {
    {
        QT_MOC_LITERAL(0, 12),  // "SecretWorker"
        QT_MOC_LITERAL(13, 13),  // "showKeysOnQml"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 18),  // "showEncDecResOnQml"
        QT_MOC_LITERAL(47, 16),  // "showSignResOnQml"
        QT_MOC_LITERAL(64, 12),  // "generateKeys"
        QT_MOC_LITERAL(77, 3),  // "rsa"
        QT_MOC_LITERAL(81, 14),  // "encryptMessage"
        QT_MOC_LITERAL(96, 9),  // "encPubKey"
        QT_MOC_LITERAL(106, 9),  // "inputText"
        QT_MOC_LITERAL(116, 14),  // "decryptMessage"
        QT_MOC_LITERAL(131, 10),  // "decPrivKey"
        QT_MOC_LITERAL(142, 12),  // "inputMessage"
        QT_MOC_LITERAL(155, 11),  // "signMessage"
        QT_MOC_LITERAL(167, 11),  // "signPrivKey"
        QT_MOC_LITERAL(179, 9),  // "checkSign"
        QT_MOC_LITERAL(189, 10)   // "signPubKey"
    },
    "SecretWorker",
    "showKeysOnQml",
    "",
    "showEncDecResOnQml",
    "showSignResOnQml",
    "generateKeys",
    "rsa",
    "encryptMessage",
    "encPubKey",
    "inputText",
    "decryptMessage",
    "decPrivKey",
    "inputMessage",
    "signMessage",
    "signPrivKey",
    "checkSign",
    "signPubKey"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SecretWorker[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    0,   64,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   65,    2, 0x0a,    4 /* Public */,
       7,    2,   68,    2, 0x0a,    6 /* Public */,
      10,    2,   73,    2, 0x0a,    9 /* Public */,
      13,    2,   78,    2, 0x0a,   12 /* Public */,
      15,    2,   83,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject SecretWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SecretWorker.offsetsAndSizes,
    qt_meta_data_SecretWorker,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SecretWorker_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SecretWorker, std::true_type>,
        // method 'showKeysOnQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showEncDecResOnQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showSignResOnQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'generateKeys'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'encryptMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'decryptMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'signMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'checkSign'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void SecretWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SecretWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showKeysOnQml(); break;
        case 1: _t->showEncDecResOnQml(); break;
        case 2: _t->showSignResOnQml(); break;
        case 3: _t->generateKeys((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->encryptMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->decryptMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->signMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->checkSign((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SecretWorker::*)();
            if (_t _q_method = &SecretWorker::showKeysOnQml; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SecretWorker::*)();
            if (_t _q_method = &SecretWorker::showEncDecResOnQml; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SecretWorker::*)();
            if (_t _q_method = &SecretWorker::showSignResOnQml; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *SecretWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SecretWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SecretWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SecretWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SecretWorker::showKeysOnQml()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SecretWorker::showEncDecResOnQml()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SecretWorker::showSignResOnQml()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
