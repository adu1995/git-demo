#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Login");
    this->setWindowIcon(QPixmap(":/icon/login.png"));
    this->setFixedSize(500, 380);

    ui->icon_label->setPixmap(QPixmap(":/icon/main.png"));
    ui->icon_label->setScaledContents(true);
    ui->word_label->setStyleSheet("color: rgb(20,196,188)");
    ui->word_label_a->setStyleSheet("color: rgb(20,196,188)");

    ui->usr_Label->setStyleSheet("color: rgb(20,196,188)");
    //ui->usr_Label->setPixmap(QPixmap(":/icon/db_user_entity.png"));
    //ui->usr_Label->setFixedSize(30, 30);
    //ui->usr_Label->setScaledContents(true);
    //ui->usr_Label->setAlignment(Qt::AlignRight);
    ui->pwd_Label->setStyleSheet("color: rgb(20,196,188)");
    //无边框
    //this->setWindowFlags(Qt::FramelessWindowHint);
    //密码不显示输入
    ui->pwd_LineEdit->setEchoMode(QLineEdit::Password);
    ui->pwd_LineEdit->setFixedHeight(30);
    ui->usr_LineEdit->setFixedHeight(30);
    //注册按钮无边框
    ui->signup_button->setStyleSheet("border:none");

    //sqlite数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("account.db");
    if(!db.open()){
        qDebug() << db.lastError().text();
        return ;
    }

    pQuery = new QSqlQuery(db);
    if(!pQuery->exec("create table if not exists usrMsg(usr text, "
                     "pwd text)")){
        qDebug() << pQuery->lastError().text();
        return ;
    }
}

Widget::~Widget()
{
    delete ui;
}

//退出按钮
void Widget::on_quit_button_clicked()
{
    exit(0);
}

//登录按钮
void Widget::on_login_button_clicked()
{
    QString usr = ui->usr_LineEdit->text();
    QString pwd = ui->pwd_LineEdit->text();
    QMessageBox msg;
    msg.setFixedSize(100, 500);
    QFont _font = ui->login_button->font();
    msg.setFont(_font);
    if(usr.isEmpty() || pwd.isEmpty()){
        msg.warning(this, " ", "账号或密码不能为空");
        return ;
    }
    //账号错误
    QString sql_usr = QString("select *from usrMsg where usr='%1'").arg(usr);
    if(!pQuery->exec(sql_usr)){
        qDebug() << pQuery->lastError();
        return ;
    }
    if(!pQuery->next()){
        msg.warning(this, " ", "账号错误!");
        return ;
    }
    //密码错误
    QString sql_pwd = QString("select *from usrMsg where usr='%1' and pwd='%2'").arg(usr).arg(pwd);
    if(!pQuery->exec(sql_pwd)){
        qDebug() << pQuery->lastError();
        return ;
    }
    if(!pQuery->next()){
        msg.warning(this, " ", "密码错误!");
        return ;
    }

    emit show_main_menu();
    this->close();
}


void Widget::on_signup_button_clicked()
{
    emit show_regs_menu();
}

