#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    i = 0;
}

MainWindow::~MainWindow()
{
    delete delegate;
    delegate = nullptr;
    delete view;
    view = nullptr;
    delete connection;
    connection = nullptr;
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   connection = new DatabaseConnection();

    if (connection->initialize("0b003256bd"))
    {
        if(connection->checkPin("1234"))
        {
            if (!connection->easyModeIsOn())
            {
                this->ui->label->setText(connection->getLastLogin());
                view = new QTableView();
                QSqlQueryModel *model = connection->getTransactionModelFromPage(12,i);
                i++;
                view->setModel(model);
                view->setWindowTitle("Tilitapahtumat");
                view->setGeometry(2300,200,500,400);

                delegate = new DoubleDelegate();
                view->setItemDelegateForColumn(2,delegate);
                view->show();
            }
            else
            {
                this->ui->label->setText("Not on");
            }

        }

    }

}
