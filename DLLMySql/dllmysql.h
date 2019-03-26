#ifndef DLLMYSQL_H
#define DLLMYSQL_H

#include "dllmysql_global.h"
#include <QtSql>
#include <QDate>

class DLLMYSQLSHARED_EXPORT DLLMySql
{

public:
    void setDatabase();
    bool openDatabase();
    bool rfidExists(QString rfid);
    bool validCard(QString rfid);
private:
    QSqlDatabase db;
};

#endif // DLLMYSQL_H
