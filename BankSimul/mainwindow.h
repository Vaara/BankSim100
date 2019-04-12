#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QDebug>
#include "D:\Login_dll\DLLPinCode\dllpincode.h"
#include "D:\BankSimGit\BankSim100\DLLMySql\databaseconnection.h"
#include "rfidthread.h"
#include "timerthread.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void BankStart();
    void BankStop();

private:
    DatabaseConnection *connection;
    Ui::MainWindow *ui;
    DLLPinCode *objectPinCode;

    RFIDThread *objectRFIDThread;
    TimerThread *objectTimerThread;

    int cardDisableCounter;


signals:
    void enablePin();
    void readRFID();

private slots:
    void receivePin(QString pinReceived);
    void receiveRFID(QString rfidReceived);

protected:
    void mousePressEvent(QMouseEvent *event);

};

#endif // MAINWINDOW_H
