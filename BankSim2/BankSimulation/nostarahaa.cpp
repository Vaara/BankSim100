#include "nostarahaa.h"
#include "ui_nostarahaa.h"


NostaRahaa::NostaRahaa(QWidget *MainMenu) :
    QWidget(MainMenu),
    ui(new Ui::NostaRahaa)
{
    ui->setupUi(this);

    objectNostaOmaSumma = new NostaOmaSumma(this);
    objectNostaOmaSumma->hide();

    connect(objectNostaOmaSumma, SIGNAL(sigPalaaRahanNostoon()), this, SLOT(sloPalaaRahanNostoon()));
    connection = new DatabaseConnection;

    withdrawAmount = 0;
}

NostaRahaa::~NostaRahaa()
{
    delete ui;
    delete connection;
    connection = nullptr;
    delete objectNostaOmaSumma;
    objectNostaOmaSumma = nullptr;
}

void NostaRahaa::on_buttonSyotaSumma_clicked() //syötä oma summa -nappi
{
    ui->frame->hide();
    objectNostaOmaSumma->show();
}


void NostaRahaa::on_buttonPalaaAlkuun_clicked() //palaa takaisin -nappi
{
    ui->frame->hide();
    takaisin();
}

void NostaRahaa::takaisin()
{
    emit sigPalaaTakaisin(); //Nosta rahaa -näkymästä takaisin päävalikkoon (SIGNAL)
}

void NostaRahaa::sloPalaaRahanNostoon() //Oma summa -näkymästä takaisin Nosta rahaa -näkymään (SLOT)
{
    delete objectNostaOmaSumma;
    objectNostaOmaSumma = nullptr;

    objectNostaOmaSumma = new NostaOmaSumma(this);

    connect(objectNostaOmaSumma, SIGNAL(sigPalaaRahanNostoon()), this, SLOT(sloPalaaRahanNostoon()));

    ui->frame->show();
}







void NostaRahaa::on_buttonNosta20_clicked()
{
    withdrawAmount = 20;
    withdrawMoney();
}

void NostaRahaa::on_buttonNosta40_clicked()
{
    withdrawAmount = 40;
    withdrawMoney();
}

void NostaRahaa::on_buttonNosta60_clicked()
{
    withdrawAmount = 60;
    withdrawMoney();
}

void NostaRahaa::on_buttonNosta90_clicked()
{
    withdrawAmount = 90;
    withdrawMoney();
}

void NostaRahaa::on_buttonNosta140_clicked()
{
    withdrawAmount = 140;
    withdrawMoney();
}

void NostaRahaa::on_buttonNosta240_clicked()
{
    withdrawAmount = 240;
    withdrawMoney();
}

void NostaRahaa::withdrawMoney()
{
    if (connection->initialize("0b123456789"))
    {
        //connection->getLastLogin();
       if(connection->checkPin("1234"))
       {
           if(connection->accountHasEnoughBalance(withdrawAmount))
           {
               connection->withdrawMoney(withdrawAmount);

           }
       }
    }
    QMessageBox msgBox;
    msgBox.setText("Money is withdrawd");
    msgBox.setStyleSheet("QLabel{min-width:450 px; font-size: 50px;} QPushButton{ width:200px; font-size: 50px; }");
    msgBox.exec();

}
