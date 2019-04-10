#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    objectPinCode = new DLLPinCode;
    objectRFIDThread = new RFIDThread;
    objectRFIDThread ->start();

    connect(objectPinCode, SIGNAL(checkPin(QString)), this, SLOT(receivePin(QString)));
    connect(objectRFIDThread, SIGNAL(rfid(QString)), this, SLOT(receiveRFID(QString)));
}


MainWindow::~MainWindow()
{
    delete ui;

    delete objectPinCode;
    delete connection;
    delete objectRFIDThread;

    objectPinCode = nullptr;
    connection = nullptr;
    objectRFIDThread = nullptr;


}

void MainWindow::listenRFID()
{   
// vanha
}

void MainWindow::receiveRFID(QString rfidReceived)
{
    cardDisableCounter = 2;
    connection = new DatabaseConnection;

    if (connection->initialize(rfidReceived))  // "0b123456789"
    {
         objectPinCode->rajapintaDLLPinCode(); // "1234"

    }

    else
    {
        QString error = connection->getErrorMessage();
        ui->labelRFID->setText(error);
        objectRFIDThread ->wait();
    }

delete connection;
connection = nullptr;
objectRFIDThread ->start();
}


void MainWindow::receivePin(QString pinReceived)
{
    ui->labelPin->setText(pinReceived);

    if(connection->checkPin(pinReceived))
    {
        objectPinCode->deliverPinStatus(true);
    }
    else
    {
        if(cardDisableCounter != 0)
        {
        objectPinCode->deliverPinStatus(false);
        cardDisableCounter--;
        }
        else
        {
        //connection->lockCard(); // kolmannella kerralla kortti tietokannassa lukkoon.
        ui->labelPin->setText("Kortti lukittu");
        }
    }

}
