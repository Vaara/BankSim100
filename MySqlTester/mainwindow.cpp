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
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    DLLMySql *mySql = new DLLMySql;
=======
    /*MySql *mySql = new MySql;
>>>>>>> master
    if (mySql->openDatabase())
    {
        //Database connected
=======
   DatabaseConnection *connection = new DatabaseConnection;
>>>>>>> master
=======
   connection = new DatabaseConnection();
>>>>>>> master

    if (connection->initialize("0b123456789"))
    {
        if(connection->checkPin("1234"))
        {
            if (connection->withdrawMoney(50))
            {
<<<<<<< HEAD
                //ui->label->setText("Kortti toiminnallinen");
<<<<<<< HEAD
                if (mySql->checkPIN("0b123456789","1234"))
=======
                if (mySql->checkPin("0b123456789","1234"))
>>>>>>> master
                {
                    ui->label->setText("PIN oikein");
                }
                else
                {
                    ui->label->setText("Pin väärin");
                }
=======
                this->ui->label->setText("Rahat nostettu");
<<<<<<< HEAD
>>>>>>> master
=======
                view = new QTableView();
                QSqlQueryModel *model = connection->getTransactionModelFromPage(12,2);
                view->setModel(model);
                view->setWindowTitle("Tilitapahtumat");
                view->setGeometry(2300,200,500,400);
                view->show();
>>>>>>> master
            }
            else
            {
                this->ui->label->setText("Rahat ei riitä");
            }
<<<<<<< HEAD

        }
        else
        {
            //rfid not found
        }
    } else
    {
        //Database connection error
    }
<<<<<<< HEAD
    delete mySql;
    mySql = nullptr;
=======
    mySql->closeDatabase();
    delete mySql;
    mySql = nullptr;
    QSqlDatabase::removeDatabase("bankDB");*/

    DatabaseConnection *connection = new DatabaseConnection;

    if (connection->initialize("0b123456789"))
    {
        if(connection->checkPin("1235"))
        {
            this->ui->label->setText("Pin oikein");
=======
>>>>>>> master
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
<<<<<<< HEAD
    delete connection;
    connection = nullptr;
<<<<<<< HEAD

>>>>>>> master
=======
>>>>>>> master
=======
>>>>>>> master
}
