/****************************************************************************
** Meta object code from reading C++ file 'qalculatorrunner.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/qalculatorrunner.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qalculatorrunner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
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
struct qt_meta_tag_ZN16QalculatorRunnerE_t {};
} // unnamed namespace

template <> constexpr inline auto QalculatorRunner::qt_create_metaobjectdata<qt_meta_tag_ZN16QalculatorRunnerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QalculatorRunner",
        "match",
        "",
        "KRunner::RunnerContext&",
        "context",
        "run",
        "KRunner::RunnerContext",
        "KRunner::QueryMatch"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'match'
        QtMocHelpers::SlotData<void(KRunner::RunnerContext &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'run'
        QtMocHelpers::SlotData<void(const KRunner::RunnerContext &, const KRunner::QueryMatch &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 4 }, { 0x80000000 | 7, 1 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QalculatorRunner, qt_meta_tag_ZN16QalculatorRunnerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QalculatorRunner::staticMetaObject = { {
    QMetaObject::SuperData::link<KRunner::AbstractRunner::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QalculatorRunnerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QalculatorRunnerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16QalculatorRunnerE_t>.metaTypes,
    nullptr
} };

void QalculatorRunner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QalculatorRunner *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->match((*reinterpret_cast< std::add_pointer_t<KRunner::RunnerContext&>>(_a[1]))); break;
        case 1: _t->run((*reinterpret_cast< std::add_pointer_t<KRunner::RunnerContext>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<KRunner::QueryMatch>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KRunner::RunnerContext >(); break;
            }
            break;
        }
    }
}

const QMetaObject *QalculatorRunner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QalculatorRunner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QalculatorRunnerE_t>.strings))
        return static_cast<void*>(this);
    return KRunner::AbstractRunner::qt_metacast(_clname);
}

int QalculatorRunner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KRunner::AbstractRunner::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN23QalculatorRunnerFactoryE_t {};
} // unnamed namespace

template <> constexpr inline auto QalculatorRunnerFactory::qt_create_metaobjectdata<qt_meta_tag_ZN23QalculatorRunnerFactoryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QalculatorRunnerFactory"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QalculatorRunnerFactory, qt_meta_tag_ZN23QalculatorRunnerFactoryE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QalculatorRunnerFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<KPluginFactory::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QalculatorRunnerFactoryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QalculatorRunnerFactoryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23QalculatorRunnerFactoryE_t>.metaTypes,
    nullptr
} };

void QalculatorRunnerFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QalculatorRunnerFactory *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QalculatorRunnerFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QalculatorRunnerFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23QalculatorRunnerFactoryE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.KPluginFactory"))
        return static_cast< KPluginFactory*>(this);
    return KPluginFactory::qt_metacast(_clname);
}

int QalculatorRunnerFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPluginFactory::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_QalculatorRunnerFactory[] = {
    0xbf, 
    // "IID"
    0x02,  0x76,  'o',  'r',  'g',  '.',  'k',  'd', 
    'e',  '.',  'K',  'P',  'l',  'u',  'g',  'i', 
    'n',  'F',  'a',  'c',  't',  'o',  'r',  'y', 
    // "className"
    0x03,  0x77,  'Q',  'a',  'l',  'c',  'u',  'l', 
    'a',  't',  'o',  'r',  'R',  'u',  'n',  'n', 
    'e',  'r',  'F',  'a',  'c',  't',  'o',  'r', 
    'y', 
    // "MetaData"
    0x04,  0xa2,  0x67,  'K',  'P',  'l',  'u',  'g', 
    'i',  'n',  0xaa,  0x67,  'A',  'u',  't',  'h', 
    'o',  'r',  's',  0x81,  0xa2,  0x65,  'E',  'm', 
    'a',  'i',  'l',  0x71,  'k',  'a',  's',  'c', 
    'o',  'r',  'p',  '@',  'g',  'm',  'a',  'i', 
    'l',  '.',  'c',  'o',  'm',  0x64,  'N',  'a', 
    'm',  'e',  0x67,  'k',  'a',  's',  '-',  'c', 
    'o',  'r',  0x68,  'C',  'a',  't',  'e',  'g', 
    'o',  'r',  'y',  0x67,  'F',  'i',  'n',  'a', 
    'n',  'c',  'e',  0x6b,  'D',  'e',  's',  'c', 
    'r',  'i',  'p',  't',  'i',  'o',  'n',  0x75, 
    'C',  'a',  'l',  'c',  'u',  'l',  'a',  't', 
    'o',  'r',  ' ',  'u',  's',  'i',  'n',  'g', 
    ' ',  'q',  'a',  'l',  'c',  0x70,  'E',  'n', 
    'a',  'b',  'l',  'e',  'd',  'B',  'y',  'D', 
    'e',  'f',  'a',  'u',  'l',  't',  0xf5,  0x64, 
    'I',  'c',  'o',  'n',  0x76,  'a',  'c',  'c', 
    'e',  's',  's',  'o',  'r',  'i',  'e',  's', 
    '-',  'c',  'a',  'l',  'c',  'u',  'l',  'a', 
    't',  'o',  'r',  0x62,  'I',  'd',  0x72,  'k', 
    'r',  'u',  'n',  'n',  'e',  'r',  '_',  'q', 
    'a',  'l',  'c',  'u',  'l',  'a',  't',  'o', 
    'r',  0x67,  'L',  'i',  'c',  'e',  'n',  's', 
    'e',  0x69,  'L',  'G',  'P',  'L',  '-',  '2', 
    '.',  '1',  '+',  0x64,  'N',  'a',  'm',  'e', 
    0x6a,  'Q',  'a',  'l',  'c',  'u',  'l',  'a', 
    't',  'o',  'r',  0x67,  'V',  'e',  'r',  's', 
    'i',  'o',  'n',  0x65,  '2',  '.',  '0',  '.', 
    '1',  0x67,  'W',  'e',  'b',  's',  'i',  't', 
    'e',  0x78,  0x2d,  'h',  't',  't',  'p',  's', 
    ':',  '/',  '/',  'g',  'i',  't',  'h',  'u', 
    'b',  '.',  'c',  'o',  'm',  '/',  'k',  'a', 
    's',  '-',  'c',  'o',  'r',  '/',  'k',  'r', 
    'u',  'n',  'n',  'e',  'r',  '-',  'q',  'a', 
    'l',  'c',  'u',  'l',  'a',  't',  'o',  'r', 
    0x67,  'K',  'R',  'u',  'n',  'n',  'e',  'r', 
    0xa2,  0x6c,  'M',  'i',  'n',  'i',  'm',  'u', 
    'm',  'Q',  'u',  'e',  'r',  'y',  0x02,  0x68, 
    'T',  'r',  'i',  'g',  'g',  'e',  'r',  's', 
    0x81,  0x61,  '=', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(QalculatorRunnerFactory, QalculatorRunnerFactory, qt_pluginMetaDataV2_QalculatorRunnerFactory)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_QalculatorRunnerFactory[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x76,  'o',  'r',  'g',  '.',  'k',  'd', 
    'e',  '.',  'K',  'P',  'l',  'u',  'g',  'i', 
    'n',  'F',  'a',  'c',  't',  'o',  'r',  'y', 
    // "className"
    0x03,  0x77,  'Q',  'a',  'l',  'c',  'u',  'l', 
    'a',  't',  'o',  'r',  'R',  'u',  'n',  'n', 
    'e',  'r',  'F',  'a',  'c',  't',  'o',  'r', 
    'y', 
    // "MetaData"
    0x04,  0xa2,  0x67,  'K',  'P',  'l',  'u',  'g', 
    'i',  'n',  0xaa,  0x67,  'A',  'u',  't',  'h', 
    'o',  'r',  's',  0x81,  0xa2,  0x65,  'E',  'm', 
    'a',  'i',  'l',  0x71,  'k',  'a',  's',  'c', 
    'o',  'r',  'p',  '@',  'g',  'm',  'a',  'i', 
    'l',  '.',  'c',  'o',  'm',  0x64,  'N',  'a', 
    'm',  'e',  0x67,  'k',  'a',  's',  '-',  'c', 
    'o',  'r',  0x68,  'C',  'a',  't',  'e',  'g', 
    'o',  'r',  'y',  0x67,  'F',  'i',  'n',  'a', 
    'n',  'c',  'e',  0x6b,  'D',  'e',  's',  'c', 
    'r',  'i',  'p',  't',  'i',  'o',  'n',  0x75, 
    'C',  'a',  'l',  'c',  'u',  'l',  'a',  't', 
    'o',  'r',  ' ',  'u',  's',  'i',  'n',  'g', 
    ' ',  'q',  'a',  'l',  'c',  0x70,  'E',  'n', 
    'a',  'b',  'l',  'e',  'd',  'B',  'y',  'D', 
    'e',  'f',  'a',  'u',  'l',  't',  0xf5,  0x64, 
    'I',  'c',  'o',  'n',  0x76,  'a',  'c',  'c', 
    'e',  's',  's',  'o',  'r',  'i',  'e',  's', 
    '-',  'c',  'a',  'l',  'c',  'u',  'l',  'a', 
    't',  'o',  'r',  0x62,  'I',  'd',  0x72,  'k', 
    'r',  'u',  'n',  'n',  'e',  'r',  '_',  'q', 
    'a',  'l',  'c',  'u',  'l',  'a',  't',  'o', 
    'r',  0x67,  'L',  'i',  'c',  'e',  'n',  's', 
    'e',  0x69,  'L',  'G',  'P',  'L',  '-',  '2', 
    '.',  '1',  '+',  0x64,  'N',  'a',  'm',  'e', 
    0x6a,  'Q',  'a',  'l',  'c',  'u',  'l',  'a', 
    't',  'o',  'r',  0x67,  'V',  'e',  'r',  's', 
    'i',  'o',  'n',  0x65,  '2',  '.',  '0',  '.', 
    '1',  0x67,  'W',  'e',  'b',  's',  'i',  't', 
    'e',  0x78,  0x2d,  'h',  't',  't',  'p',  's', 
    ':',  '/',  '/',  'g',  'i',  't',  'h',  'u', 
    'b',  '.',  'c',  'o',  'm',  '/',  'k',  'a', 
    's',  '-',  'c',  'o',  'r',  '/',  'k',  'r', 
    'u',  'n',  'n',  'e',  'r',  '-',  'q',  'a', 
    'l',  'c',  'u',  'l',  'a',  't',  'o',  'r', 
    0x67,  'K',  'R',  'u',  'n',  'n',  'e',  'r', 
    0xa2,  0x6c,  'M',  'i',  'n',  'i',  'm',  'u', 
    'm',  'Q',  'u',  'e',  'r',  'y',  0x02,  0x68, 
    'T',  'r',  'i',  'g',  'g',  'e',  'r',  's', 
    0x81,  0x61,  '=', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(QalculatorRunnerFactory, QalculatorRunnerFactory)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
