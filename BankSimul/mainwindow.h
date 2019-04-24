#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QDebug>
#include "C:\Users\otto2\OneDrive\Tiedostot\BankSimu\BankSim100\Login_dll\DLLPinCode\dllpincode.h"
#include "C:\Users\otto2\OneDrive\Tiedostot\BankSimu\BankSim100\DLLMySql\databaseconnection.h"
#include "C:\Users\otto2\OneDrive\Tiedostot\BankSimu\BankSim100\TextToSpeechDLL\TextToSpeech\texttospeech.h"
#include "rfidthread.h"
#include "timerthread.h"
#include "uibanksim.h"
#include "uibanksimeasymode.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
   Q_OBJECT

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
    UIBankSimeasymode *objectUIBankSimEasyMode;
    int cardDisableCounter;
    TextToSpeech *objectTextToSpeech;

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
