#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "register_menu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

signals:
    void show_main_menu(void);
    void show_regs_menu(void);

private slots:
    void on_quit_button_clicked();

    void on_login_button_clicked();

    void on_signup_button_clicked();

private:
    Ui::Widget *ui;
    QSqlQuery *pQuery;
};
#endif // WIDGET_H
