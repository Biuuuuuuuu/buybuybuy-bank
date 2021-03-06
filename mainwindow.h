#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtNetwork>
#include <QGridLayout>
#include "bankaccount.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTcpServer *server;
    QList<QTcpSocket*> pool;
private slots:
    void on_signUpB_clicked();
    void on_loginB_clicked();
    void newConnect();
    void serverAnswer();
};

#endif // MAINWINDOW_H
