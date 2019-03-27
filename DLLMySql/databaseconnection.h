#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include "dllmysql_global.h"
#include "mysql.h"

class DLLMYSQLSHARED_EXPORT DatabaseConnection
{
public:
    DatabaseConnection();
    ~DatabaseConnection();
    bool initialize(QString rfid);
    QString getErrorMessage();
    bool checkPin(QString pin);
private:
    MySql *mySql;
    QString rfid;
    QString errorMessage;
};

#endif // DATABASECONNECTION_H
