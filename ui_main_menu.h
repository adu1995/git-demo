/********************************************************************************
** Form generated from reading UI file 'main_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_MENU_H
#define UI_MAIN_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_menu
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *main_menu)
    {
        if (main_menu->objectName().isEmpty())
            main_menu->setObjectName(QString::fromUtf8("main_menu"));
        main_menu->resize(800, 600);
        menubar = new QMenuBar(main_menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        main_menu->setMenuBar(menubar);
        centralwidget = new QWidget(main_menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        main_menu->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(main_menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        main_menu->setStatusBar(statusbar);

        retranslateUi(main_menu);

        QMetaObject::connectSlotsByName(main_menu);
    } // setupUi

    void retranslateUi(QMainWindow *main_menu)
    {
        main_menu->setWindowTitle(QApplication::translate("main_menu", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_menu: public Ui_main_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_MENU_H
