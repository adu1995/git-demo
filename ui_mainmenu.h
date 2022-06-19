/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainMenu
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *mainMenu)
    {
        if (mainMenu->objectName().isEmpty())
            mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->resize(442, 326);
        pushButton = new QPushButton(mainMenu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 140, 93, 28));

        retranslateUi(mainMenu);

        QMetaObject::connectSlotsByName(mainMenu);
    } // setupUi

    void retranslateUi(QWidget *mainMenu)
    {
        mainMenu->setWindowTitle(QApplication::translate("mainMenu", "Form", nullptr));
        pushButton->setText(QApplication::translate("mainMenu", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainMenu: public Ui_mainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
