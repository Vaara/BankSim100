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
            //ui->label->setText("löytyi");
            if (mySql->validExpiration("0b123456789"))
            {
                ui->label->setText("Voimassa");
            }
            else
            {
                ui->label->setText("Ei voimassa");
            }

        }
        else
        {
            //rfid not found
            //ui->label->setText("ei ole");
        }
    } else
    {
        //Database connection error
    }
    delete mySql;
    mySql = nullptr;
}
