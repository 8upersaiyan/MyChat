/********************************************************************************
** Form generated from reading UI file 'privatechat.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVATECHAT_H
#define UI_PRIVATECHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrivateChat
{
public:
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPushButton *sendButton;
    QPushButton *fileButton;
    QLabel *label;

    void setupUi(QWidget *PrivateChat)
    {
        if (PrivateChat->objectName().isEmpty())
            PrivateChat->setObjectName(QStringLiteral("PrivateChat"));
        PrivateChat->resize(400, 300);
        textEdit = new QTextEdit(PrivateChat);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 401, 171));
        lineEdit = new QLineEdit(PrivateChat);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 200, 401, 41));
        sendButton = new QPushButton(PrivateChat);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(284, 260, 81, 31));
        fileButton = new QPushButton(PrivateChat);
        fileButton->setObjectName(QStringLiteral("fileButton"));
        fileButton->setGeometry(QRect(30, 260, 81, 31));
        label = new QLabel(PrivateChat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 180, 161, 16));

        retranslateUi(PrivateChat);

        QMetaObject::connectSlotsByName(PrivateChat);
    } // setupUi

    void retranslateUi(QWidget *PrivateChat)
    {
        PrivateChat->setWindowTitle(QApplication::translate("PrivateChat", "Form", 0));
        sendButton->setText(QApplication::translate("PrivateChat", "\345\217\221\351\200\201", 0));
        fileButton->setText(QApplication::translate("PrivateChat", "\344\274\240\350\276\223\346\226\207\344\273\266", 0));
        label->setText(QApplication::translate("PrivateChat", "<html><head/><body><p><span style=\" font-size:7pt;\">\350\276\223\345\205\245\347\252\227\345\217\243\357\274\232</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class PrivateChat: public Ui_PrivateChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVATECHAT_H
