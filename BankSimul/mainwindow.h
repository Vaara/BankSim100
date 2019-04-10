#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "D:\Login_dll\DLLPinCode\dllpincode.h"
#include "D:\QT_projekti\Git\BankSim100\BankSim100\DLLMySql\databaseconnection.h"
#include "rfidthread.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    DatabaseConnection *connection;
    Ui::MainWindow *ui;
    DLLPinCode *objectPinCode;
    int cardDisableCounter;
    RFIDThread *objectRFIDThread;

signals:
    void enablePin();
    void readRFID();

private slots:
    void receivePin(QString pinReceived);
    void receiveRFID(QString rfidReceived);
    void listenRFID();

};

#endif // MAINWINDOW_H
