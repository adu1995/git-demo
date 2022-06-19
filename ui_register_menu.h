/********************************************************************************
** Form generated from reading UI file 'register_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_MENU_H
#define UI_REGISTER_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register_menu
{
public:
    QPushButton *register_button;
    QPushButton *quit_button;
    QLabel *word_label;
    QLabel *icon_label;
    QLineEdit *new_usr_LineEdit;
    QLineEdit *new_pwd_LineEdit;
    QLabel *new_usr_Label;
    QLabel *new_pwd_Label;

    void setupUi(QWidget *register_menu)
    {
        if (register_menu->objectName().isEmpty())
            register_menu->setObjectName(QString::fromUtf8("register_menu"));
        register_menu->resize(402, 321);
        register_button = new QPushButton(register_menu);
        register_button->setObjectName(QString::fromUtf8("register_button"));
        register_button->setGeometry(QRect(60, 220, 301, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font.setPointSize(18);
        register_button->setFont(font);
        register_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"        color: rgb(255,255,255);\n"
"        background-color: rgb(20,196,188);\n"
"        border: none;\n"
"        border-radius:15px;\n"
"        hover{background-color: rgb(22,218,208)};\n"
"        pressed{background-color: rgb(17,171,164)};\n"
"}"));
        quit_button = new QPushButton(register_menu);
        quit_button->setObjectName(QString::fromUtf8("quit_button"));
        quit_button->setGeometry(QRect(60, 270, 301, 30));
        quit_button->setFont(font);
        quit_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"        color: rgb(255,255,255);\n"
"        background-color: rgb(20,196,188);\n"
"        border: none;\n"
"        border-radius:15px;\n"
"        hover{background-color: rgb(22,218,208)};\n"
"        pressed{background-color: rgb(17,171,164)};\n"
"}"));
        word_label = new QLabel(register_menu);
        word_label->setObjectName(QString::fromUtf8("word_label"));
        word_label->setGeometry(QRect(40, 40, 161, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font1.setPointSize(24);
        word_label->setFont(font1);
        icon_label = new QLabel(register_menu);
        icon_label->setObjectName(QString::fromUtf8("icon_label"));
        icon_label->setGeometry(QRect(200, 10, 181, 121));
        new_usr_LineEdit = new QLineEdit(register_menu);
        new_usr_LineEdit->setObjectName(QString::fromUtf8("new_usr_LineEdit"));
        new_usr_LineEdit->setGeometry(QRect(90, 130, 271, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font2.setPointSize(10);
        new_usr_LineEdit->setFont(font2);
        new_usr_LineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"        color: rgb(31,31,31);\n"
"        padding-left:20px; \n"
"        background-color: rgb(255, 255, 255);\n"
"        border:2px solid rgb(20,196,188);\n"
"        border-radius:15px;\n"
"}"));
        new_pwd_LineEdit = new QLineEdit(register_menu);
        new_pwd_LineEdit->setObjectName(QString::fromUtf8("new_pwd_LineEdit"));
        new_pwd_LineEdit->setGeometry(QRect(90, 170, 271, 30));
        new_pwd_LineEdit->setFont(font2);
        new_pwd_LineEdit->setCursor(QCursor(Qt::IBeamCursor));
        new_pwd_LineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"        color: rgb(31,31,31);\n"
"        padding-left:20px; \n"
"        background-color: rgb(255, 255, 255);\n"
"        border:2px solid rgb(20,196,188);\n"
"        border-radius:15px;\n"
"}"));
        new_pwd_LineEdit->setEchoMode(QLineEdit::Password);
        new_pwd_LineEdit->setCursorPosition(0);
        new_usr_Label = new QLabel(register_menu);
        new_usr_Label->setObjectName(QString::fromUtf8("new_usr_Label"));
        new_usr_Label->setGeometry(QRect(50, 125, 45, 26));
        new_pwd_Label = new QLabel(register_menu);
        new_pwd_Label->setObjectName(QString::fromUtf8("new_pwd_Label"));
        new_pwd_Label->setGeometry(QRect(50, 165, 30, 26));
#ifndef QT_NO_SHORTCUT
        new_usr_Label->setBuddy(new_usr_LineEdit);
        new_pwd_Label->setBuddy(new_pwd_LineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(new_usr_LineEdit, new_pwd_LineEdit);
        QWidget::setTabOrder(new_pwd_LineEdit, register_button);
        QWidget::setTabOrder(register_button, quit_button);

        retranslateUi(register_menu);

        QMetaObject::connectSlotsByName(register_menu);
    } // setupUi

    void retranslateUi(QWidget *register_menu)
    {
        register_menu->setWindowTitle(QApplication::translate("register_menu", "Form", nullptr));
        register_button->setText(QApplication::translate("register_menu", "\346\263\250\345\206\214", nullptr));
        quit_button->setText(QApplication::translate("register_menu", "\351\200\200\345\207\272", nullptr));
        word_label->setText(QApplication::translate("register_menu", "Register", nullptr));
        icon_label->setText(QApplication::translate("register_menu", "TextLabel", nullptr));
        new_usr_Label->setText(QApplication::translate("register_menu", "\346\226\260\350\264\246\345\217\267", nullptr));
        new_pwd_Label->setText(QApplication::translate("register_menu", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register_menu: public Ui_register_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_MENU_H
