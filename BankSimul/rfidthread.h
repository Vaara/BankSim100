#ifndef RFIDTHREAD_H
#define RFIDTHREAD_H
#include <QThread>
#include <QDebug>
#include "D:\BankSimGit\BankSim100\rfid_dll\serialport.h"

class RFIDThread: public QThread
{
Q_OBJECT

public:
    RFIDThread();
    virtual ~RFIDThread() override;
    QString rfidPrint;

private:
    serialport *objectRfidDLL;

signals:
    void rfid(QString);

protected:
    virtual void run() override;
};

#endif // RFIDTHREAD_H
