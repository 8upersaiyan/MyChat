#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("CKchat");
    socket = new QTcpSocket; //初始化对象
    socket->connectToHost(QHostAddress("106.14.64.62"), 8000); //向服务器发起连接

    connect(socket, &QTcpSocket::connected, this, &Widget::connect_success);//连接成功绑定槽函数
    connect(socket, &QTcpSocket::readyRead, this, &Widget::server_reply);//服务器回复客户端
}

Widget::~Widget()
{
    delete ui;
}

void Widget::connect_success()
{
    QMessageBox::information(this, "连接提示", "连接服务器成功");
}

//------------------------注册-------------------------------------
void Widget::on_registerButton_clicked()
{
    QString username = ui->userLineEdit->text();
    QString password = ui->passwdLineEdit->text();

    //创建json对象{"cmd":"register","user":"小明","password":"11111"};
    QJsonObject obj;
    obj.insert("cmd", "register");
    obj.insert("user", username);
    obj.insert("password", password);

    QByteArray ba = QJsonDocument(obj).toJson();//打包
    socket->write(ba);//发送到服务器
}

void Widget::server_reply()//接收服务器传过来信息
{
    QByteArray ba = socket->readAll();
    QJsonObject obj = QJsonDocument::fromJson(ba).object();
    QString cmd = obj.value("cmd").toString();
    if (cmd == "register_reply")//注册
    {
        client_register_handler(obj.value("result").toString());
    }
    else if (cmd == "login_reply")//登陆
    {
        client_login_handler(obj.value("result").toString(),
                      obj.value("friend").toString(), obj.value("group").toString());
    }
}

void Widget::client_register_handler(QString res)
{
    if (res == "success")
    {
        QMessageBox::information(this, "注册提示", "注册成功");
    }
    else if (res == "failure")
    {
        QMessageBox::warning(this, "注册提示", "注册失败");
    }
}
//-----------------------------------------------------------------

//----------------------------登陆----------------------------------
void Widget::on_loginButton_clicked()
{
    QString username = ui->userLineEdit->text();
    QString password = ui->passwdLineEdit->text();

    //创建json对象 {"cmd":"login","user":"小明","password":"11111"};
    QJsonObject obj;
    obj.insert("cmd", "login");
    obj.insert("user", username);
    obj.insert("password", password);

    userName = username;

    QByteArray ba = QJsonDocument(obj).toJson();
    socket->write(ba);//发送到服务器
}

void Widget::client_login_handler(QString res, QString fri, QString group)
{
    if (res == "user_not_exist")
    {
        QMessageBox::warning(this, "登录提示", "用户不存在");
    }
    else if (res == "password_error")
    {
        QMessageBox::warning(this, "登录提示", "密码错误");
    }
    else if (res == "success")
    {
        this->hide(); //隐藏当前界面
        socket->disconnect(SIGNAL(readyRead())); //断开当前socket连接
        Chatlist *c = new Chatlist(socket, fri, group, userName);//重新连接新的界面
        c->setWindowTitle(userName);
        c->show();//显示
    }
}
