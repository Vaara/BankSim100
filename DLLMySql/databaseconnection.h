#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include "dllmysql_global.h"
#include "mysql.h"

class DLLMYSQLSHARED_EXPORT DatabaseConnection : public QObject
{
    Q_OBJECT
public:
    DatabaseConnection();
    ~DatabaseConnection();
    bool initialize(QString rfid);
    QString getErrorMessage();
    bool checkPin(QString pin);
    QString getLastLogin();
    bool checkConnection();
    void lockCard();
    bool accountHasEnoughBalance(double balance);
    bool withdrawMoney(double amount);
    QSqlQueryModel* getTransactionModelFromPage(int perPage, int currentPage);
    QSqlQueryModel* getLastTransactions(int amount);
private:
    MySql *mySql;
    QString rfid;
    QString errorMessage;
};

#endif // DATABASECONNECTION_H
