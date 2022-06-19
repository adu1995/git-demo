#ifndef REGISTER_MENU_H
#define REGISTER_MENU_H

#include <QWidget>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

namespace Ui {
class register_menu;
}

class register_menu : public QWidget
{
    Q_OBJECT

public:
    explicit register_menu(QWidget *parent = nullptr);
    ~register_menu();

private slots:
    void on_register_button_clicked();

    void on_quit_button_clicked();

    void received_regs();

private:
    Ui::register_menu *ui;
    QSqlQuery *query;
};

#endif // REGISTER_MENU_H
