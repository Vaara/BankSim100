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

void MySql::updateLoginDatetime(QString rfid)
{
    QSqlQuery query(db);
    query.exec("START TRANSACTION");
    query.exec("SELECT newLogin FROM opisk_t8josa01.Accounts WHERE idAccount="
               "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid  + "')");
    query.next();
    QString lastLogin = query.value(0).toDateTime().toString("yyyy-MM-dd hh:mm:ss");
    query.exec("UPDATE opisk_t8josa01.Accounts SET lastLogin='" + lastLogin +"' WHERE idAccount="
               "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid + "')");
    QString newLogin = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    query.exec("UPDATE opisk_t8josa01.Accounts SET newLogin='" + newLogin +"' WHERE idAccount="
               "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid + "')");
    query.exec("COMMIT");

}

QString MySql::getCurrentLoginDatetime(QString rfid)
{
    QSqlQuery query(db);
    query.exec("SELECT newLogin FROM opisk_t8josa01.Accounts WHERE idAccount="
               "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid  + "')");
    query.next();
    return query.value(0).toDateTime().toString("yyyy-MM-dd hh:mm:ss");
}

QString MySql::getLastLoginDatetime(QString rfid)
{
    QSqlQuery query(db);
    query.exec("SELECT lastLogin FROM opisk_t8josa01.Accounts WHERE idAccount="
               "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid  + "')");
    query.next();
    return query.value(0).toDateTime().toString("yyyy-MM-dd hh:mm:ss");
}

bool MySql::databaseIsOpen()
{
    return db.isOpen();
}

void MySql::lockCard(QString rfid)
{
    QSqlQuery query(db);
    query.exec("UPDATE opisk_t8josa01.Cards SET valid=0 WHERE rfidNumber ='" + rfid + "'");
}

bool MySql::checkAccountBalanceForWithdrawal(QString rfid, double balance)
{
    QSqlQuery query(db);
    query.exec("SELECT balance FROM opisk_t8josa01.Accounts WHERE idAccount="
               "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid + "')");
    query.next();
    double accountBalance = query.value(0).toDouble();
    return accountBalance >= balance;
}

bool MySql::substractMoneyFromAccount(QString rfid, double balance)
{
    QSqlQuery query(db);
    query.exec("START TRANSACTION");
    query.exec("SELECT balance FROM opisk_t8josa01.Accounts WHERE idAccount="
               "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid + "')");
    query.next();
    double accountBalance = query.value(0).toDouble() - balance;
    QString newBalance = QString::number(accountBalance);
    query.exec("UPDATE opisk_t8josa01.Accounts SET balance='" + newBalance + "' WHERE idAccount="
               "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid + "')");                                                                                         // Create transaction here
    query.exec("SELECT balance FROM opisk_t8josa01.Accounts WHERE idAccount="
               "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid + "')");
    query.next();
    double checkedBalance = query.value(0).toDouble();

    if (checkedBalance >= 0)
    {
        query.exec("COMMIT");
        query.finish();
        return true;
    }
    query.exec("ROLLBACK");
    query.finish();
    return false;
}
