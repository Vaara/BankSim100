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
   connection = new DatabaseConnection();

    if (connection->initialize("0b123456789"))
    {
        if(connection->checkPin("1234"))
        {
            if (connection->withdrawMoney(50))
            {
                this->ui->label->setText(QString::number(connection->getCurrentBalance()));
                view = new QTableView();
                QSqlQueryModel *model = connection->getTransactionModelFromPage(12,0);
                view->setModel(model);
                view->setWindowTitle("Tilitapahtumat");
                view->setGeometry(2300,200,500,400);
                view->show();
            }

        }

    }

}
