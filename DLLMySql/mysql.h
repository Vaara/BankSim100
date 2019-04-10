#ifndef MYSQL_H
#define MYSQL_H

#endif // MYSQL_H
#include "dllmysql_global.h"
#include <QtSql>

class DLLMYSQLSHARED_EXPORT MySql : public QObject
{
    Q_OBJECT
public:
    MySql();
    ~MySql();
    void setDatabase();
    bool openDatabase();
    bool rfidExists(QString rfid);
    bool validCard(QString rfid);
    bool checkPin(QString rfid, QString inputPin);
    void closeDatabase();
    void updateLoginDatetime(QString rfid);
    bool databaseIsOpen();
    void lockCard(QString rfid);
    QString getLastLoginDatetime(QString rfid);
    bool checkAccountBalanceForWithdrawal(QString rfid, double amount);
    bool substractMoneyFromAccount(QString rfid, double amount);
    void setModelHeaders();
    QSqlQueryModel* findTransactionsOnPage(QString rfid, int perPage, int currentPage);
    QSqlQueryModel* findLastTransactions(QString rfid, int amount);
private:
    QSqlDatabase db;
    QSqlQueryModel *model;
};
