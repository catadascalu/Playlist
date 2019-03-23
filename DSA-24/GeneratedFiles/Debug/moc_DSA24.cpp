/****************************************************************************
** Meta object code from reading C++ file 'DSA24.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DSA24.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DSA24.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DSA24_t {
    QByteArrayData data[14];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DSA24_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DSA24_t qt_meta_stringdata_DSA24 = {
    {
QT_MOC_LITERAL(0, 0, 5), // "DSA24"
QT_MOC_LITERAL(1, 6, 16), // "populatePlaylist"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "PlayList"
QT_MOC_LITERAL(4, 33, 1), // "p"
QT_MOC_LITERAL(5, 35, 12), // "populateTemp"
QT_MOC_LITERAL(6, 48, 4), // "Song"
QT_MOC_LITERAL(7, 53, 1), // "s"
QT_MOC_LITERAL(8, 55, 3), // "add"
QT_MOC_LITERAL(9, 59, 10), // "removeSong"
QT_MOC_LITERAL(10, 70, 5), // "start"
QT_MOC_LITERAL(11, 76, 8), // "nextSong"
QT_MOC_LITERAL(12, 85, 12), // "previousSong"
QT_MOC_LITERAL(13, 98, 4) // "play"

    },
    "DSA24\0populatePlaylist\0\0PlayList\0p\0"
    "populateTemp\0Song\0s\0add\0removeSong\0"
    "start\0nextSong\0previousSong\0play"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DSA24[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       5,    1,   57,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,
      12,    0,   64,    2, 0x08 /* Private */,
      13,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DSA24::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DSA24 *_t = static_cast<DSA24 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->populatePlaylist((*reinterpret_cast< PlayList(*)>(_a[1]))); break;
        case 1: _t->populateTemp((*reinterpret_cast< Song(*)>(_a[1]))); break;
        case 2: _t->add(); break;
        case 3: _t->removeSong(); break;
        case 4: _t->start(); break;
        case 5: _t->nextSong(); break;
        case 6: _t->previousSong(); break;
        case 7: _t->play(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DSA24::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DSA24.data,
      qt_meta_data_DSA24,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DSA24::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DSA24::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DSA24.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DSA24::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
