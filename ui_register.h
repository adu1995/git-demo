/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *new_usr_Label;
    QLineEdit *new_usr_LineEdit;
    QLabel *new_pwd_Label;
    QLineEdit *new_pwd_LineEdit;
    QPushButton *register_button;
    QPushButton *pushButton;

    void setupUi(QWidget *register)
    {
        if (register->objectName().isEmpty())
            register->setObjectName(QString::fromUtf8("register"));
        register->resize(319, 300);
        formLayoutWidget = new QWidget(register);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(60, 60, 160, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        new_usr_Label = new QLabel(formLayoutWidget);
        new_usr_Label->setObjectName(QString::fromUtf8("new_usr_Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, new_usr_Label);

        new_usr_LineEdit = new QLineEdit(formLayoutWidget);
        new_usr_LineEdit->setObjectName(QString::fromUtf8("new_usr_LineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, new_usr_LineEdit);

        new_pwd_Label = new QLabel(formLayoutWidget);
        new_pwd_Label->setObjectName(QString::fromUtf8("new_pwd_Label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, new_pwd_Label);

        new_pwd_LineEdit = new QLineEdit(formLayoutWidget);
        new_pwd_LineEdit->setObjectName(QString::fromUtf8("new_pwd_LineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, new_pwd_LineEdit);

        register_button = new QPushButton(register);
        register_button->setObjectName(QString::fromUtf8("register_button"));
        register_button->setGeometry(QRect(62, 160, 151, 28));
        register_button->setStyleSheet(QString::fromUtf8("ui->quit_button->setStyleSheet(\n"
"        \"font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\"\n"
"        \"color: rgb(255,255,255);\"\n"
"        \"background-color: rgb(20,196,188);\"\n"
"        \"border: none;\"\n"
"        \"border-radius:15px;\"\n"
"        \"hover{background-color: rgb(22,218,208);}\"//hover\n"
"        \"pressed{background-color: rgb(17,171,164);}\"//pressed\n"
"    );"));
        pushButton = new QPushButton(register);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(62, 200, 151, 28));
        pushButton->setStyleSheet(QString::fromUtf8("    ui->quit_button->setStyleSheet(\n"
"        \"font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\"\n"
"        \"color: rgb(255,255,255);\"\n"
"        \"background-color: rgb(20,196,188);\"\n"
"        \"border: none;\"\n"
"        \"border-radius:15px;\"\n"
"        \"hover{background-color: rgb(22,218,208);}\"//hover\n"
"        \"pressed{background-color: rgb(17,171,164);}\"//pressed\n"
"    );"));

        retranslateUi(register);

        QMetaObject::connectSlotsByName(register);
    } // setupUi

    void retranslateUi(QWidget *register)
    {
        register->setWindowTitle(QApplication::translate("register", "Form", nullptr));
        new_usr_Label->setText(QApplication::translate("register", "\346\226\260\350\264\246\345\217\267", nullptr));
        new_pwd_Label->setText(QApplication::translate("register", "\345\257\206\347\240\201", nullptr));
        register_button->setText(QApplication::translate("register", "\346\263\250\345\206\214", nullptr));
        pushButton->setText(QApplication::translate("register", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register: public Ui_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
