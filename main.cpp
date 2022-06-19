#include "widget.h"

#include <QApplication>
#include <QObject>
#include "main_menu.h"
#include "register_menu.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    //注册界面
    register_menu regs_menu;
    QObject::connect(&w, SIGNAL(show_regs_menu()), &regs_menu, \
                     SLOT(received_regs()));


    //主界面对象
    main_menu manu;
    QObject::connect(&w, SIGNAL(show_main_menu()), &manu, \
                     SLOT(received_login()));
    return a.exec();
}
