#ifndef UIBANKSIMEASYMODE_H
#define UIBANKSIMEASYMODE_H

#include <QWidget>
#include <QTableView>
#include <QMessageBox>
#include "C:\Users\otto2\OneDrive\Tiedostot\BankSimu\BankSim100\DLLMySql\databaseconnection.h"
#include "C:\Users\otto2\OneDrive\Tiedostot\BankSimu\BankSim100\TextToSpeechDLL\TextToSpeech\texttospeech.h"
#include <QtDebug>

namespace Ui {
class UIBankSimeasymode;
}

class UIBankSimeasymode : public QWidget
{
    Q_OBJECT

public:
    explicit UIBankSimeasymode(QWidget *parent = nullptr, DatabaseConnection *connection= nullptr);
    ~UIBankSimeasymode();
    void showTransactions();
    void showBalance();
    void withdraw(int amount);
    void buttonPress(int buttonPressed);
    void connectionError();
    void changeColor();
    void resetNumbers();
    void resetWithdrawButtons();
    void resetWithdrawBack();
    void resetWithDrawAmount();
    int balanceButtonCount = 0;
    int withdrawButtonCount = 0;
    int balanceButtonBackCount = 0;
    int withdrawButtonBackCount = 0;
    int logOutCount = 0;
    int buttonCount20 = 0;
    int buttonCount40 = 0;
    int buttonCount60 = 0;
    int buttonCount90 = 0;
    int buttonCount140 = 0;
    int buttonCount240 = 0;
signals:
    void loggingOut();
    void loggingOutTimed();
    void timerReset();
    void sigDialog(QString message);

private slots:
    void pageReset();
    void on_buttonBalance_clicked();
    void on_buttonWithdraw_clicked();
    void on_buttonTransactions_clicked();
    void on_buttonBackBalance_clicked();
    void on_buttonBackTransactions_clicked();
    void on_buttonBackWithdraw_clicked();
    void on_buttonLogOut_clicked();
    void on_button20_clicked();
    void on_button40_clicked();
    void on_button60_clicked();
    void on_button90_clicked();
    void on_button140_clicked();
    void on_button240_clicked();
    void on_navWidget_currentChanged();

private:
    Ui::UIBankSimeasymode *ui;
    DatabaseConnection *connection;
    TextToSpeech *objectTextToSpeech;
    double balance;
};

#endif // UIBANKSIMEASYMODE_H
