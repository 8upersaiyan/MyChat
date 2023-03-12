/********************************************************************************
** Form generated from reading UI file 'groupchat.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPCHAT_H
#define UI_GROUPCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupChat
{
public:
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPushButton *sendButton;
    QListWidget *listWidget;

    void setupUi(QWidget *GroupChat)
    {
        if (GroupChat->objectName().isEmpty())
            GroupChat->setObjectName(QStringLiteral("GroupChat"));
        GroupChat->resize(400, 300);
        textEdit = new QTextEdit(GroupChat);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 291, 181));
        lineEdit = new QLineEdit(GroupChat);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 200, 291, 41));
        sendButton = new QPushButton(GroupChat);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(220, 270, 75, 23));
        listWidget = new QListWidget(GroupChat);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(310, 0, 81, 241));

        retranslateUi(GroupChat);

        QMetaObject::connectSlotsByName(GroupChat);
    } // setupUi

    void retranslateUi(QWidget *GroupChat)
    {
        GroupChat->setWindowTitle(QApplication::translate("GroupChat", "Form", 0));
        sendButton->setText(QApplication::translate("GroupChat", "\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class GroupChat: public Ui_GroupChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPCHAT_H
