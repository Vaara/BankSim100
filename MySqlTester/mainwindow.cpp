#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    DLLMySql *mySql = new DLLMySql;
    if (mySql->openDatabase())
    {
        //Database connected

        if (mySql->rfidExists("0b123456789"))
        {
            //rfid found

            if (mySql->validCard("0b123456789"))
            {
                //ui->label->setText("Kortti toiminnallinen");
                if (mySql->checkPIN("0b123456789","1234"))
                {
                    ui->label->setText("PIN oikein");
                }
                else
                {
                    ui->label->setText("Pin väärin");
                }
            }
            else
            {
                ui->label->setText("Kortti suljettu");
            }

        }
        else
        {
            //rfid not found
        }
    } else
    {
        //Database connection error
    }
    delete mySql;
    mySql = nullptr;
}
