#ifndef TILINSALDO_H
#define TILINSALDO_H

#include <QDialog>
#include <QWidget>
#include <QTableView>
#include <QMessageBox>
#include <tgmath.h>

#include "E:\Git\BankSim100\DLLMySql\databaseconnection.h"


namespace Ui {
class TilinSaldo;
}

class TilinSaldo : public QWidget
{
    Q_OBJECT

public:
    explicit TilinSaldo(QWidget *MainMenu);
    ~TilinSaldo();
    void showTransactions();

signals:
    void sigPalaaTakaisin();

public slots:
    void takaisin();

private slots:
    void on_buttonKirjauduUlos_clicked();

private:
    Ui::TilinSaldo *ui;
    QTableView *view;
    DatabaseConnection *connection;
    double balance;

};

#endif // TILINSALDO_H
