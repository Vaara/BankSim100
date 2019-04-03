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
   DatabaseConnection *connection = new DatabaseConnection;

    if (connection->initialize("0b123456789"))
    {
        if(connection->checkPin("1234"))
        {
            if (connection->withdrawMoney(10000))
            {
                this->ui->label->setText("Rahat nostettu");
            }
            else
            {
                this->ui->label->setText("Rahat ei riitä");
            }
        }
        else
        {
            this->ui->label->setText("Pin väärin");
        }
    }
    else
    {
        QString error = connection->getErrorMessage();
        this->ui->label->setText(error);
    }
    delete connection;
    connection = nullptr;
}
