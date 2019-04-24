/********************************************************************************
** Form generated from reading UI file 'uibanksimeasymode.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIBANKSIMEASYMODE_H
#define UI_UIBANKSIMEASYMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIBankSimeasymode
{
public:
    QStackedWidget *navWidget;
    QWidget *Nav;
    QGroupBox *groupBoxNav;
    QPushButton *buttonWithdraw;
    QPushButton *buttonLogOut;
    QPushButton *buttonBalance;
    QLabel *labelATM;
    QPushButton *buttonTransactions;
    QWidget *Balance;
    QGroupBox *groupBoxBalance;
    QLabel *labelTitleAccountBalance;
    QLabel *labelTitleSaldo;
    QPushButton *buttonBackBalance;
    QLabel *labelSaldo;
    QWidget *Withdraw;
    QGroupBox *groupBoxWithdraw;
    QPushButton *button240;
    QLabel *label_2;
    QPushButton *button140;
    QLabel *label;
    QPushButton *button20;
    QPushButton *button60;
    QPushButton *buttonBackWithdraw;
    QPushButton *button40;
    QPushButton *button90;
    QWidget *withdrawCustom;
    QGroupBox *groupBoxWithdrawCustom;
    QPushButton *buttonNum1;
    QPushButton *buttonNum9;
    QPushButton *buttonNum2;
    QPushButton *buttonNum6;
    QPushButton *buttonClear;
    QPushButton *buttonNum5;
    QPushButton *buttonNum0;
    QLineEdit *lineEdit;
    QPushButton *buttonEnter;
    QPushButton *buttonNum8;
    QPushButton *buttonBack;
    QPushButton *buttonNum4;
    QPushButton *buttonNum7;
    QPushButton *buttonNum3;
    QLabel *labelTitleCustomAmount;
    QWidget *Transactions;
    QGroupBox *groupBoxTransactions;
    QLabel *LabelTitleLastLogin;
    QLabel *labelPageNumber;
    QLabel *labelLastLogin;
    QPushButton *previousPageButton;
    QWidget *widgetTransaction;
    QPushButton *buttonBackTransactions;
    QLabel *labelBalance;
    QLabel *labelTitleBalance;
    QLabel *label_4;
    QPushButton *nextPageButton;
    QWidget *withdrawDone;
    QGroupBox *groupBoxWithdrawDone;
    QLabel *labelEuroTitle;
    QLabel *labelEuroAmount;
    QLabel *label_3;

    void setupUi(QWidget *UIBankSimeasymode)
    {
        if (UIBankSimeasymode->objectName().isEmpty())
            UIBankSimeasymode->setObjectName(QString::fromUtf8("UIBankSimeasymode"));
        UIBankSimeasymode->resize(1920, 1080);
        navWidget = new QStackedWidget(UIBankSimeasymode);
        navWidget->setObjectName(QString::fromUtf8("navWidget"));
        navWidget->setGeometry(QRect(0, 0, 1881, 1041));
        navWidget->setLayoutDirection(Qt::LeftToRight);
        navWidget->setFrameShape(QFrame::NoFrame);
        Nav = new QWidget();
        Nav->setObjectName(QString::fromUtf8("Nav"));
        groupBoxNav = new QGroupBox(Nav);
        groupBoxNav->setObjectName(QString::fromUtf8("groupBoxNav"));
        groupBoxNav->setGeometry(QRect(19, 19, 1841, 1001));
        buttonWithdraw = new QPushButton(groupBoxNav);
        buttonWithdraw->setObjectName(QString::fromUtf8("buttonWithdraw"));
        buttonWithdraw->setGeometry(QRect(1120, 150, 600, 200));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        font.setWeight(75);
        buttonWithdraw->setFont(font);
        buttonLogOut = new QPushButton(groupBoxNav);
        buttonLogOut->setObjectName(QString::fromUtf8("buttonLogOut"));
        buttonLogOut->setGeometry(QRect(1120, 410, 600, 200));
        buttonLogOut->setFont(font);
        buttonBalance = new QPushButton(groupBoxNav);
        buttonBalance->setObjectName(QString::fromUtf8("buttonBalance"));
        buttonBalance->setGeometry(QRect(330, 150, 600, 200));
        buttonBalance->setFont(font);
        buttonBalance->setStyleSheet(QString::fromUtf8("selection-color: rgb(0, 255, 0);"));
        labelATM = new QLabel(groupBoxNav);
        labelATM->setObjectName(QString::fromUtf8("labelATM"));
        labelATM->setGeometry(QRect(770, 10, 500, 150));
        QFont font1;
        font1.setPointSize(52);
        font1.setBold(true);
        font1.setWeight(75);
        labelATM->setFont(font1);
        labelATM->setAlignment(Qt::AlignCenter);
        buttonTransactions = new QPushButton(groupBoxNav);
        buttonTransactions->setObjectName(QString::fromUtf8("buttonTransactions"));
        buttonTransactions->setGeometry(QRect(330, 410, 600, 200));
        buttonTransactions->setFont(font);
        navWidget->addWidget(Nav);
        Balance = new QWidget();
        Balance->setObjectName(QString::fromUtf8("Balance"));
        groupBoxBalance = new QGroupBox(Balance);
        groupBoxBalance->setObjectName(QString::fromUtf8("groupBoxBalance"));
        groupBoxBalance->setGeometry(QRect(20, 20, 1841, 1001));
        labelTitleAccountBalance = new QLabel(groupBoxBalance);
        labelTitleAccountBalance->setObjectName(QString::fromUtf8("labelTitleAccountBalance"));
        labelTitleAccountBalance->setGeometry(QRect(660, 0, 791, 131));
        labelTitleAccountBalance->setFont(font1);
        labelTitleAccountBalance->setAlignment(Qt::AlignCenter);
        labelTitleSaldo = new QLabel(groupBoxBalance);
        labelTitleSaldo->setObjectName(QString::fromUtf8("labelTitleSaldo"));
        labelTitleSaldo->setGeometry(QRect(750, 120, 571, 161));
        QFont font2;
        font2.setPointSize(80);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        labelTitleSaldo->setFont(font2);
        buttonBackBalance = new QPushButton(groupBoxBalance);
        buttonBackBalance->setObjectName(QString::fromUtf8("buttonBackBalance"));
        buttonBackBalance->setGeometry(QRect(780, 660, 561, 201));
        buttonBackBalance->setFont(font1);
        labelSaldo = new QLabel(groupBoxBalance);
        labelSaldo->setObjectName(QString::fromUtf8("labelSaldo"));
        labelSaldo->setGeometry(QRect(50, 280, 1241, 161));
        labelSaldo->setFont(font2);
        labelSaldo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        navWidget->addWidget(Balance);
        Withdraw = new QWidget();
        Withdraw->setObjectName(QString::fromUtf8("Withdraw"));
        groupBoxWithdraw = new QGroupBox(Withdraw);
        groupBoxWithdraw->setObjectName(QString::fromUtf8("groupBoxWithdraw"));
        groupBoxWithdraw->setGeometry(QRect(19, 19, 1841, 1001));
        button240 = new QPushButton(groupBoxWithdraw);
        button240->setObjectName(QString::fromUtf8("button240"));
        button240->setGeometry(QRect(1070, 520, 400, 150));
        button240->setFont(font1);
        button240->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(groupBoxWithdraw);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(790, 0, 471, 150));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        button140 = new QPushButton(groupBoxWithdraw);
        button140->setObjectName(QString::fromUtf8("button140"));
        button140->setGeometry(QRect(1070, 350, 400, 150));
        button140->setFont(font1);
        button140->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(groupBoxWithdraw);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(810, 70, 471, 150));
        QFont font3;
        font3.setPointSize(30);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        button20 = new QPushButton(groupBoxWithdraw);
        button20->setObjectName(QString::fromUtf8("button20"));
        button20->setGeometry(QRect(590, 180, 400, 150));
        button20->setFont(font1);
        button20->setStyleSheet(QString::fromUtf8(""));
        button60 = new QPushButton(groupBoxWithdraw);
        button60->setObjectName(QString::fromUtf8("button60"));
        button60->setGeometry(QRect(590, 520, 400, 150));
        button60->setFont(font1);
        button60->setStyleSheet(QString::fromUtf8(""));
        buttonBackWithdraw = new QPushButton(groupBoxWithdraw);
        buttonBackWithdraw->setObjectName(QString::fromUtf8("buttonBackWithdraw"));
        buttonBackWithdraw->setGeometry(QRect(830, 700, 400, 150));
        buttonBackWithdraw->setFont(font1);
        button40 = new QPushButton(groupBoxWithdraw);
        button40->setObjectName(QString::fromUtf8("button40"));
        button40->setGeometry(QRect(590, 350, 400, 150));
        button40->setFont(font1);
        button40->setStyleSheet(QString::fromUtf8(""));
        button90 = new QPushButton(groupBoxWithdraw);
        button90->setObjectName(QString::fromUtf8("button90"));
        button90->setGeometry(QRect(1070, 180, 400, 150));
        button90->setFont(font1);
        button90->setStyleSheet(QString::fromUtf8(""));
        navWidget->addWidget(Withdraw);
        withdrawCustom = new QWidget();
        withdrawCustom->setObjectName(QString::fromUtf8("withdrawCustom"));
        groupBoxWithdrawCustom = new QGroupBox(withdrawCustom);
        groupBoxWithdrawCustom->setObjectName(QString::fromUtf8("groupBoxWithdrawCustom"));
        groupBoxWithdrawCustom->setGeometry(QRect(20, 20, 1841, 1001));
        buttonNum1 = new QPushButton(groupBoxWithdrawCustom);
        buttonNum1->setObjectName(QString::fromUtf8("buttonNum1"));
        buttonNum1->setGeometry(QRect(710, 260, 121, 111));
        QFont font4;
        font4.setPointSize(36);
        font4.setBold(true);
        font4.setWeight(75);
        buttonNum1->setFont(font4);
        buttonNum9 = new QPushButton(groupBoxWithdrawCustom);
        buttonNum9->setObjectName(QString::fromUtf8("buttonNum9"));
        buttonNum9->setGeometry(QRect(1030, 560, 121, 111));
        buttonNum9->setFont(font4);
        buttonNum2 = new QPushButton(groupBoxWithdrawCustom);
        buttonNum2->setObjectName(QString::fromUtf8("buttonNum2"));
        buttonNum2->setGeometry(QRect(870, 260, 121, 111));
        buttonNum2->setFont(font4);
        buttonNum6 = new QPushButton(groupBoxWithdrawCustom);
        buttonNum6->setObjectName(QString::fromUtf8("buttonNum6"));
        buttonNum6->setGeometry(QRect(1030, 410, 121, 111));
        buttonNum6->setFont(font4);
        buttonClear = new QPushButton(groupBoxWithdrawCustom);
        buttonClear->setObjectName(QString::fromUtf8("buttonClear"));
        buttonClear->setGeometry(QRect(710, 710, 121, 111));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setWeight(75);
        buttonClear->setFont(font5);
        buttonNum5 = new QPushButton(groupBoxWithdrawCustom);
        buttonNum5->setObjectName(QString::fromUtf8("buttonNum5"));
        buttonNum5->setGeometry(QRect(870, 410, 121, 111));
        buttonNum5->setFont(font4);
        buttonNum0 = new QPushButton(groupBoxWithdrawCustom);
        buttonNum0->setObjectName(QString::fromUtf8("buttonNum0"));
        buttonNum0->setGeometry(QRect(870, 710, 121, 111));
        buttonNum0->setFont(font4);
        lineEdit = new QLineEdit(groupBoxWithdrawCustom);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(710, 120, 441, 81));
        QFont font6;
        font6.setPointSize(20);
        font6.setBold(true);
        font6.setWeight(75);
        lineEdit->setFont(font6);
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit->setAlignment(Qt::AlignCenter);
        buttonEnter = new QPushButton(groupBoxWithdrawCustom);
        buttonEnter->setObjectName(QString::fromUtf8("buttonEnter"));
        buttonEnter->setGeometry(QRect(1030, 710, 121, 111));
        buttonEnter->setFont(font5);
        buttonNum8 = new QPushButton(groupBoxWithdrawCustom);
        buttonNum8->setObjectName(QString::fromUtf8("buttonNum8"));
        buttonNum8->setGeometry(QRect(870, 560, 121, 111));
        buttonNum8->setFont(font4);
        buttonBack = new QPushButton(groupBoxWithdrawCustom);
        buttonBack->setObjectName(QString::fromUtf8("buttonBack"));
        buttonBack->setGeometry(QRect(560, 710, 121, 111));
        QFont font7;
        font7.setPointSize(14);
        font7.setBold(true);
        font7.setWeight(75);
        buttonBack->setFont(font7);
        buttonNum4 = new QPushButton(groupBoxWithdrawCustom);
        buttonNum4->setObjectName(QString::fromUtf8("buttonNum4"));
        buttonNum4->setGeometry(QRect(710, 410, 121, 111));
        buttonNum4->setFont(font4);
        buttonNum7 = new QPushButton(groupBoxWithdrawCustom);
        buttonNum7->setObjectName(QString::fromUtf8("buttonNum7"));
        buttonNum7->setGeometry(QRect(710, 560, 121, 111));
        buttonNum7->setFont(font4);
        buttonNum3 = new QPushButton(groupBoxWithdrawCustom);
        buttonNum3->setObjectName(QString::fromUtf8("buttonNum3"));
        buttonNum3->setGeometry(QRect(1030, 260, 121, 111));
        buttonNum3->setFont(font4);
        labelTitleCustomAmount = new QLabel(groupBoxWithdrawCustom);
        labelTitleCustomAmount->setObjectName(QString::fromUtf8("labelTitleCustomAmount"));
        labelTitleCustomAmount->setGeometry(QRect(720, 40, 431, 51));
        labelTitleCustomAmount->setFont(font5);
        labelTitleCustomAmount->setAlignment(Qt::AlignCenter);
        navWidget->addWidget(withdrawCustom);
        Transactions = new QWidget();
        Transactions->setObjectName(QString::fromUtf8("Transactions"));
        groupBoxTransactions = new QGroupBox(Transactions);
        groupBoxTransactions->setObjectName(QString::fromUtf8("groupBoxTransactions"));
        groupBoxTransactions->setGeometry(QRect(19, 19, 1841, 1001));
        LabelTitleLastLogin = new QLabel(groupBoxTransactions);
        LabelTitleLastLogin->setObjectName(QString::fromUtf8("LabelTitleLastLogin"));
        LabelTitleLastLogin->setGeometry(QRect(580, 130, 141, 41));
        LabelTitleLastLogin->setFont(font5);
        labelPageNumber = new QLabel(groupBoxTransactions);
        labelPageNumber->setObjectName(QString::fromUtf8("labelPageNumber"));
        labelPageNumber->setGeometry(QRect(900, 690, 41, 61));
        QFont font8;
        font8.setPointSize(14);
        font8.setBold(false);
        font8.setWeight(50);
        labelPageNumber->setFont(font8);
        labelPageNumber->setAlignment(Qt::AlignCenter);
        labelLastLogin = new QLabel(groupBoxTransactions);
        labelLastLogin->setObjectName(QString::fromUtf8("labelLastLogin"));
        labelLastLogin->setGeometry(QRect(990, 130, 281, 31));
        labelLastLogin->setFont(font5);
        labelLastLogin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        previousPageButton = new QPushButton(groupBoxTransactions);
        previousPageButton->setObjectName(QString::fromUtf8("previousPageButton"));
        previousPageButton->setGeometry(QRect(742, 690, 151, 61));
        QFont font9;
        font9.setPointSize(12);
        previousPageButton->setFont(font9);
        widgetTransaction = new QWidget(groupBoxTransactions);
        widgetTransaction->setObjectName(QString::fromUtf8("widgetTransaction"));
        widgetTransaction->setGeometry(QRect(580, 210, 691, 471));
        buttonBackTransactions = new QPushButton(groupBoxTransactions);
        buttonBackTransactions->setObjectName(QString::fromUtf8("buttonBackTransactions"));
        buttonBackTransactions->setGeometry(QRect(770, 780, 301, 101));
        QFont font10;
        font10.setPointSize(24);
        font10.setBold(false);
        font10.setWeight(50);
        buttonBackTransactions->setFont(font10);
        labelBalance = new QLabel(groupBoxTransactions);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setGeometry(QRect(990, 170, 281, 31));
        labelBalance->setFont(font5);
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTitleBalance = new QLabel(groupBoxTransactions);
        labelTitleBalance->setObjectName(QString::fromUtf8("labelTitleBalance"));
        labelTitleBalance->setGeometry(QRect(580, 160, 211, 51));
        labelTitleBalance->setFont(font5);
        label_4 = new QLabel(groupBoxTransactions);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(570, 40, 721, 51));
        QFont font11;
        font11.setPointSize(28);
        font11.setBold(true);
        font11.setWeight(75);
        label_4->setFont(font11);
        label_4->setAlignment(Qt::AlignCenter);
        nextPageButton = new QPushButton(groupBoxTransactions);
        nextPageButton->setObjectName(QString::fromUtf8("nextPageButton"));
        nextPageButton->setGeometry(QRect(950, 690, 141, 61));
        nextPageButton->setFont(font9);
        navWidget->addWidget(Transactions);
        withdrawDone = new QWidget();
        withdrawDone->setObjectName(QString::fromUtf8("withdrawDone"));
        groupBoxWithdrawDone = new QGroupBox(withdrawDone);
        groupBoxWithdrawDone->setObjectName(QString::fromUtf8("groupBoxWithdrawDone"));
        groupBoxWithdrawDone->setGeometry(QRect(20, 20, 1841, 1001));
        labelEuroTitle = new QLabel(groupBoxWithdrawDone);
        labelEuroTitle->setObjectName(QString::fromUtf8("labelEuroTitle"));
        labelEuroTitle->setGeometry(QRect(940, 200, 531, 71));
        labelEuroTitle->setFont(font);
        labelEuroAmount = new QLabel(groupBoxWithdrawDone);
        labelEuroAmount->setObjectName(QString::fromUtf8("labelEuroAmount"));
        labelEuroAmount->setGeometry(QRect(510, 200, 411, 81));
        labelEuroAmount->setFont(font);
        labelEuroAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(groupBoxWithdrawDone);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(820, 320, 381, 121));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        navWidget->addWidget(withdrawDone);

        retranslateUi(UIBankSimeasymode);

        navWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UIBankSimeasymode);
    } // setupUi

    void retranslateUi(QWidget *UIBankSimeasymode)
    {
        UIBankSimeasymode->setWindowTitle(QApplication::translate("UIBankSimeasymode", "Form", nullptr));
        groupBoxNav->setTitle(QString());
        buttonWithdraw->setText(QApplication::translate("UIBankSimeasymode", "Withdraw", nullptr));
        buttonLogOut->setText(QApplication::translate("UIBankSimeasymode", "Logout", nullptr));
        buttonBalance->setText(QApplication::translate("UIBankSimeasymode", "Account balance", nullptr));
        labelATM->setText(QApplication::translate("UIBankSimeasymode", "ATM", nullptr));
        buttonTransactions->setText(QApplication::translate("UIBankSimeasymode", "Guide", nullptr));
        groupBoxBalance->setTitle(QString());
        labelTitleAccountBalance->setText(QApplication::translate("UIBankSimeasymode", "Account Balance", nullptr));
        labelTitleSaldo->setText(QApplication::translate("UIBankSimeasymode", "Balance:", nullptr));
        buttonBackBalance->setText(QApplication::translate("UIBankSimeasymode", "Back", nullptr));
        labelSaldo->setText(QApplication::translate("UIBankSimeasymode", "00.00\342\202\254", nullptr));
        groupBoxWithdraw->setTitle(QString());
        button240->setText(QApplication::translate("UIBankSimeasymode", "240\342\202\254", nullptr));
        label_2->setText(QApplication::translate("UIBankSimeasymode", "Withdraw", nullptr));
        button140->setText(QApplication::translate("UIBankSimeasymode", "140\342\202\254", nullptr));
        label->setText(QApplication::translate("UIBankSimeasymode", "SELECT AMOUNT:", nullptr));
        button20->setText(QApplication::translate("UIBankSimeasymode", "20\342\202\254", nullptr));
        button60->setText(QApplication::translate("UIBankSimeasymode", "60\342\202\254", nullptr));
        buttonBackWithdraw->setText(QApplication::translate("UIBankSimeasymode", "Back", nullptr));
        button40->setText(QApplication::translate("UIBankSimeasymode", "40\342\202\254", nullptr));
        button90->setText(QApplication::translate("UIBankSimeasymode", "90\342\202\254", nullptr));
        groupBoxWithdrawCustom->setTitle(QString());
        buttonNum1->setText(QApplication::translate("UIBankSimeasymode", "1", nullptr));
        buttonNum9->setText(QApplication::translate("UIBankSimeasymode", "9", nullptr));
        buttonNum2->setText(QApplication::translate("UIBankSimeasymode", "2", nullptr));
        buttonNum6->setText(QApplication::translate("UIBankSimeasymode", "6", nullptr));
        buttonClear->setText(QApplication::translate("UIBankSimeasymode", "CLEAR", nullptr));
        buttonNum5->setText(QApplication::translate("UIBankSimeasymode", "5", nullptr));
        buttonNum0->setText(QApplication::translate("UIBankSimeasymode", "0", nullptr));
        buttonEnter->setText(QApplication::translate("UIBankSimeasymode", "ENTER", nullptr));
        buttonNum8->setText(QApplication::translate("UIBankSimeasymode", "8", nullptr));
        buttonBack->setText(QApplication::translate("UIBankSimeasymode", "BACK", nullptr));
        buttonNum4->setText(QApplication::translate("UIBankSimeasymode", "4", nullptr));
        buttonNum7->setText(QApplication::translate("UIBankSimeasymode", "7", nullptr));
        buttonNum3->setText(QApplication::translate("UIBankSimeasymode", "3", nullptr));
        labelTitleCustomAmount->setText(QApplication::translate("UIBankSimeasymode", "Withdraw custom amount:", nullptr));
        groupBoxTransactions->setTitle(QString());
        LabelTitleLastLogin->setText(QApplication::translate("UIBankSimeasymode", "Last Login:", nullptr));
        labelPageNumber->setText(QString());
        labelLastLogin->setText(QApplication::translate("UIBankSimeasymode", "YYYY-MM-DD HH:MM:SS", nullptr));
        previousPageButton->setText(QApplication::translate("UIBankSimeasymode", "<Previous Page", nullptr));
        buttonBackTransactions->setText(QApplication::translate("UIBankSimeasymode", "Back", nullptr));
        labelBalance->setText(QApplication::translate("UIBankSimeasymode", "00.00 \342\202\254", nullptr));
        labelTitleBalance->setText(QApplication::translate("UIBankSimeasymode", "Balance:", nullptr));
        label_4->setText(QApplication::translate("UIBankSimeasymode", "Transactions", nullptr));
        nextPageButton->setText(QApplication::translate("UIBankSimeasymode", "Next Page>", nullptr));
        groupBoxWithdrawDone->setTitle(QString());
        labelEuroTitle->setText(QApplication::translate("UIBankSimeasymode", "Euros withdrawn", nullptr));
        labelEuroAmount->setText(QApplication::translate("UIBankSimeasymode", "00.00", nullptr));
        label_3->setText(QApplication::translate("UIBankSimeasymode", "Logging out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIBankSimeasymode: public Ui_UIBankSimeasymode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIBANKSIMEASYMODE_H
