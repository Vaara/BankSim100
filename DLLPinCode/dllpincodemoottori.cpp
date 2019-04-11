#include "dllpincodemoottori.h"
#include "ui_dllpincodemoottori.h"

DLLPinCodeMoottori::DLLPinCodeMoottori(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DLLPinCodeMoottori)
{
    ui->setupUi(this);
    ui->pinLine->setValidator(new QIntValidator(0, 9999, this));

    pinTime = 15;
    pinTimer = new QTimer(this);
    QObject::connect(pinTimer, SIGNAL(timeout()), this, SLOT(pinTimeOut()));
    pinTimer->setInterval(1000);
    pinTimer->start();
}

DLLPinCodeMoottori::~DLLPinCodeMoottori()
{
    delete ui;
}


void DLLPinCodeMoottori::on_pinLine_textChanged(const QString &arg1)
{
    length = arg1.size();
    pin = arg1;
    ui->label->setNum(length);
    pinTime = 14;

    if(length == 4)
    {
    ui->label->setText(pin);
    emit sendPin(pin);
    ui->pinLine->clear();
    }
}

void DLLPinCodeMoottori::pinTimeOut()
{
    ui->timerLabel->setNum(pinTime);
    if(pinTime > 0)
    {
    pinTime--;
    }

    else if (pinTime == 0)
    {
    pinTimer->stop();
    ui->pinLine->setDisabled(true);

    //close();
    }
}

void DLLPinCodeMoottori::receivePinStatus(bool pinStatus)
{
 if(pinStatus == true)
 {
    ui->pinLabel->setText("Pin oikein");
 }
 else if (pinStatus == false)
 {
    ui->pinLabel->setText("Pin väärin");
 }

 else
 {
    ui->pinLabel->setText("Virhe");
 }

}
