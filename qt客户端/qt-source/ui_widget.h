/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QWidget *widget;
    QPushButton *loginButton;
    QLabel *label;
    QLineEdit *passwdLineEdit;
    QPushButton *registerButton;
    QLabel *label_2;
    QLineEdit *userLineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(441, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/Image/liaotian.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QLatin1String("QLabel#label_3\n"
"{\n"
"	background-color:rgb(203, 255, 247)\n"
"\n"
"	\n"
"}\n"
".QWidget\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"}"));
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setTextFormat(Qt::AutoText);
        label_3->setPixmap(QPixmap(QString::fromUtf8("Image/liaoti1an.png")));

        verticalLayout->addWidget(label_3);

        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 140));
        widget->setSizeIncrement(QSize(0, 120));
        widget->setLayoutDirection(Qt::LeftToRight);
        loginButton = new QPushButton(widget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(280, 100, 111, 31));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 71, 41));
        passwdLineEdit = new QLineEdit(widget);
        passwdLineEdit->setObjectName(QStringLiteral("passwdLineEdit"));
        passwdLineEdit->setGeometry(QRect(140, 60, 211, 31));
        registerButton = new QPushButton(widget);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        registerButton->setGeometry(QRect(70, 100, 101, 31));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 50, 71, 41));
        userLineEdit = new QLineEdit(widget);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setGeometry(QRect(140, 10, 211, 31));
        loginButton->raise();
        label->raise();
        passwdLineEdit->raise();
        registerButton->raise();
        label_2->raise();
        userLineEdit->raise();
        label_3->raise();
        label_3->raise();
        label_3->raise();

        verticalLayout->addWidget(widget);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "CKchat", 0));
        label_3->setText(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	<img src=\":/image/Image/liaoti1an.png\" /><span style=\" font-size:28pt; font-weight:600; font-style:italic; vertical-align:super;\">CKchat</span></p></body></html>", 0));
        loginButton->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", 0));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\347\224\250\346\210\267\357\274\232</span></p></body></html>", 0));
        registerButton->setText(QApplication::translate("Widget", "\346\263\250\345\206\214", 0));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
