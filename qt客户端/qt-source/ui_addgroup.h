/********************************************************************************
** Form generated from reading UI file 'addgroup.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGROUP_H
#define UI_ADDGROUP_H

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

class Ui_AddGroup
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *cancelButton;
    QPushButton *addButton;

    void setupUi(QWidget *AddGroup)
    {
        if (AddGroup->objectName().isEmpty())
            AddGroup->setObjectName(QStringLiteral("AddGroup"));
        AddGroup->resize(400, 212);
        label = new QLabel(AddGroup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 70, 81, 31));
        lineEdit = new QLineEdit(AddGroup);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 70, 161, 31));
        cancelButton = new QPushButton(AddGroup);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(120, 140, 75, 23));
        addButton = new QPushButton(AddGroup);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(230, 140, 75, 23));

        retranslateUi(AddGroup);

        QMetaObject::connectSlotsByName(AddGroup);
    } // setupUi

    void retranslateUi(QWidget *AddGroup)
    {
        AddGroup->setWindowTitle(QApplication::translate("AddGroup", "Form", 0));
        label->setText(QApplication::translate("AddGroup", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\347\276\244\345\220\215</span></p></body></html>", 0));
        cancelButton->setText(QApplication::translate("AddGroup", "\345\217\226\346\266\210", 0));
        addButton->setText(QApplication::translate("AddGroup", "\346\267\273\345\212\240", 0));
    } // retranslateUi

};

namespace Ui {
    class AddGroup: public Ui_AddGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGROUP_H
