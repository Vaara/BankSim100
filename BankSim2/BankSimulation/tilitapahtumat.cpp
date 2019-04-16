#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"

Tilitapahtumat::Tilitapahtumat(QWidget *MainMenu) :
    QWidget(MainMenu),
    ui(new Ui::Tilitapahtumat)
{
    ui->setupUi(this);
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
        connection->getLastLogin();
        balance = connection->getCurrentBalance();

        if(connection->checkPin("1234"))
        {
            if (connection->checkConnection() == true)
            {
                pageNumber = 1;
                currentPage = 0;

                pageCount = connection->getTransactionPageCount(12);

                ui->labelLastLogin->setText("Last login:");
                ui->labelLastLogin_2->setText(connection->getLastLogin());

                ui->label_2->setText("Balance:");
                QString balanceString;
                balanceString.setNum(balance, 'f', 2);
                ui->labelBalance->setText(balanceString + "€");

                ui->labelPageNumber->setText(QString::number(pageNumber));
                view = new QTableView(ui->stackedWidget);
                QSqlQueryModel *model = connection->getTransactionModelFromPage(12, currentPage);

                view->setModel(model);
                view->setWindowTitle("Tilitapahtumat");
                model->rowCount();
                view->show();
                view->resize(700,500);

                if (currentPage == 0)
                {
                    ui->previousPageButton->setDisabled(true);
                }
            }
            else
            {
                QMessageBox msgBox;
                msgBox.setText("Error in connection.");
                msgBox.setStyleSheet("QLabel{min-width:450 px; font-size: 50px;} QPushButton{ width:200px; font-size: 50px; }");
                msgBox.exec();
            }
        }
    }
}



void Tilitapahtumat::on_nextPageButton_clicked()
{
    currentPage = currentPage + 1;
    pageNumber = pageNumber + 1;

    ui->labelPageNumber->setText(QString::number(pageNumber));
    view->hide();
    QSqlQueryModel *model = connection->getTransactionModelFromPage(12, currentPage);
    view->setModel(model);
    model->rowCount();
    view->show();
    ui->previousPageButton->setEnabled(true);

    if(currentPage + 1 >= pageCount)
    {
        ui->nextPageButton->setDisabled(true);
    }

}

void Tilitapahtumat::on_previousPageButton_clicked()
{
    currentPage = currentPage - 1;
    pageNumber = pageNumber - 1;

    ui->labelPageNumber->setText(QString::number(pageNumber));
    view->hide();
    QSqlQueryModel *model = connection->getTransactionModelFromPage(12, currentPage);
    view->setModel(model);
    model->rowCount();
    view->show();
    ui->nextPageButton->setEnabled(true);

    if(currentPage == 0)
    {
        ui->previousPageButton->setDisabled(true);
    }

    else
    {
        ui->previousPageButton->setEnabled(true);
    }
}
