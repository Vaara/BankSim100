#ifndef NOSTAOMASUMMA_H
#define NOSTAOMASUMMA_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include "E:\Git\BankSim100\DLLMySql\databaseconnection.h"

namespace Ui {
class NostaOmaSumma;
}

class NostaOmaSumma : public QWidget
{
    Q_OBJECT

public:
    explicit NostaOmaSumma(QWidget *NostaRahaa);
    ~NostaOmaSumma();

public slots:
    void palaaRahanNostoon();
signals:
    void sigPalaaRahanNostoon();

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_button0_clicked();

    void on_buttonClear_clicked();

    void on_buttonBack_clicked();

    void on_buttonEnter_clicked();

private:
    Ui::NostaOmaSumma *ui;
    DatabaseConnection *connection;
    int ownWithdrawAmount;

};

#endif // NOSTAOMASUMMA_H
