#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QHostAddress>//初始化地址对象
#include <QMessageBox>
#include <QJsonObject>
#include <QJsonDocument>
#include "chatlist.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void connect_success();//连接
    void server_reply();//接收服务器回复

    void on_registerButton_clicked(); //注册按钮

    void on_loginButton_clicked(); //登录按钮

private:
    void client_register_handler(QString);
    void client_login_handler(QString, QString, QString);

    Ui::Widget *ui;
    QTcpSocket *socket;
    QString userName;
};

#endif // WIDGET_H
