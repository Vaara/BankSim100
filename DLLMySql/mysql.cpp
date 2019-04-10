#include "mysql.h"
#include <QDebug>

MySql::MySql()
{
    model = nullptr;
}

MySql::~MySql()
{
    delete model;
    model = nullptr;
}

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
    query.setForwardOnly(true);
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
    query.setForwardOnly(true);
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

QString MySql::getLastLoginDatetime(QString rfid)
{
    QSqlQuery query(db);
    query.setForwardOnly(true);
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

bool MySql::checkAccountBalanceForWithdrawal(QString rfid, double amount)
{
    QSqlQuery query(db);
    query.exec("SELECT balance FROM opisk_t8josa01.Accounts WHERE idAccount="
               "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid + "')");
    query.next();
    double accountBalance = query.value(0).toDouble();
    return accountBalance >= amount;
}

bool MySql::substractMoneyFromAccount(QString rfid, double amount)
{
    QSqlQuery query(db);
    query.exec("START TRANSACTION");
    query.exec("SELECT balance, idAccount FROM opisk_t8josa01.Accounts WHERE idAccount="
               "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid + "')");
    query.next();
    double accountBalance = query.value(0).toDouble() - amount;
    QString newBalance = QString::number(accountBalance);
    QString ownerAccount = query.value(1).toString();
    query.exec("UPDATE opisk_t8josa01.Accounts SET balance='" + newBalance + "' WHERE idAccount="
               "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid + "')");
    QString newTransactionValue = QString::number(-amount);
    QString timeNow = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    query.exec("INSERT INTO opisk_t8josa01.Transactions (idAccount, tDate, tAccount, tAmount, tName)"
               "VALUES ('" + ownerAccount + "', '" + timeNow + "', 'FI3344556677889900', '" + newTransactionValue + "', 'Käteisnosto')");
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

void MySql::setModelHeaders()
{
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Päiväys"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Toisen tili"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Tapahtuma"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Määrä"));
}

QSqlQueryModel* MySql::findTransactionsOnPage(QString rfid, int perPage, int currentPage)
{
    if (model != nullptr)
    {
        delete model;
    }
    model = new QSqlQueryModel(this);
    QString offset = QString::number(perPage * currentPage);
    model->setQuery("SELECT tDate, tAccount, tName, tAmount FROM opisk_t8josa01.Transactions WHERE idAccount="
                    "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid + "')"
                    "LIMIT " + QString::number(perPage) + " OFFSET " + offset, db);
    setModelHeaders();
    return model;
}

QSqlQueryModel* MySql::findLastTransactions(QString rfid, int amount) {
    if (model != nullptr)
    {
        delete model;
    }
    model = new QSqlQueryModel(this);
    model->setQuery("SELECT tDate, tAccount, tName, tAmount FROM opisk_t8josa01.Transactions WHERE idAccount="
                    "(SELECT idAccount FROM opisk_t8josa01.Cards WHERE rfidNumber ='" + rfid + "')"
                    "DESC LIMIT " + QString::number(amount), db);
    setModelHeaders();
    return model;
}
