#ifndef SERIALPORT_H
#define SERIALPORT_H
#include <QtSerialPort/QSerialPort>
#include <QString>
#include "rfid_dll_global.h"

class RFID_DLLSHARED_EXPORT serialport
{
public:
    serialport();
    QString print();
    void connectPort();
    QString getserialRead();
    QString cardNumber();

private:
    QSerialPort *serial;
    QString serialRead;


};

#endif // SERIALPORT_H
