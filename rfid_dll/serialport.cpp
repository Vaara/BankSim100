#include "serialport.h"
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QThread>

serialport::serialport(QString com)
{
    serial = new QSerialPort;
    serial->setPortName(com);
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadOnly);
    if (serial->isOpen())
    {
        qDebug()<< "Portti auki";
    }
    else
    {
        //qDebug()<< "Portti kiinni";
    }
}

QString serialport::print()
{
    serial->readAll();
    while(serial->waitForReadyRead(), a = 1)
    {
             QThread::msleep(50);
             serialRead=serial->read(13);
             serialRead.remove(0,3);
             if (serialRead.count()>3)
             {
                 return serialRead;
                 a = 0;
             }
   }
    return serialRead;
}
