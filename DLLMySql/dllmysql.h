#ifndef DLLMYSQL_H
#define DLLMYSQL_H

<<<<<<< HEAD
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
    bool checkPIN(QString rfid, QString inputPin);
private:
    QSqlDatabase db;
};

=======
>>>>>>> master
#endif // DLLMYSQL_H
