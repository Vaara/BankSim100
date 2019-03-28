#ifndef MYSQL_H
#define MYSQL_H

#endif // MYSQL_H
#include "dllmysql_global.h"
#include <QtSql>

class DLLMYSQLSHARED_EXPORT MySql
{
public:
    void setDatabase();
    bool openDatabase();
    bool rfidExists(QString rfid);
    bool validCard(QString rfid);
    bool checkPin(QString rfid, QString inputPin);
    void closeDatabase();
private:
    QSqlDatabase db;
};
