/********************************************************************************
** Form generated from reading UI file 'creategroup.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEGROUP_H
#define UI_CREATEGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateGroup
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *cancelButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CreateGroup)
    {
        if (CreateGroup->objectName().isEmpty())
            CreateGroup->setObjectName(QStringLiteral("CreateGroup"));
        CreateGroup->resize(400, 217);
        label = new QLabel(CreateGroup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 81, 31));
        lineEdit = new QLineEdit(CreateGroup);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 70, 161, 31));
        cancelButton = new QPushButton(CreateGroup);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(80, 140, 75, 23));
        pushButton_2 = new QPushButton(CreateGroup);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 140, 75, 23));

        retranslateUi(CreateGroup);

        QMetaObject::connectSlotsByName(CreateGroup);
    } // setupUi

    void retranslateUi(QWidget *CreateGroup)
    {
        CreateGroup->setWindowTitle(QApplication::translate("CreateGroup", "Form", 0));
        label->setText(QApplication::translate("CreateGroup", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\210\233\345\273\272\347\276\244\345\220\215\347\247\260</span></p></body></html>", 0));
        cancelButton->setText(QApplication::translate("CreateGroup", "\345\217\226\346\266\210", 0));
        pushButton_2->setText(QApplication::translate("CreateGroup", "\345\210\233\345\273\272", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateGroup: public Ui_CreateGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEGROUP_H
