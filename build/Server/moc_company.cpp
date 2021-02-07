/****************************************************************************
** Meta object code from reading C++ file 'company.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Server/company.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'company.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_company_t {
    QByteArrayData data[18];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_company_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_company_t qt_meta_stringdata_company = {
    {
QT_MOC_LITERAL(0, 0, 7), // "company"
QT_MOC_LITERAL(1, 8, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 24, 17), // "company.interface"
QT_MOC_LITERAL(3, 42, 17), // "nameChangedSingal"
QT_MOC_LITERAL(4, 60, 0), // ""
QT_MOC_LITERAL(5, 61, 16), // "ageChangedSingal"
QT_MOC_LITERAL(6, 78, 23), // "professionChangedSingal"
QT_MOC_LITERAL(7, 102, 19), // "salaryChangedSingal"
QT_MOC_LITERAL(8, 122, 11), // "recruitInfo"
QT_MOC_LITERAL(9, 134, 4), // "name"
QT_MOC_LITERAL(10, 139, 6), // "result"
QT_MOC_LITERAL(11, 146, 13), // "candidateName"
QT_MOC_LITERAL(12, 160, 12), // "candidateAge"
QT_MOC_LITERAL(13, 173, 3), // "age"
QT_MOC_LITERAL(14, 177, 19), // "candidateProfession"
QT_MOC_LITERAL(15, 197, 10), // "profession"
QT_MOC_LITERAL(16, 208, 21), // "candidateExpectSalary"
QT_MOC_LITERAL(17, 230, 6) // "salary"

    },
    "company\0D-Bus Interface\0company.interface\0"
    "nameChangedSingal\0\0ageChangedSingal\0"
    "professionChangedSingal\0salaryChangedSingal\0"
    "recruitInfo\0name\0result\0candidateName\0"
    "candidateAge\0age\0candidateProfession\0"
    "profession\0candidateExpectSalary\0"
    "salary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_company[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       9,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   61,    4, 0x06 /* Public */,
       5,    0,   62,    4, 0x06 /* Public */,
       6,    0,   63,    4, 0x06 /* Public */,
       7,    0,   64,    4, 0x06 /* Public */,
       8,    2,   65,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   70,    4, 0x0a /* Public */,
      12,    1,   73,    4, 0x0a /* Public */,
      14,    1,   76,    4, 0x0a /* Public */,
      16,    1,   79,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,

 // slots: parameters
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::Int, QMetaType::Int,   13,
    QMetaType::QString, QMetaType::QString,   15,
    QMetaType::Double, QMetaType::Double,   17,

       0        // eod
};

void company::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<company *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChangedSingal(); break;
        case 1: _t->ageChangedSingal(); break;
        case 2: _t->professionChangedSingal(); break;
        case 3: _t->salaryChangedSingal(); break;
        case 4: _t->recruitInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: { QString _r = _t->candidateName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->candidateAge((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->candidateProfession((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { double _r = _t->candidateExpectSalary((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (company::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&company::nameChangedSingal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (company::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&company::ageChangedSingal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (company::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&company::professionChangedSingal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (company::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&company::salaryChangedSingal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (company::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&company::recruitInfo)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject company::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_company.data,
    qt_meta_data_company,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *company::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *company::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_company.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int company::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void company::nameChangedSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void company::ageChangedSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void company::professionChangedSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void company::salaryChangedSingal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void company::recruitInfo(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
