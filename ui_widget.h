/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *signup_button;
    QLabel *signup_hint_label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *usr_LineEdit;
    QLabel *pwd_Label;
    QLineEdit *pwd_LineEdit;
    QLabel *usr_Label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *quit_button;
    QPushButton *login_button;
    QLabel *word_label;
    QLabel *icon_label;
    QLabel *word_label_a;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(503, 375);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223"));
        font.setPointSize(9);
        Widget->setFont(font);
        Widget->setCursor(QCursor(Qt::PointingHandCursor));
        Widget->setAutoFillBackground(true);
        Widget->setStyleSheet(QString::fromUtf8(""));
        signup_button = new QPushButton(Widget);
        signup_button->setObjectName(QString::fromUtf8("signup_button"));
        signup_button->setEnabled(true);
        signup_button->setGeometry(QRect(435, 336, 61, 28));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223"));
        font1.setPointSize(7);
        font1.setUnderline(true);
        signup_button->setFont(font1);
        signup_button->setCursor(QCursor(Qt::PointingHandCursor));
        signup_button->setStyleSheet(QString::fromUtf8("styleSheet:(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.49, fy:0.494318, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))"));
        signup_hint_label = new QLabel(Widget);
        signup_hint_label->setObjectName(QString::fromUtf8("signup_hint_label"));
        signup_hint_label->setGeometry(QRect(370, 340, 71, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223"));
        font2.setPointSize(7);
        signup_hint_label->setFont(font2);
        formLayoutWidget = new QWidget(Widget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 180, 361, 99));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        usr_LineEdit = new QLineEdit(formLayoutWidget);
        usr_LineEdit->setObjectName(QString::fromUtf8("usr_LineEdit"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font3.setPointSize(10);
        usr_LineEdit->setFont(font3);
        usr_LineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"        color: rgb(31,31,31);\n"
"        padding-left:20px; \n"
"        background-color: rgb(255, 255, 255);\n"
"        border:2px solid rgb(20,196,188);\n"
"        border-radius:15px;\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, usr_LineEdit);

        pwd_Label = new QLabel(formLayoutWidget);
        pwd_Label->setObjectName(QString::fromUtf8("pwd_Label"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font4.setPointSize(14);
        pwd_Label->setFont(font4);

        formLayout->setWidget(1, QFormLayout::LabelRole, pwd_Label);

        pwd_LineEdit = new QLineEdit(formLayoutWidget);
        pwd_LineEdit->setObjectName(QString::fromUtf8("pwd_LineEdit"));
        pwd_LineEdit->setFont(font3);
        pwd_LineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"        color: rgb(31,31,31);\n"
"        padding-left:20px; \n"
"        background-color: rgb(255, 255, 255);\n"
"        border:2px solid rgb(20,196,188);\n"
"        border-radius:15px;\n"
"}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pwd_LineEdit);

        usr_Label = new QLabel(formLayoutWidget);
        usr_Label->setObjectName(QString::fromUtf8("usr_Label"));
        usr_Label->setFont(font4);

        formLayout->setWidget(0, QFormLayout::LabelRole, usr_Label);

        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 250, 361, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        quit_button = new QPushButton(horizontalLayoutWidget);
        quit_button->setObjectName(QString::fromUtf8("quit_button"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font5.setPointSize(18);
        quit_button->setFont(font5);
        quit_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"        color: rgb(255,255,255);\n"
"        background-color: rgb(20,196,188);\n"
"        border: none;\n"
"        border-radius:15px;\n"
"        hover{background-color: rgb(22,218,208)};\n"
"        pressed{background-color: rgb(17,171,164)};\n"
"}"));

        horizontalLayout->addWidget(quit_button);

        login_button = new QPushButton(horizontalLayoutWidget);
        login_button->setObjectName(QString::fromUtf8("login_button"));
        login_button->setFont(font5);
        login_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"        color: rgb(255,255,255);\n"
"        background-color: rgb(20,196,188);\n"
"        border: none;\n"
"        border-radius:15px;\n"
"        hover{background-color: rgb(22,218,208)};\n"
"        pressed{background-color: rgb(17,171,164)};\n"
"}"));

        horizontalLayout->addWidget(login_button);

        word_label = new QLabel(Widget);
        word_label->setObjectName(QString::fromUtf8("word_label"));
        word_label->setGeometry(QRect(110, 80, 141, 91));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font6.setPointSize(22);
        word_label->setFont(font6);
        icon_label = new QLabel(Widget);
        icon_label->setObjectName(QString::fromUtf8("icon_label"));
        icon_label->setGeometry(QRect(230, 10, 211, 161));
        word_label_a = new QLabel(Widget);
        word_label_a->setObjectName(QString::fromUtf8("word_label_a"));
        word_label_a->setGeometry(QRect(70, 30, 181, 71));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font7.setPointSize(24);
        word_label_a->setFont(font7);
#ifndef QT_NO_SHORTCUT
        pwd_Label->setBuddy(pwd_LineEdit);
        usr_Label->setBuddy(usr_LineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(usr_LineEdit, pwd_LineEdit);
        QWidget::setTabOrder(pwd_LineEdit, signup_button);
        QWidget::setTabOrder(signup_button, quit_button);
        QWidget::setTabOrder(quit_button, login_button);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        signup_button->setText(QApplication::translate("Widget", "\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
        signup_hint_label->setText(QApplication::translate("Widget", "\350\277\230\346\262\241\346\234\211\350\264\246\345\217\267?", nullptr));
        pwd_Label->setText(QApplication::translate("Widget", "\345\257\206\347\240\201(&M)", nullptr));
        usr_Label->setText(QApplication::translate("Widget", "\350\264\246\345\217\267(&N)", nullptr));
        quit_button->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        login_button->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        word_label->setText(QApplication::translate("Widget", "Painter", nullptr));
        icon_label->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        word_label_a->setText(QApplication::translate("Widget", "Welcome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
