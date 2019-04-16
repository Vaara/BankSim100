#include "tilinsaldo.h"
#include "ui_tilinsaldo.h"


TilinSaldo::TilinSaldo(QWidget *MainMenu) :
    QWidget(MainMenu),
    ui(new Ui::TilinSaldo)
{
    ui->setupUi(this);
    showTransactions();
}

TilinSaldo::~TilinSaldo()
{
    delete ui;
    delete connection;
    connection = nullptr;
    delete view;
    view = nullptr;
}

void TilinSaldo::on_buttonKirjauduUlos_clicked() //*palaa takaisin nappi, ei kirjaudu ulos
{
    ui->widget->hide();
    takaisin();
}


void TilinSaldo::takaisin()
{
    delete connection;
    connection = nullptr;
    delete view;
    view = nullptr;
    emit sigPalaaTakaisin();
}

void TilinSaldo::showTransactions()
{
    connection = new DatabaseConnection;

     if (connection->initialize("0b123456789"))
     {
        balance = connection->getCurrentBalance();

        if(connection->checkPin("1234"))
        {
                if (connection->checkConnection() == true)
                {

                    view = new QTableView(ui->frame);
                    QSqlQueryModel *model = connection->getTransactionModelFromPage(5, 0);

                    ui->nameLabel->setText(connection->getOwnerName());
                    QString balanceString;
                    balanceString.setNum(balance, 'f', 2);
                    ui->balanceLabel->setText(balanceString + "€");


                    view->setModel(model);
                    view->setWindowTitle("Tilitapahtumat");
                    model->rowCount();
                    view->show();
                    view->resize(700,400);


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
