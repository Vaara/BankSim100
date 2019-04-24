#ifndef UIBANKSIM_H
#define UIBANKSIM_H

#include <QWidget>
#include <QTableView>
#include <QMessageBox>
#include "C:\Users\otto2\OneDrive\Tiedostot\BankSimu\BankSim100\DLLMySql\databaseconnection.h"

namespace Ui {
class UIBankSim;
}

class UIBankSim : public QWidget
{
    Q_OBJECT

public:
    explicit UIBankSim(QWidget *parent = nullptr, DatabaseConnection *connection= nullptr);
    ~UIBankSim();
    void showTransactions();
    void showBalance();
    void withdraw(int amount);
    void buttonPress(int buttonPressed);
    void connectionError();

signals:
    void loggingOut();
    void loggingOutTimed();
    void timerReset();

private slots:
    void pageReset();
    void on_buttonBalance_clicked();
    void on_buttonWithdraw_clicked();
    void on_buttonTransactions_clicked();
    void on_buttonBackBalance_clicked();
    void on_buttonBackTransactions_clicked();
    void on_buttonBackWithdraw_clicked();

    void on_buttonLogOut_clicked();

    void on_nextPageButton_clicked();
    void on_previousPageButton_clicked();

    void on_button20_clicked();
    void on_button40_clicked();
    void on_button60_clicked();
    void on_button90_clicked();
    void on_button140_clicked();
    void on_button240_clicked();

    void on_buttonNum1_clicked();
    void on_buttonNum2_clicked();
    void on_buttonNum3_clicked();
    void on_buttonNum4_clicked();
    void on_buttonNum5_clicked();
    void on_buttonNum6_clicked();
    void on_buttonNum7_clicked();
    void on_buttonNum8_clicked();
    void on_buttonNum9_clicked();
    void on_buttonNum0_clicked();
    void on_buttonClear_clicked();
    void on_buttonBack_clicked();
    void on_buttonEnter_clicked();

    void on_buttonSyotaSumma_clicked();


    void on_navWidget_currentChanged();

private:
    Ui::UIBankSim *ui;
    QTableView *view;
    DatabaseConnection *connection;


    int currentPage;
    int pageNumber;
    int pageCount;
    double balance;
};

#endif // UIBANKSIM_H
