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
    /*MySql *mySql = new MySql;
    if (mySql->openDatabase())
    {
        //Database connected

        if (mySql->rfidExists("0b123456789"))
        {
            //rfid found

            if (mySql->validCard("0b123456789"))
            {
                //ui->label->setText("Kortti toiminnallinen");
                if (mySql->checkPin("0b123456789","1234"))
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
        }
        else
        {
            this->ui->label->setText("Pin väärin");
        }
    }
    else
    {
        QString error = connection->getErrorMessage();
    }
    delete connection;
    connection = nullptr;

}
