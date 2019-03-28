#include "databaseconnection.h"

DatabaseConnection::DatabaseConnection()
{
    mySql = new MySql;
}

DatabaseConnection::~DatabaseConnection()
{
    mySql->closeDatabase();
    delete mySql;
    mySql = nullptr;
    QSqlDatabase::removeDatabase("bankDB");
}

bool DatabaseConnection::initialize(QString rfid)
{
    if (mySql->openDatabase())
    {
        //Connected to database
        if (mySql->rfidExists(rfid))
        {
            //Card found in database
            if (mySql->validCard(rfid))
            {
                //Card is valid
                this->rfid = rfid;
                return true;
            }
            else
            {
                this->errorMessage = "Card is expired or closed";
                return false;
            }
        }
        else
        {
            this->errorMessage = "Card not found in database";
            return false;
        }
    }
    else
    {
        this->errorMessage = "Connection to database failed to initialize";
        return false;
    }
}

QString DatabaseConnection::getErrorMessage()
{
    return this->errorMessage;
}

bool DatabaseConnection::checkPin(QString pin)
{
    return mySql->checkPin(rfid, pin);
}