#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QtSerialPort/QSerialPort>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    olioRfidDLL = new serialport("com9");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete olioRfidDLL;
    olioRfidDLL = NULL;
}

void MainWindow::on_pushButton_clicked()
{
    qDebug()<< olioRfidDLL->print();
}

