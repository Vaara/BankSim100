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

    if (connection->initialize("0b123456789"))
    {
        if(connection->checkPin("1234"))
        {
            if (connection->withdrawMoney(10000))
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
    delete connection;
    connection = nullptr;
<<<<<<< HEAD

>>>>>>> master
=======
>>>>>>> master
}
