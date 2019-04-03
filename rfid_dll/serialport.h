#ifndef SERIALPORT_H
#define SERIALPORT_H
#include <QtSerialPort/QSerialPort>
#include <QString>
#include "rfid_dll_global.h"

class RFID_DLLSHARED_EXPORT serialport
{
public:
    serialport(QString com);
    void connect();
    QString print();
    QString cardNumber();
    QString other();
    int a = 1;
private:
    QSerialPort *serial;
    QString serialRead;
    QSerialPortInfo *serialName;

};

#endif // SERIALPORT_H
