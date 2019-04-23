#include "dllpincode.h"

DLLPinCode::DLLPinCode()
{

}


DLLPinCode::~DLLPinCode()
{
    delete olioPinCode;
    olioPinCode = nullptr;
}


int DLLPinCode::rajapintaDLLPinCode()
{
    rejectCounter = 2;
    olioPinCode = new DLLPinCodeMoottori();
    connect(olioPinCode, SIGNAL(sendPin(QString)), this, SLOT(receivePin(QString)));
    connect(this, SIGNAL(pinStatus(bool)), olioPinCode, SLOT(receivePinStatus(bool)));
    olioPinCode ->exec();

    return olioPinCode -> result();
}


void DLLPinCode::receivePin(QString pinReceived)
{
       emit checkPin(pinReceived);   // pin syötetty, tarkistus -> mainwindow.cpp
}

void DLLPinCode::deliverPinStatus(bool pinValid)
{
    if (pinValid == true)
    {
        olioPinCode->accept();
    }
    else
    {
        if(rejectCounter == 0)
        {
        olioPinCode->reject();
        }
        else
        {
        rejectCounter--;
        }
    }
    emit pinStatus(pinValid);     // oliko pin oikein? -> dllpincodemoottori
}
