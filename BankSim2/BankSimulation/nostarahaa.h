#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QDialog>
#include <QWidget>
#include <QMessageBox>
#include "nostaomasumma.h"
#include "E:\Git\BankSim100\DLLMySql\databaseconnection.h"

namespace Ui {
class NostaRahaa;
}

class NostaRahaa : public QWidget
{
    Q_OBJECT

public:
    explicit NostaRahaa(QWidget *MainMenu);
    ~NostaRahaa();
    void withdrawMoney();
signals:
    void sigPalaaTakaisin();



private slots:
    void on_buttonSyotaSumma_clicked();

    void on_buttonPalaaAlkuun_clicked();

    void on_buttonNosta20_clicked();

    void on_buttonNosta40_clicked();

    void on_buttonNosta60_clicked();

    void on_buttonNosta90_clicked();

    void on_buttonNosta140_clicked();

    void on_buttonNosta240_clicked();

public slots:
    void takaisin();
    void sloPalaaRahanNostoon(); //palataan oman summan syötöstä takaisin rahan noston päänäkymään

private:
    Ui::NostaRahaa *ui;
    NostaOmaSumma *objectNostaOmaSumma;
    DatabaseConnection *connection;
    int withdrawAmount;

};

#endif // NOSTARAHAA_H
