#include "serialport.h"
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QThread>

serialport::serialport()
{
serial = new QSerialPort;
    serial->setPortName("COM9");
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
}

QString serialport::print()
{
    while(serial->waitForReadyRead())
    {
             QThread::msleep(50);
             serialRead=serial->readAll();
             serialRead.remove(0,3);
             serialRead.chop(3);
             if (serialRead.count()>3)
             {
                 return serialRead;
             }
   }
    return serialRead;
}
