/********************************************************************************
** Form generated from reading UI file 'addfriend.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFRIEND_H
#define UI_ADDFRIEND_H

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

class Ui_Addfriend
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *cancelButton;
    QPushButton *addButton;

    void setupUi(QWidget *Addfriend)
    {
        if (Addfriend->objectName().isEmpty())
            Addfriend->setObjectName(QStringLiteral("Addfriend"));
        Addfriend->resize(400, 189);
        label = new QLabel(Addfriend);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 111, 31));
        lineEdit = new QLineEdit(Addfriend);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 50, 151, 31));
        cancelButton = new QPushButton(Addfriend);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(90, 120, 75, 23));
        addButton = new QPushButton(Addfriend);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(220, 120, 75, 23));

        retranslateUi(Addfriend);

        QMetaObject::connectSlotsByName(Addfriend);
    } // setupUi

    void retranslateUi(QWidget *Addfriend)
    {
        Addfriend->setWindowTitle(QApplication::translate("Addfriend", "Form", 0));
        label->setText(QApplication::translate("Addfriend", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\245\275\345\217\213\350\264\246\345\217\267</span></p></body></html>", 0));
        cancelButton->setText(QApplication::translate("Addfriend", "\345\217\226\346\266\210", 0));
        addButton->setText(QApplication::translate("Addfriend", "\346\267\273\345\212\240", 0));
    } // retranslateUi

};

namespace Ui {
    class Addfriend: public Ui_Addfriend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFRIEND_H
