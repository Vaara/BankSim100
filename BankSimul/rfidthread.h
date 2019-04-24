#ifndef RFIDTHREAD_H
#define RFIDTHREAD_H
#include <QThread>
#include <QDebug>
#include "C:\Users\otto2\OneDrive\Tiedostot\BankSimu\BankSim100\rfid_dll\serialport.h"

class RFIDThread: public QThread
{
Q_OBJECT

public:
    RFIDThread();
    ~RFIDThread() override;

private:
    QString rfidPrint;
    serialport *objectRfidDLL;

signals:
    void rfid(QString);
    void finished();

protected:
    void run() override;
};

#endif // RFIDTHREAD_H
