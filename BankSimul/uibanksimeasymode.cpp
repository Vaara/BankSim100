#include "uibanksimeasymode.h"
#include "ui_uibanksimeasymode.h"
#include <QHeaderView>
#include <QtDebug>

UIBankSimeasymode::UIBankSimeasymode(QWidget *parent, DatabaseConnection *connection) :
    QWidget(parent),
    ui(new Ui::UIBankSimeasymode)
{
    ui->setupUi(this);
    changeColor();
    objectTextToSpeech = new TextToSpeech(this);
    ui->navWidget->setCurrentIndex(0);
    ui->lineEdit->setValidator(new QIntValidator(0, 1000, this));
    connect(this, SIGNAL(sigDialog(QString)), objectTextToSpeech, SLOT(rcvStr(QString)));
    this->connection = connection;
}

UIBankSimeasymode::~UIBankSimeasymode()
{
    delete ui;
}

void UIBankSimeasymode::connectionError()
{
    QMessageBox msgBox;
    msgBox.setText("Connection to database lost. Logging out.");
    msgBox.setStyleSheet("QLabel{min-width:450 px; font-size: 16px;} QPushButton{ width:200px; font-size: 16px; }");
    msgBox.exec();
    ui->navWidget->setCurrentIndex(0);
    emit loggingOut();
}
// MENU NAV NAPIT

void UIBankSimeasymode::on_buttonBalance_clicked()
{
    if(balanceButtonCount==0)
    {
        QString message= "Account Balance";
        emit sigDialog(message);
    }
    withdrawButtonCount=0;
    logOutCount=0;
    balanceButtonCount++;
    changeColor();
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::green);
    ui->buttonBalance->setAutoFillBackground(true);
    ui->buttonBalance->setPalette(pal);
    ui->buttonBalance->setStyleSheet("background-color:green;");
    if(balanceButtonCount==2)
    {
        resetNumbers();
        ui->navWidget->setCurrentIndex(1);
        showBalance();
    }
}

void UIBankSimeasymode::on_buttonBackBalance_clicked()
{
            resetWithdrawBack();
            if(balanceButtonBackCount==0)
            {
                QString message="Back";
                emit sigDialog(message);
            }

            balanceButtonBackCount++;
            changeColor();
            QPalette pal = palette();
            pal.setColor(QPalette::Background, Qt::green);
            ui->buttonBackBalance->setAutoFillBackground(true);
            ui->buttonBackBalance->setPalette(pal);
            ui->buttonBackBalance->setStyleSheet("background-color:green;");
            if(balanceButtonBackCount==2)
            {
                resetNumbers();
                resetWithdrawButtons();
                ui->navWidget->setCurrentIndex(0);
            }
}

void UIBankSimeasymode::on_buttonWithdraw_clicked()
{
    if(withdrawButtonCount==0)
    {
        QString message= "Withdraw";
        emit sigDialog(message);
    }
    balanceButtonCount=0;
    logOutCount=0;
    withdrawButtonCount++;
    changeColor();
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::green);
    ui->buttonWithdraw->setAutoFillBackground(true);
    ui->buttonWithdraw->setPalette(pal);
    ui->buttonWithdraw->setStyleSheet("background-color:green;");
    if(withdrawButtonCount==2)
    {
        resetNumbers();
        resetWithdrawButtons();
        ui->navWidget->setCurrentIndex(2);
    }

}
void UIBankSimeasymode::on_buttonBackWithdraw_clicked()
{
    {
        resetWithdrawBack();
        resetWithDrawAmount();
        if(withdrawButtonBackCount==0)
        {
            QString message="Back";
            emit sigDialog(message);
        }

        withdrawButtonBackCount++;
        changeColor();
        QPalette pal = palette();
        pal.setColor(QPalette::Background, Qt::green);
        ui->buttonBackWithdraw->setAutoFillBackground(true);
        ui->buttonBackWithdraw->setPalette(pal);
        ui->buttonBackWithdraw->setStyleSheet("background-color:green;");
        if(withdrawButtonBackCount==2)
        {
            resetNumbers();
            resetWithdrawButtons();
            ui->navWidget->setCurrentIndex(0);
        }

    }

}

void UIBankSimeasymode::on_buttonTransactions_clicked()
{
    QString message= "Click a button once, to hear the content. Click the button a second time, to open it.";
    emit sigDialog(message);
    logOutCount=0;
    balanceButtonCount=0;
    withdrawButtonCount=0;
    changeColor();
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::green);
    ui->buttonTransactions->setAutoFillBackground(true);
    ui->buttonTransactions->setPalette(pal);
    ui->buttonTransactions->setStyleSheet("background-color:green;");
}
void UIBankSimeasymode::on_buttonBackTransactions_clicked()
{
    ui->navWidget->setCurrentIndex(0);
}

void UIBankSimeasymode::on_buttonLogOut_clicked()
{
    {
        if(logOutCount==0)
        {
            QString message= "Do you want to log out?";
            emit sigDialog(message);
        }
        balanceButtonCount=0;
        withdrawButtonCount=0;
        logOutCount++;
        changeColor();
        QPalette pal = palette();
        pal.setColor(QPalette::Background, Qt::green);
        ui->buttonLogOut->setAutoFillBackground(true);
        ui->buttonLogOut->setPalette(pal);
        ui->buttonLogOut->setStyleSheet("background-color:green;");
        if(logOutCount==2)
        {
            resetNumbers();
            emit loggingOut();
        }

    }
}

void UIBankSimeasymode::pageReset()
{
    ui->navWidget->setCurrentIndex(0);
}

void UIBankSimeasymode::showBalance()
{

    if (connection->checkConnection() == true)
    {
        balance = connection->getCurrentBalance();
        QString balanceString;
        balanceString.setNum(balance, 'f', 2);
        ui->labelSaldo->setText(balanceString + "€");
    }

    else
    {
       connectionError();
    }
}


//WITHDRAW

void UIBankSimeasymode::withdraw(int amount)
{
    if (connection->checkConnection() == true)
    {
       if(connection->accountHasEnoughBalance(amount))
       {
           connection->withdrawMoney(amount);
           ui->navWidget->setCurrentIndex(5);                       // Tarkista toimivuus kun on netti!
           ui->labelEuroAmount->setNum(amount);                     // lisää QTimer ~ 5 sekuntia ja logout
           QString message= QString::number(amount)+"euros withdrawn, logging out";
           emit sigDialog(message);
           emit loggingOutTimed();
       }
    }

    else
    {
        connectionError();
    }

}


void UIBankSimeasymode::buttonPress(int buttonPressed)
{
    timerReset();
    ui->lineEdit->insert(QString::number(buttonPressed)); //lineEdit->insert toimii QIntValidatorin kanssa.

   /* timerReset();
    int number = ui->lineEdit->text().toInt();
    int result = number * 10 + buttonPressed;
    if(result <= 1000 && result > 0) // Nostoraja. QIntValidator ei toimi kun lineEditiin syötetään sisältö ->setTextin kautta
    {
        QString resultText = QString::number(result);
        ui->lineEdit->setText(resultText);
    }
  */
}

void UIBankSimeasymode::on_button20_clicked()
{
    {
        timerReset();
        if(buttonCount20==0)
        {
            QString message= "20€";
            emit sigDialog(message);
        }
        resetWithdrawButtons();
        buttonCount40 = 0;
        buttonCount60 = 0;
        buttonCount90 = 0;
        buttonCount140 = 0;
        buttonCount240 = 0;
        buttonCount20++;
        QPalette pal = palette();
        pal.setColor(QPalette::Background, Qt::green);
        ui->button20->setAutoFillBackground(true);
        ui->button20->setPalette(pal);
        ui->button20->setStyleSheet("background-color:green;");
        if(buttonCount20==2)
        {
        withdraw(20);      // Nostotapahtuman napit.
        }
    }
}
void UIBankSimeasymode::on_button40_clicked()
    {
        timerReset();
        if(buttonCount40==0)
        {
            QString message= "40€";
            emit sigDialog(message);
        }
        resetWithdrawButtons();
        buttonCount20 = 0;
        buttonCount60 = 0;
        buttonCount90 = 0;
        buttonCount140 = 0;
        buttonCount240 = 0;
        buttonCount40++;
        QPalette pal = palette();
        pal.setColor(QPalette::Background, Qt::green);
        ui->button40->setAutoFillBackground(true);
        ui->button40->setPalette(pal);
        ui->button40->setStyleSheet("background-color:green;");
        if(buttonCount40==2)
        {
        withdraw(40);// Nostotapahtuman napit.
        }
    }
void UIBankSimeasymode::on_button60_clicked()
{
    timerReset();
    if(buttonCount60==0)
    {
        QString message= "60€";
        emit sigDialog(message);
    }
    resetWithdrawButtons();
    buttonCount20 = 0;
    buttonCount40 = 0;
    buttonCount90 = 0;
    buttonCount140 = 0;
    buttonCount240 = 0;
    buttonCount60++;
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::green);
    ui->button60->setAutoFillBackground(true);
    ui->button60->setPalette(pal);
    ui->button60->setStyleSheet("background-color:green;");
    if(buttonCount60==2)
    {
    withdraw(60);
    }
}
void UIBankSimeasymode::on_button90_clicked()
{
    timerReset();
    if(buttonCount90==0)
    {
        QString message= "90€";
        emit sigDialog(message);
    }
    resetWithdrawButtons();
    buttonCount20 = 0;
    buttonCount40 = 0;
    buttonCount60 = 0;
    buttonCount140 = 0;
    buttonCount240 = 0;
    buttonCount90++;
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::green);
    ui->button90->setAutoFillBackground(true);
    ui->button90->setPalette(pal);
    ui->button90->setStyleSheet("background-color:green;");
    if(buttonCount90==2)
    {
    withdraw(90);
    }
}
void UIBankSimeasymode::on_button140_clicked()
{
    timerReset();
    if(buttonCount140==0)
    {
        QString message= "140€";
        emit sigDialog(message);
    }
    resetWithdrawButtons();
    buttonCount20 = 0;
    buttonCount40 = 0;
    buttonCount60 = 0;
    buttonCount90 = 0;
    buttonCount240 = 0;
    buttonCount140++;
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::green);
    ui->button140->setAutoFillBackground(true);
    ui->button140->setPalette(pal);
    ui->button140->setStyleSheet("background-color:green;");
    if(buttonCount140==2)
    {
    withdraw(140);
    }
}
void UIBankSimeasymode::on_button240_clicked()
{
    timerReset();
    if(buttonCount240==0)
    {
        QString message= "240€";
        emit sigDialog(message);
    }
    resetWithdrawButtons();
    buttonCount20 = 0;
    buttonCount40 = 0;
    buttonCount60 = 0;
    buttonCount90 = 0;
    buttonCount140 = 0;
    buttonCount240++;
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::green);
    ui->button240->setAutoFillBackground(true);
    ui->button240->setPalette(pal);
    ui->button240->setStyleSheet("background-color:green;");
    if(buttonCount240==2)
    {
    withdraw(240);
    }
}
void UIBankSimeasymode::on_navWidget_currentChanged()
{
    timerReset();
}
void UIBankSimeasymode::changeColor()
{
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    ui->buttonWithdraw->setAutoFillBackground(true);
    ui->buttonWithdraw->setPalette(pal);
    ui->buttonWithdraw->setStyleSheet("background-color:white;");
    ui->buttonLogOut->setAutoFillBackground(true);
    ui->buttonLogOut->setPalette(pal);
    ui->buttonLogOut->setStyleSheet("background-color:white;");
    ui->buttonBalance->setAutoFillBackground(true);
    ui->buttonBalance->setPalette(pal);
    ui->buttonBalance->setStyleSheet("background-color:white;");
    ui->buttonTransactions->setAutoFillBackground(true);
    ui->buttonTransactions->setPalette(pal);
    ui->buttonTransactions->setStyleSheet("background-color:white;");
}

void UIBankSimeasymode::resetNumbers()
{
    withdrawButtonCount=0;
    balanceButtonCount=0;
    logOutCount=0;
}

void UIBankSimeasymode::resetWithdrawButtons()
{
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    ui->button20->setAutoFillBackground(true);
    ui->button20->setPalette(pal);
    ui->button20->setStyleSheet("background-color:white;");
    ui->button40->setAutoFillBackground(true);
    ui->button40->setPalette(pal);
    ui->button40->setStyleSheet("background-color:white;");
    ui->button60->setAutoFillBackground(true);
    ui->button60->setPalette(pal);
    ui->button60->setStyleSheet("background-color:white;");
    ui->button90->setAutoFillBackground(true);
    ui->button90->setPalette(pal);
    ui->button90->setStyleSheet("background-color:white;");
    ui->button140->setAutoFillBackground(true);
    ui->button140->setPalette(pal);
    ui->button140->setStyleSheet("background-color:white;");
    ui->button240->setAutoFillBackground(true);
    ui->button240->setPalette(pal);
    ui->button240->setStyleSheet("background-color:white;");
    ui->buttonBackWithdraw->setAutoFillBackground(true);
    ui->buttonBackWithdraw->setPalette(pal);
    ui->buttonBackWithdraw->setStyleSheet("background-color:white;");
}

void UIBankSimeasymode::resetWithdrawBack()
{
    QPalette pal = palette();
    pal.setColor(QPalette::Background, Qt::white);
    ui->button20->setAutoFillBackground(true);
    ui->button20->setPalette(pal);
    ui->button20->setStyleSheet("background-color:white;");
    ui->button40->setAutoFillBackground(true);
    ui->button40->setPalette(pal);
    ui->button40->setStyleSheet("background-color:white;");
    ui->button60->setAutoFillBackground(true);
    ui->button60->setPalette(pal);
    ui->button60->setStyleSheet("background-color:white;");
    ui->button90->setAutoFillBackground(true);
    ui->button90->setPalette(pal);
    ui->button90->setStyleSheet("background-color:white;");
    ui->button140->setAutoFillBackground(true);
    ui->button140->setPalette(pal);
    ui->button140->setStyleSheet("background-color:white;");
    ui->button240->setAutoFillBackground(true);
    ui->button240->setPalette(pal);
    ui->button240->setStyleSheet("background-color:white;");
}

void UIBankSimeasymode::resetWithDrawAmount()
{
    buttonCount20 = 0;
    buttonCount40 = 0;
    buttonCount60 = 0;
    buttonCount90 = 0;
    buttonCount140 = 0;
    buttonCount240 = 0;
}
