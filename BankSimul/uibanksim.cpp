#include "uibanksim.h"
#include "ui_uibanksim.h"
#include <QHeaderView>

UIBankSim::UIBankSim(QWidget *parent, DatabaseConnection *connection) :
    QWidget(parent),
    ui(new Ui::UIBankSim)
{
    ui->setupUi(this);
    ui->navWidget->setCurrentIndex(0);
    ui->lineEdit->setValidator(new QIntValidator(0, 1000, this));
    this->connection = connection;
}

UIBankSim::~UIBankSim()
{
    delete ui;
}

void UIBankSim::connectionError()
{
    QMessageBox msgBox;
    msgBox.setText("Connection to database lost. Logging out.");
    msgBox.setStyleSheet("QLabel{min-width:450 px; font-size: 16px;} QPushButton{ width:200px; font-size: 16px; }");
    msgBox.exec();
    ui->navWidget->setCurrentIndex(0);
    emit loggingOut();
}
// MENU NAV NAPIT

void UIBankSim::on_buttonBalance_clicked()
{
    ui->navWidget->setCurrentIndex(1);
    showBalance();
}
void UIBankSim::on_buttonBackBalance_clicked()
{
    ui->navWidget->setCurrentIndex(0);
}

void UIBankSim::on_buttonWithdraw_clicked()
{
    ui->navWidget->setCurrentIndex(2);
}
void UIBankSim::on_buttonBackWithdraw_clicked()
{
    ui->navWidget->setCurrentIndex(0);
}

void UIBankSim::on_buttonTransactions_clicked()
{
    ui->navWidget->setCurrentIndex(4);
    showTransactions();
}
void UIBankSim::on_buttonBackTransactions_clicked()
{
    ui->navWidget->setCurrentIndex(0);
}

void UIBankSim::on_buttonLogOut_clicked()
{
    emit loggingOut();
}

void UIBankSim::pageReset()
{
    ui->navWidget->setCurrentIndex(0);
}


// TRANSACTIONS

void UIBankSim::showTransactions()
{
   if (connection->checkConnection() == true)
   {
       pageNumber = 1;
       currentPage = 0;

       pageCount = connection->getTransactionPageCount(12);
       ui->labelLastLogin->setText(connection->getLastLogin());

       balance = connection->getCurrentBalance();
       QString balanceString;
       balanceString.setNum(balance, 'f', 2);
       ui->labelBalance->setText(balanceString + "€");

       ui->labelPageNumber->setText(QString::number(pageNumber));
       view = new QTableView(ui->widgetTransaction);
       QSqlQueryModel *model = connection->getTransactionModelFromPage(12, currentPage);

       view->setModel(model);
       view->setWindowTitle("Tilitapahtumat");
       view->resize(700,600);
       view->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
       view->show();

       if (currentPage == 0)
       {
           ui->previousPageButton->setDisabled(true);
       }
   }

   else
   {
       connectionError();
   }
}


void UIBankSim::on_nextPageButton_clicked()
{
    currentPage = currentPage + 1;
    pageNumber = pageNumber + 1;

    ui->labelPageNumber->setText(QString::number(pageNumber));
    view->hide();
    QSqlQueryModel *model = connection->getTransactionModelFromPage(12, currentPage);
    view->setModel(model);
    model->rowCount();
    view->show();
    ui->previousPageButton->setEnabled(true);

    if(currentPage + 1 >= pageCount)
    {
        ui->nextPageButton->setDisabled(true);
    }
}

void UIBankSim::on_previousPageButton_clicked()
{
    currentPage = currentPage - 1;
    pageNumber = pageNumber - 1;

    ui->labelPageNumber->setText(QString::number(pageNumber));
    view->hide();
    QSqlQueryModel *model = connection->getTransactionModelFromPage(12, currentPage);
    view->setModel(model);
    model->rowCount();
    view->show();
    ui->nextPageButton->setEnabled(true);

    if(currentPage == 0)
    {
        ui->previousPageButton->setDisabled(true);
    }

    else
    {
        ui->previousPageButton->setEnabled(true);
    }
}


// BALANCE

void UIBankSim::showBalance()
{

    if (connection->checkConnection() == true)
    {
        balance = connection->getCurrentBalance();
        view = new QTableView(ui->widgetBalance);
        QSqlQueryModel *model = connection->getTransactionModelFromPage(5, 0);

        ui->labelOwner->setText(connection->getOwnerName());
        QString balanceString;
        balanceString.setNum(balance, 'f', 2);
        ui->labelSaldo->setText(balanceString + "€");


        view->setModel(model);
        view->setWindowTitle("Tilitapahtumat");
        model->rowCount();
        view->show();
        view->resize(700,400);


    }

    else
    {
       connectionError();
    }
}


//WITHDRAW

void UIBankSim::withdraw(int amount)
{
    timerReset();
    if (connection->checkConnection() == true)
    {
       if(connection->accountHasEnoughBalance(amount))
       {
           connection->withdrawMoney(amount);
           ui->navWidget->setCurrentIndex(5);                       // Tarkista toimivuus kun on netti!
           ui->labelEuroAmount->setNum(amount);                     // lisää QTimer ~ 5 sekuntia ja logout
           emit loggingOutTimed();
       }
    }

    else
    {
        connectionError();
    }

}


void UIBankSim::buttonPress(int buttonPressed)
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

void UIBankSim::on_button20_clicked(){withdraw(20);}        // Nostotapahtuman napit.
void UIBankSim::on_button40_clicked(){withdraw(40);}
void UIBankSim::on_button60_clicked(){withdraw(60);}
void UIBankSim::on_button90_clicked(){withdraw(90);}
void UIBankSim::on_button140_clicked(){withdraw(140);}
void UIBankSim::on_button240_clicked(){withdraw(240);}

void UIBankSim::on_buttonNum1_clicked(){buttonPress(1);}    // napit 0-9, kutsuvat funktiota buttonPress() omalla arvollaan
void UIBankSim::on_buttonNum2_clicked(){buttonPress(2);}
void UIBankSim::on_buttonNum3_clicked(){buttonPress(3);}
void UIBankSim::on_buttonNum4_clicked(){buttonPress(4);}
void UIBankSim::on_buttonNum5_clicked(){buttonPress(5);}
void UIBankSim::on_buttonNum6_clicked(){buttonPress(6);}
void UIBankSim::on_buttonNum7_clicked(){buttonPress(7);}
void UIBankSim::on_buttonNum8_clicked(){buttonPress(8);}
void UIBankSim::on_buttonNum9_clicked(){buttonPress(9);}
void UIBankSim::on_buttonNum0_clicked(){buttonPress(0);}
void UIBankSim::on_buttonClear_clicked(){ui->lineEdit->clear();}


void UIBankSim::on_buttonBack_clicked() //takaisin -nappi
{
    ui->navWidget->setCurrentIndex(0);
}


void UIBankSim::on_buttonSyotaSumma_clicked()
{
    ui->navWidget->setCurrentIndex(3);
}


void UIBankSim::on_buttonEnter_clicked()
{
    int withdrawAmount=ui->lineEdit->text().toInt();
    if(withdrawAmount <= 1000)
    {
        withdraw(withdrawAmount);
    }
}


void UIBankSim::on_navWidget_currentChanged()
{
    timerReset();
}
