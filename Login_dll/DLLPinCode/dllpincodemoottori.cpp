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

    if(length != 4)
    {
        ui->buttonEnter->setDisabled(1);
    }

    else
    {
        ui->buttonEnter->setDisabled(0);
    }
}


void DLLPinCodeMoottori::pinTimeOut()
{
    ui->timerLabel->setNum(pinTime);
    if(pinTime > 0 && pinTime != 5)
    {
    pinTime--;
    }

    else if (pinTime == 5)
    {
    ui->pinLine->setDisabled(true);
    ui->pinLine->setReadOnly(1);
    ui->pinLabel->setText("Aikakatkaisu");
    pinTime--;
    }

    else if (pinTime == 0)
    {
    pinTimer->stop();
    close();
    }
}


void DLLPinCodeMoottori::receivePinStatus(bool pinStatus)
{
 if(pinStatus == true)
 {
    ui->pinLabel->setText("Correct pin");
    close();
 }
 else if (pinStatus == false)
 {
    ui->pinLabel->setText("Incorrect pin.");
 }

 else
 {
    ui->pinLabel->setText("Error");
 }
}


void DLLPinCodeMoottori::buttonPress(int buttonPressed)
{
    if(ui->pinLine->isReadOnly() != true)
    {
       ui->pinLine->insert(QString::number(buttonPressed)); //lineEdit->insert toimii QIntValidatorin kanssa.
    }
    /*
    // Vanha versio. Ei jatkoon.
    int number = ui->pinLine->text().toInt();
    int result = number * 10 + buttonPressed;
    if(result <= 9999 && result > 0) // QIntValidator ei toimi kun lineEditiin syötetään sisältö ->setTextin kautta
    {
        QString resultText = QString::number(result);
        ui->pinLine->setText(resultText);

    }
    */
}

void DLLPinCodeMoottori::on_buttonNum1_clicked(){buttonPress(1);}    // napit 0-9, kutsuvat funktiota buttonPress() omalla arvollaan
void DLLPinCodeMoottori::on_buttonNum2_clicked(){buttonPress(2);}
void DLLPinCodeMoottori::on_buttonNum3_clicked(){buttonPress(3);}
void DLLPinCodeMoottori::on_buttonNum4_clicked(){buttonPress(4);}
void DLLPinCodeMoottori::on_buttonNum5_clicked(){buttonPress(5);}
void DLLPinCodeMoottori::on_buttonNum6_clicked(){buttonPress(6);}
void DLLPinCodeMoottori::on_buttonNum7_clicked(){buttonPress(7);}
void DLLPinCodeMoottori::on_buttonNum8_clicked(){buttonPress(8);}
void DLLPinCodeMoottori::on_buttonNum9_clicked(){buttonPress(9);}
void DLLPinCodeMoottori::on_buttonNum0_clicked(){buttonPress(0);}
void DLLPinCodeMoottori::on_buttonClear_clicked(){ui->pinLine->clear();}

void DLLPinCodeMoottori::on_buttonEnter_clicked()
{
    emit sendPin(pin);
    ui->pinLine->clear();
}
