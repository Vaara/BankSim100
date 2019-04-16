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
    bool checkPin(QString pin);
    bool easyModeIsOn();
    QString getErrorMessage();
    bool accountHasEnoughBalance(double balance);
    double getCurrentBalance();
    QString getLastLogin();
    QString getOwnerName();
    QSqlQueryModel* getTransactionModelFromPage(int perPage, int currentPage);
    int getTransactionPageCount(int perPage);
    bool checkConnection();
    void lockCard();
    bool withdrawMoney(double amount);

private:
    MySql *mySql;
    QString rfid;
    QString errorMessage;
};

#endif // DATABASECONNECTION_H
