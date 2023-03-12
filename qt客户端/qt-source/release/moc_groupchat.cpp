/****************************************************************************
** Meta object code from reading C++ file 'groupchat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../groupchat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groupchat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GroupChat_t {
    QByteArrayData data[5];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroupChat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroupChat_t qt_meta_stringdata_GroupChat = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GroupChat"
QT_MOC_LITERAL(1, 10, 17), // "show_group_member"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(4, 51, 15) // "show_group_text"

    },
    "GroupChat\0show_group_member\0\0"
    "on_sendButton_clicked\0show_group_text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupChat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       3,    0,   32,    2, 0x08 /* Private */,
       4,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,    2,

       0        // eod
};

void GroupChat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GroupChat *_t = static_cast<GroupChat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_group_member((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 1: _t->on_sendButton_clicked(); break;
        case 2: _t->show_group_text((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GroupChat::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GroupChat.data,
      qt_meta_data_GroupChat,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GroupChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupChat::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GroupChat.stringdata0))
        return static_cast<void*>(const_cast< GroupChat*>(this));
    return QWidget::qt_metacast(_clname);
}

int GroupChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
