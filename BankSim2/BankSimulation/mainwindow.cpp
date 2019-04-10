#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    objectPinCode = new PinCode(this);
    objectPinCode->hide();

    connect(objectPinCode, SIGNAL(sigBackToMainWindow()), this, SLOT(sloPalaaPaanakymaan()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectPinCode;
    objectPinCode = nullptr;
}

void MainWindow::on_pushButton_clicked() //väli-aikainen nappi, joka kuvastaa RFID-kortin ryöttämistä lukijaan
{
    ui->centralWidget->hide();
    objectPinCode->show();
}

void MainWindow::sloPalaaPaanakymaan() //PIN-koodi näkymästä takaisin alkunäkymään(SLOT)
{
    backVoid();
}

void MainWindow::backVoid() //PIN-koodi näkymästä takaisin alkunäkymään
{
    delete objectPinCode;
    objectPinCode = nullptr;
    objectPinCode = new PinCode(this);
    connect(objectPinCode, SIGNAL(sigBackToMainWindow()), this, SLOT(sloPalaaPaanakymaan()));
    ui->centralWidget->show();
}
