#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QDialog>
#include <QTableView>
#include <QScrollArea>
#include <QMessageBox>
#include "E:\Git\BankSim100\DLLMySql\databaseconnection.h"


namespace Ui {
class Tilitapahtumat;
}

class Tilitapahtumat : public QWidget
{
    Q_OBJECT

public:
    explicit Tilitapahtumat(QWidget *MainMenu);
    ~Tilitapahtumat();

signals:
    void sigPalaaTakaisin();

public slots:
    void takaisin();

private slots:
    void on_buttonKirjauduUlos_clicked();

    void on_pushButton_clicked();

    void on_nextPageButton_clicked();

    void on_previousPageButton_clicked();

private:
    Ui::Tilitapahtumat *ui;
    DatabaseConnection *connection;
    QTableView *view;

    int currentPage;
    int pageNumber;
    int pageCount;
    double balance;

};
#endif // TILITAPAHTUMAT_H
