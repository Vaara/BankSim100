#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"

Tilitapahtumat::Tilitapahtumat(QWidget *MainMenu) :
    QWidget(MainMenu),
    ui(new Ui::Tilitapahtumat)
{
    ui->setupUi(this);

    //QSqlQueryModel *model = connection->getTransactionModelFromPage(12, 0);


}

Tilitapahtumat::~Tilitapahtumat()
{
    delete ui;
    delete connection;
    connection = nullptr;
}

void Tilitapahtumat::on_buttonKirjauduUlos_clicked()
{
    ui->frame->hide();
    takaisin();
}


void Tilitapahtumat::takaisin()
{
    emit sigPalaaTakaisin();
}

void Tilitapahtumat::on_pushButton_clicked()
{
    connection = new DatabaseConnection;

     if (connection->initialize("0b123456789"))
     {
         //connection->getLastLogin();


         if(connection->checkPin("1234"))
         {
             if (connection->withdrawMoney(50))
             {


                 view = new QTableView(ui->stackedWidget);
                 QSqlQueryModel *model = connection->getTransactionModelFromPage(12, pageT);

                 view->setModel(model);
                 view->setWindowTitle("Tilitapahtumat");

                 model->rowCount();
                 view->show();
                 view->resize(700,500);

                 if (pageT == 0)
                 {
                     ui->previousPageButton->setDisabled(true);
                 }

             }

         }

     }


 }



void Tilitapahtumat::on_nextPageButton_clicked()
{
    pageT = pageT + 1;
    view->hide();
    QSqlQueryModel *model = connection->getTransactionModelFromPage(12, pageT);
    view->setModel(model);
    model->rowCount();
    view->show();
    ui->previousPageButton->setEnabled(true);
}

void Tilitapahtumat::on_previousPageButton_clicked()
{
    pageT = pageT - 1;
    view->hide();
    QSqlQueryModel *model = connection->getTransactionModelFromPage(12, pageT);
    view->setModel(model);
    model->rowCount();
    view->show();

    if(pageT == 0)
    {
        ui->previousPageButton->setDisabled(true);
    }

    else
    {
        ui->previousPageButton->setEnabled(true);
    }
}
