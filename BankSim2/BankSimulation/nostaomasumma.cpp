#include "nostaomasumma.h"
#include "ui_nostaomasumma.h"

NostaOmaSumma::NostaOmaSumma(QWidget *NostaRahaa) :
    QWidget(NostaRahaa),
    ui(new Ui::NostaOmaSumma)
{
    ui->setupUi(this);
    ownWithdrawAmount = 0;
    connection = new DatabaseConnection;

    QPalette pal = palette();

    pal.setColor(QPalette::Background, Qt::green);      //asetetaan ENTER-nappi vihreän väriseksi
    ui->buttonEnter->setAutoFillBackground(true);
    ui->buttonEnter->setPalette(pal);
    ui->buttonEnter->setStyleSheet("background-color:green;");
    ui->buttonEnter->show();

    pal.setColor(QPalette::Background, Qt::yellow);     //asetetaan CLEAR-nappi keltaisen väriseksi
    ui->buttonClear->setAutoFillBackground(true);
    ui->buttonClear->setPalette(pal);
    ui->buttonClear->setStyleSheet("background-color:yellow;");
    ui->buttonClear->show();
}

NostaOmaSumma::~NostaOmaSumma()
{
    delete ui;
    delete connection;
    connection = nullptr;
}

void NostaOmaSumma::on_button1_clicked() //Näppäimistön nappi 1
{
    ui->lineEdit->setText(ui->lineEdit->text() + "1");
}

void NostaOmaSumma::on_button2_clicked() //Näppäimistön nappi 2
{
    ui->lineEdit->setText(ui->lineEdit->text() + "2");
}

void NostaOmaSumma::on_button3_clicked() //Näppäimistön nappi 3
{
    ui->lineEdit->setText(ui->lineEdit->text() + "3");
}

void NostaOmaSumma::on_button4_clicked() //Näppäimistön nappi 4
{
    ui->lineEdit->setText(ui->lineEdit->text() + "4");
}

void NostaOmaSumma::on_button5_clicked() //Näppäimistön nappi 5
{
    ui->lineEdit->setText(ui->lineEdit->text() + "5");
}

void NostaOmaSumma::on_button6_clicked() //Näppäimistön nappi 6
{
    ui->lineEdit->setText(ui->lineEdit->text() + "6");
}

void NostaOmaSumma::on_button7_clicked() //Näppäimistön nappi 7
{
    ui->lineEdit->setText(ui->lineEdit->text() + "7");
}

void NostaOmaSumma::on_button8_clicked() //Näppäimistön nappi 8
{
    ui->lineEdit->setText(ui->lineEdit->text() + "8");
}

void NostaOmaSumma::on_button9_clicked() //Näppäimistön nappi 9
{
    ui->lineEdit->setText(ui->lineEdit->text() + "9");
}

void NostaOmaSumma::on_button0_clicked() //Näppäimistön nappi 0
{
    ui->lineEdit->setText(ui->lineEdit->text() + "0");
}

void NostaOmaSumma::on_buttonClear_clicked() //Poista teksti/merkit tekstikentästä -nappi
{
    ui->lineEdit->setText("");
}

void NostaOmaSumma::on_buttonBack_clicked() //takaisin -nappi
{
    ui->frame->hide();
    sigPalaaRahanNostoon();
}

void NostaOmaSumma::palaaRahanNostoon()
{
    emit sigPalaaRahanNostoon();//Oma summa -näkymästä takaisin nosta rahaa -näkymään (SIGNAL)
}




void NostaOmaSumma::on_buttonEnter_clicked()
{
    QString XMAX=ui->lineEdit->text();
    ownWithdrawAmount=XMAX.toDouble();


    if (connection->initialize("0b123456789"))//tässä komennossa ohjelma kaatuu
    {
        //connection->getLastLogin();
       if(connection->checkPin("1234"))
       {
           if(connection->accountHasEnoughBalance(ownWithdrawAmount))
           {
               connection->withdrawMoney(ownWithdrawAmount);
           }
       }
    }
    QMessageBox msgBox;
    msgBox.setText("Money is withdrawd");
    msgBox.setStyleSheet("QLabel{min-width:450 px; font-size: 50px;} QPushButton{ width:200px; font-size: 50px; }");
    msgBox.exec();
}
