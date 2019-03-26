#include "dllmysql.h"

void DLLMySql::setDatabase()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t8josa01");
    db.setUserName("t8josa01");
    db.setPassword("7ZaANCZsCM56En5d");
}

bool DLLMySql::openDatabase()
{
    setDatabase();
    return db.open();
}

bool DLLMySql::rfidExists(QString rfid)
{
    QSqlQuery query;
    query.exec("SELECT idCard FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid +"'");
    query.next();
    if (query.value(0).isNull()) {
        return false;
    }
    return true;
}

bool DLLMySql::validCard(QString rfid)
{
    QSqlQuery query;
    query.exec("SELECT expiration, valid FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid +"'");
    query.next();
    QDate today = QDate::currentDate();
    QDate expiration = query.value(0).toDate();
    int validCard = query.value(1).toInt();
    qint64 daysLeft = today.daysTo(expiration);
    if (daysLeft >= 0 && validCard == 1 ) {
        return true;
    }
    return false;
}
