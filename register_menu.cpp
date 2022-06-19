#include "register_menu.h"
#include "ui_register_menu.h"

register_menu::register_menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::register_menu)
{
    ui->setupUi(this);
    this->setWindowTitle("Register");
    this->setWindowIcon(QIcon(":/icon/register.png"));
    this->setFixedSize(402, 321);
    this->setWindowFlag(Qt::WindowStaysOnTopHint);
    //无边框
    //this->setWindowFlags(Qt::FramelessWindowHint);
    //密码不显示输入
    ui->new_pwd_LineEdit->setEchoMode(QLineEdit::Password);
    ui->new_pwd_LineEdit->setPlaceholderText("新的密码");
    ui->new_usr_LineEdit->setPlaceholderText("新的用户名");

    ui->new_usr_Label->setPixmap(QPixmap(":/icon/db_user_entity.png"));
    ui->new_usr_Label->setFixedSize(35, 35);
    ui->new_usr_Label->setScaledContents(true);
    ui->new_usr_Label->setAlignment(Qt::AlignRight);

    ui->new_pwd_Label->setPixmap(QPixmap(":/icon/db_ms_user_database_role.png"));
    ui->new_pwd_Label->setFixedSize(35, 35);
    ui->new_pwd_Label->setScaledContents(true);
    ui->new_pwd_Label->setAlignment(Qt::AlignRight);

    ui->icon_label->setPixmap(QPixmap(":/icon/regis.png"));
    ui->icon_label->setScaledContents(true);

    ui->word_label->setStyleSheet("color: rgb(20,196,188)");
    query = new QSqlQuery();

}

register_menu::~register_menu()
{
    delete ui;
}

void register_menu::on_register_button_clicked()
{
    QString usr = ui->new_usr_LineEdit->text();
    QString pwd = ui->new_pwd_LineEdit->text();
    QMessageBox msg;
    if(usr.isEmpty() || pwd.isEmpty()){
        msg.warning(this, " ", "账号或密码不能为空");
        return ;
    }
    QString sql_usr = QString("select *from usrMsg where usr='%1'").arg(usr);
    if(!query->exec(sql_usr)){
        qDebug() << query->lastError();
        return ;
    }
    if(query->next()){
        msg.warning(this, " ", "账号已存在");
        return ;
    }
    //
    QString sql_insert = QString("insert into usrMsg values('%1', '%2')").arg(usr).arg(pwd);
    if(!query->exec(sql_insert)){
        qDebug() << query->lastError();
        return ;
    }
    msg.information(this, " ", "注册成功");
}


void register_menu::on_quit_button_clicked()
{
    this->close();
}

void register_menu::received_regs()
{
    this->setWindowModality(Qt::ApplicationModal);
    this->show();
}

