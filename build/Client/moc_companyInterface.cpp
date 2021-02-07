/****************************************************************************
** Meta object code from reading C++ file 'companyInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/companyInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'companyInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CompanyInterfaceInterface_t {
    QByteArrayData data[19];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CompanyInterfaceInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CompanyInterfaceInterface_t qt_meta_stringdata_CompanyInterfaceInterface = {
    {
QT_MOC_LITERAL(0, 0, 25), // "CompanyInterfaceInterface"
QT_MOC_LITERAL(1, 26, 16), // "ageChangedSingal"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 17), // "nameChangedSingal"
QT_MOC_LITERAL(4, 62, 23), // "professionChangedSingal"
QT_MOC_LITERAL(5, 86, 11), // "recruitInfo"
QT_MOC_LITERAL(6, 98, 4), // "name"
QT_MOC_LITERAL(7, 103, 6), // "result"
QT_MOC_LITERAL(8, 110, 19), // "salaryChangedSingal"
QT_MOC_LITERAL(9, 130, 12), // "candidateAge"
QT_MOC_LITERAL(10, 143, 22), // "QDBusPendingReply<int>"
QT_MOC_LITERAL(11, 166, 3), // "age"
QT_MOC_LITERAL(12, 170, 21), // "candidateExpectSalary"
QT_MOC_LITERAL(13, 192, 25), // "QDBusPendingReply<double>"
QT_MOC_LITERAL(14, 218, 6), // "salary"
QT_MOC_LITERAL(15, 225, 13), // "candidateName"
QT_MOC_LITERAL(16, 239, 26), // "QDBusPendingReply<QString>"
QT_MOC_LITERAL(17, 266, 19), // "candidateProfession"
QT_MOC_LITERAL(18, 286, 10) // "profession"

    },
    "CompanyInterfaceInterface\0ageChangedSingal\0"
    "\0nameChangedSingal\0professionChangedSingal\0"
    "recruitInfo\0name\0result\0salaryChangedSingal\0"
    "candidateAge\0QDBusPendingReply<int>\0"
    "age\0candidateExpectSalary\0"
    "QDBusPendingReply<double>\0salary\0"
    "candidateName\0QDBusPendingReply<QString>\0"
    "candidateProfession\0profession"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompanyInterfaceInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    2,   62,    2, 0x06 /* Public */,
       8,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   68,    2, 0x0a /* Public */,
      12,    1,   71,    2, 0x0a /* Public */,
      15,    1,   74,    2, 0x0a /* Public */,
      17,    1,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 10, QMetaType::Int,   11,
    0x80000000 | 13, QMetaType::Double,   14,
    0x80000000 | 16, QMetaType::QString,    6,
    0x80000000 | 16, QMetaType::QString,   18,

       0        // eod
};

void CompanyInterfaceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CompanyInterfaceInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ageChangedSingal(); break;
        case 1: _t->nameChangedSingal(); break;
        case 2: _t->professionChangedSingal(); break;
        case 3: _t->recruitInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->salaryChangedSingal(); break;
        case 5: { QDBusPendingReply<int> _r = _t->candidateAge((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<int>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<double> _r = _t->candidateExpectSalary((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<double>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusPendingReply<QString> _r = _t->candidateName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<QString> _r = _t->candidateProfession((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CompanyInterfaceInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CompanyInterfaceInterface::ageChangedSingal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CompanyInterfaceInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CompanyInterfaceInterface::nameChangedSingal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CompanyInterfaceInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CompanyInterfaceInterface::professionChangedSingal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CompanyInterfaceInterface::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CompanyInterfaceInterface::recruitInfo)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CompanyInterfaceInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CompanyInterfaceInterface::salaryChangedSingal)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CompanyInterfaceInterface::staticMetaObject = { {
    &QDBusAbstractInterface::staticMetaObject,
    qt_meta_stringdata_CompanyInterfaceInterface.data,
    qt_meta_data_CompanyInterfaceInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CompanyInterfaceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompanyInterfaceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CompanyInterfaceInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int CompanyInterfaceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void CompanyInterfaceInterface::ageChangedSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CompanyInterfaceInterface::nameChangedSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CompanyInterfaceInterface::professionChangedSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CompanyInterfaceInterface::recruitInfo(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CompanyInterfaceInterface::salaryChangedSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
