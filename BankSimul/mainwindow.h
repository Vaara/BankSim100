#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QDebug>
#include "D:\project\Login_dll\DLLPinCode\dllpincode.h"
#include "D:\project\DLLMySql\databaseconnection.h"
#include "rfidthread.h"
#include "timerthread.h"
#include "uibanksim.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
   Q_OBJECT
   QThread workerRFIDThread;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void bankStart();

private:
    Ui::MainWindow *ui;

    DatabaseConnection *connection;
    DLLPinCode *objectPinCode;
    RFIDThread *objectRFIDThread;
    TimerThread *objectTimerThread;
    UIBankSim *objectUIBankSim;

    int cardDisableCounter;

signals:
    void enablePin();
    void pageResetting();

private slots:
    void receivePin(QString pinReceived);
    void receiveRFID(QString rfidReceived);
    void bankStop();
    void idleTimerReset();
    void deleteUIBankSim();
    void logoutTimer();

protected:
    void mousePressEvent(QMouseEvent *event);

};

#endif // MAINWINDOW_H
