#include "rfidthread.h"

RFIDThread::RFIDThread()
{
    objectRfidDLL = new serialport("COM25"); // tähän oma COM -portti
}
RFIDThread::~RFIDThread()
{
    delete objectRfidDLL;
    objectRfidDLL = nullptr;
}

void RFIDThread::run()
{

    rfidPrint = objectRfidDLL->print();
    qDebug()<< QString(rfidPrint);
    emit rfid(rfidPrint);

};
