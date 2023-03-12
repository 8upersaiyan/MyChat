/********************************************************************************
** Form generated from reading UI file 'chatlist.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATLIST_H
#define UI_CHATLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chatlist
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QListWidget *friendList;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QListWidget *groupList;
    QPushButton *addButton;
    QPushButton *createGroupButton;
    QPushButton *addGroupButton;

    void setupUi(QWidget *Chatlist)
    {
        if (Chatlist->objectName().isEmpty())
            Chatlist->setObjectName(QStringLiteral("Chatlist"));
        Chatlist->resize(277, 476);
        Chatlist->setMinimumSize(QSize(277, 476));
        Chatlist->setMaximumSize(QSize(277, 476));
        verticalLayout = new QVBoxLayout(Chatlist);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(Chatlist);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral("QTabBar::tab{width:120}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        friendList = new QListWidget(tab);
        friendList->setObjectName(QStringLiteral("friendList"));

        verticalLayout_2->addWidget(friendList);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupList = new QListWidget(tab_2);
        groupList->setObjectName(QStringLiteral("groupList"));

        verticalLayout_3->addWidget(groupList);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        addButton = new QPushButton(Chatlist);
        addButton->setObjectName(QStringLiteral("addButton"));

        verticalLayout->addWidget(addButton);

        createGroupButton = new QPushButton(Chatlist);
        createGroupButton->setObjectName(QStringLiteral("createGroupButton"));

        verticalLayout->addWidget(createGroupButton);

        addGroupButton = new QPushButton(Chatlist);
        addGroupButton->setObjectName(QStringLiteral("addGroupButton"));

        verticalLayout->addWidget(addGroupButton);


        retranslateUi(Chatlist);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Chatlist);
    } // setupUi

    void retranslateUi(QWidget *Chatlist)
    {
        Chatlist->setWindowTitle(QApplication::translate("Chatlist", "Form", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Chatlist", "\345\245\275\345\217\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Chatlist", "\347\276\244", 0));
        addButton->setText(QApplication::translate("Chatlist", "\346\267\273\345\212\240\345\245\275\345\217\213", 0));
        createGroupButton->setText(QApplication::translate("Chatlist", "\345\210\233\345\273\272\347\276\244\350\201\212", 0));
        addGroupButton->setText(QApplication::translate("Chatlist", "\346\267\273\345\212\240\347\276\244", 0));
    } // retranslateUi

};

namespace Ui {
    class Chatlist: public Ui_Chatlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATLIST_H
