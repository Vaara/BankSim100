#include "rfidthread.h"

RFIDThread::RFIDThread()
{
    objectRfidDLL = new serialport("COM25"); // tähän oma COM -portti
}

RFIDThread::~RFIDThread()
{
    delete objectRfidDLL;
    objectRfidDLL = nullptr;
    qDebug()<< QString("RFID tuhottu");
}

void RFIDThread::run()
{
    //objectRfidDLL = new serialport("COM25"); // tähän oma COM -portti
    rfidPrint = objectRfidDLL->print();
    qDebug()<< QString(rfidPrint);

    emit rfid(rfidPrint);
    emit finished();
}
