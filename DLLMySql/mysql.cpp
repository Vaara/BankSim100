#include "mysql.h"

void MySql::setDatabase()
{
    db = QSqlDatabase::addDatabase("QMYSQL","bankDB");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t8josa01");
    db.setUserName("t8josa01");
    db.setPassword("7ZaANCZsCM56En5d");
}

bool MySql::openDatabase()
{
    setDatabase();
    return db.open();
}

bool MySql::rfidExists(QString rfid)
{
    QSqlQuery query(db);
    query.setForwardOnly(true);
    query.exec("SELECT idCard FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid +"'");
    query.next();
    if (query.value(0).isNull()) {
        return false;
    }
    return true;
}

bool MySql::validCard(QString rfid)
{
    QSqlQuery query(db);
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

bool MySql::checkPin(QString rfid, QString inputPin)
{
    QSqlQuery query(db);
    query.exec("SELECT cardPin FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid +"'");
    query.next();
    QString accountPin = query.value(0).toString();
    if (inputPin == accountPin)
    {
        return true;
    }
    return false;
}

void MySql::closeDatabase()
{
    db.close();
}
