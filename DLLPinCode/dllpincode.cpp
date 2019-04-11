#include "dllpincode.h"

DLLPinCode::DLLPinCode()
{

}


DLLPinCode::~DLLPinCode()
{
    delete olioPinCode;
    olioPinCode = nullptr;
}


void DLLPinCode::rajapintaDLLPinCode()
{
    olioPinCode = new DLLPinCodeMoottori();
    connect(olioPinCode, SIGNAL(sendPin(QString)), this, SLOT(receivePin(QString)));
    connect(this, SIGNAL(pinStatus(bool)), olioPinCode, SLOT(receivePinStatus(bool)));
    olioPinCode ->exec();
}


void DLLPinCode::receivePin(QString pinReceived)
{
       emit checkPin(pinReceived);   // pin syötetty, tarkistus -> mainwindow.cpp
}

void DLLPinCode::deliverPinStatus(bool pinValid)
{
       emit pinStatus(pinValid);     // oliko pin oikein? -> dllpincodemoottori
}
