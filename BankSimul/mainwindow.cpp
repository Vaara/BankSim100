#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    objectPinCode = new DLLPinCode;
    objectRFIDThread = new RFIDThread;
    objectTimerThread = new TimerThread;

    connect(objectPinCode, SIGNAL(checkPin(QString)), this, SLOT(receivePin(QString)));
    connect(objectRFIDThread, SIGNAL(rfid(QString)), this, SLOT(receiveRFID(QString)));

    BankStart();

}


MainWindow::~MainWindow()
{

    objectRFIDThread->quit();
    objectRFIDThread->wait();
    objectTimerThread->quit();
    objectTimerThread->wait();

    delete ui;
    delete connection;
    delete objectPinCode;
    delete objectRFIDThread;
    delete objectTimerThread;

    connection = nullptr;
    objectPinCode = nullptr;
    objectRFIDThread = nullptr;
    objectTimerThread = nullptr;

}


void MainWindow::BankStart()
{

    objectRFIDThread ->start();
    objectTimerThread ->start();

}


void MainWindow::BankStop()
{
    delete connection;
    connection = nullptr;
    objectRFIDThread->quit();
    objectRFIDThread->wait();
    objectTimerThread->quit();
    objectTimerThread->wait();

    ui->labelPin->setText("");
    ui->labelRFID->setText("");
    ui->labelSQL->setText("");

    BankStart();
}


void MainWindow::receiveRFID(QString rfidReceived)
{
    ui->labelRFID->setText(rfidReceived);
    cardDisableCounter = 2;
    connection = new DatabaseConnection;

    if (connection->initialize(rfidReceived))  // "0b123456789"
    {
         objectTimerThread->TimerToggle();
         objectTimerThread->TimerReset();
         objectPinCode->rajapintaDLLPinCode(); // "1234"

    }

    else
    {
        objectTimerThread->TimerReset();
        QString error = connection->getErrorMessage();
        ui->labelSQL->setText(error);
        objectRFIDThread ->wait();
    }

    BankStop();
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


void MainWindow::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "mouseclick";
    objectTimerThread->TimerReset();
}
