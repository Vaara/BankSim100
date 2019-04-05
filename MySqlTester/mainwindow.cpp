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
    delete view;
    view = nullptr;
    delete connection;
    connection = nullptr;
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   connection = new DatabaseConnection;

    if (connection->initialize("0b123456789"))
    {
        if(connection->checkPin("1234"))
        {
            if (connection->withdrawMoney(50))
            {
                this->ui->label->setText("Rahat nostettu");
                view = new QTableView();
                view->setModel(connection->getTransactionModel());
                view->setWindowTitle("Tilitapahtumat");
                view->show();
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

}
