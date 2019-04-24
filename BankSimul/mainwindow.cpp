#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    objectPinCode = new DLLPinCode;
    objectTimerThread = new TimerThread;
    objectRFIDThread = new RFIDThread;
    objectTextToSpeech = new TextToSpeech;

    connect(objectRFIDThread, SIGNAL(rfid(QString)), this, SLOT(receiveRFID(QString)));
                                                                                        //connect(objectRFIDThread, SIGNAL(finished()), this, SLOT(receiveRFID()))
    connect(objectTimerThread, SIGNAL(timeOut()), this, SLOT(bankStop()));
    connect(objectPinCode, SIGNAL(checkPin(QString)), this, SLOT(receivePin(QString)));
    RFIDThread *objectRFIDThread = new RFIDThread;
    connect(objectRFIDThread, &RFIDThread::rfid, this, &MainWindow::receiveRFID);
    connect(objectRFIDThread, &RFIDThread::finished, objectRFIDThread, &QObject::deleteLater);
    objectUIBankSim = nullptr;
    objectUIBankSimEasyMode = nullptr;
    bankStart();
}


MainWindow::~MainWindow()
{
    objectRFIDThread->quit();
    delete objectRFIDThread;
    objectRFIDThread = nullptr;

    objectTimerThread->quit();
    delete objectTimerThread;
    objectTimerThread = nullptr;

    delete connection;
    connection = nullptr;

    qDebug() << "~MainWindow 1";

    delete objectPinCode;
    objectPinCode = nullptr;
    delete ui;

    //delete objectUIBankSim;
    //objectUIBankSim = nullptr;  aiheuttaa vaikeuksia, ohjelma kaatuu jos objectUIBankSimin poistaa jos sitä ei ole luotu
    qDebug() << "~MainWindow 2";
}


void MainWindow::bankStart()
{ 
    ui->stackedWidget->setCurrentIndex(0);

    ui->titleRFID->show();
    connection = new DatabaseConnection;

    objectRFIDThread->start();
}


void MainWindow::bankStop()
{
    pageResetting();
    deleteUIBankSim();
    objectTimerThread->timerStop(); // pitää olla tässä tai ohjelma kaatuu logout-napilla objectUIBankSim oliossa

    delete connection;
    connection = nullptr;

    ui->labelMessage->setText(""); // testaa clear();

    bankStart();
}


void MainWindow::receiveRFID(QString rfidReceived)
{
    cardDisableCounter = 2;

    if (connection->initialize(rfidReceived))  // "0b123456789"
    //(connection->initialize(rfidReceived))
    //(rfidReceived == "0B003256BD")
    {

         if(objectPinCode->rajapintaDLLPinCode()==1)
         {
             if(connection->easyModeIsOn())
             {
                 qDebug()<<"easymode is on";
                 objectUIBankSimEasyMode = new UIBankSimeasymode(this,connection);
                 ui->stackedWidget->addWidget(objectUIBankSimEasyMode);
                 connect(objectUIBankSimEasyMode, SIGNAL(loggingOut()), this, SLOT(bankStop()));
                 connect(objectUIBankSimEasyMode, SIGNAL(timerReset()), this, SLOT(idleTimerReset()));
                 connect(objectUIBankSimEasyMode, SIGNAL(loggingOutTimed()), this, SLOT(logoutTimer()));
                 connect(this, SIGNAL(pageResetting()), objectUIBankSim, SLOT(pageReset()));
                 //objectUIBankSim->deleteLater();
                 ui->stackedWidget->setCurrentIndex(1);
                 objectTimerThread->timerStart();
             }
             else {
             objectUIBankSim = new UIBankSim(this,connection);
             ui->stackedWidget->addWidget(objectUIBankSim);
             connect(objectUIBankSim, SIGNAL(loggingOut()), this, SLOT(bankStop()));
             connect(objectUIBankSim, SIGNAL(timerReset()), this, SLOT(idleTimerReset()));
             connect(objectUIBankSim, SIGNAL(loggingOutTimed()), this, SLOT(logoutTimer()));
             connect(this, SIGNAL(pageResetting()), objectUIBankSim, SLOT(pageReset()));
             //objectUIBankSim->deleteLater();
             ui->stackedWidget->setCurrentIndex(1);
             objectTimerThread->timerStart();
             }
         }

         else
         {

             if(cardDisableCounter ==0) // Jos kortti on lukittu, 10 sekunnin timer jotta käyttäjällä on aikaa lukea viesti. Sitten bankStop().
             {
                 objectTimerThread->timerStart(10);
                 ui->titleRFID->hide();
             }

             else
             {
                bankStop();
             }
         }
    }

    else
    {
        //QString error = connection->getErrorMessage();
        ui->labelMessage->setText("Invalid card."); //ui->labelSQL->setText(error);
        objectTimerThread->timerStart(10);
        ui->titleRFID->hide();
    }
}


void MainWindow::receivePin(QString pinReceived)
{

    if (connection->checkPin(pinReceived))
        //(connection->checkPin(pinReceived))
        //(pinReceived == "1234")
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
        objectPinCode->deliverPinStatus(false);
        //connection->lockCard(); // kolmannella kerralla kortti tietokannassa lukkoon.
        ui->labelMessage->setText("Card has been locked. Contact your bank for further assistance");
        }
    }

}


void MainWindow::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "mouseclick";
    idleTimerReset();
}


void MainWindow::idleTimerReset()
{
    objectTimerThread->timerReset();
}


void MainWindow::logoutTimer()
{
    objectTimerThread->timerStart(5);
}


void MainWindow::deleteUIBankSim()
{
    if(objectUIBankSim != nullptr)
    {
    delete objectUIBankSim;
    objectUIBankSim = nullptr;
    }
    if(objectUIBankSimEasyMode !=nullptr)
    {
        delete objectUIBankSimEasyMode;
        objectUIBankSimEasyMode = nullptr;
    }
}

