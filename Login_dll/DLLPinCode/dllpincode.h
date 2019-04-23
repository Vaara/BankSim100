#ifndef DLLPINCODE_H
#define DLLPINCODE_H

#include "dllpincode_global.h"
#include "dllpincodemoottori.h"

class DLLPINCODESHARED_EXPORT DLLPinCode: public QObject
{
    Q_OBJECT

public:
    DLLPinCode();
    ~DLLPinCode();
    int rajapintaDLLPinCode();
    void deliverPinStatus(bool);

private:
     DLLPinCodeMoottori *olioPinCode;
     int rejectCounter;

signals:
     void checkPin(QString);
     void pinStatus(bool);

public slots:
     void receivePin(QString pinReceived);
};

#endif // DLLPINCODE_H
