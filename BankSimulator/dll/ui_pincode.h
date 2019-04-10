/********************************************************************************
** Form generated from reading UI file 'pincode.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINCODE_H
#define UI_PINCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PinCode
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *button1;
    QPushButton *button9;
    QLabel *label;
    QPushButton *button2;
    QPushButton *button5;
    QPushButton *buttonBack;
    QLineEdit *lineEdit;
    QPushButton *buttonClear;
    QPushButton *button0;
    QPushButton *button6;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *buttonEnter;
    QPushButton *button8;
    QPushButton *button7;
    QWidget *page_2;

    void setupUi(QWidget *PinCode)
    {
        if (PinCode->objectName().isEmpty())
            PinCode->setObjectName(QStringLiteral("PinCode"));
        PinCode->resize(800, 900);
        stackedWidget = new QStackedWidget(PinCode);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 851, 901));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        button1 = new QPushButton(page);
        button1->setObjectName(QStringLiteral("button1"));
        button1->setGeometry(QRect(200, 260, 121, 111));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        button1->setFont(font);
        button9 = new QPushButton(page);
        button9->setObjectName(QStringLiteral("button9"));
        button9->setGeometry(QRect(520, 560, 121, 111));
        button9->setFont(font);
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 40, 381, 51));
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        button2 = new QPushButton(page);
        button2->setObjectName(QStringLiteral("button2"));
        button2->setGeometry(QRect(360, 260, 121, 111));
        button2->setFont(font);
        button5 = new QPushButton(page);
        button5->setObjectName(QStringLiteral("button5"));
        button5->setGeometry(QRect(360, 410, 121, 111));
        button5->setFont(font);
        buttonBack = new QPushButton(page);
        buttonBack->setObjectName(QStringLiteral("buttonBack"));
        buttonBack->setGeometry(QRect(50, 710, 121, 111));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        buttonBack->setFont(font2);
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 130, 441, 81));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        lineEdit->setFont(font3);
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit->setAlignment(Qt::AlignCenter);
        buttonClear = new QPushButton(page);
        buttonClear->setObjectName(QStringLiteral("buttonClear"));
        buttonClear->setGeometry(QRect(200, 710, 121, 111));
        buttonClear->setFont(font2);
        button0 = new QPushButton(page);
        button0->setObjectName(QStringLiteral("button0"));
        button0->setGeometry(QRect(360, 710, 121, 111));
        button0->setFont(font);
        button6 = new QPushButton(page);
        button6->setObjectName(QStringLiteral("button6"));
        button6->setGeometry(QRect(520, 410, 121, 111));
        button6->setFont(font);
        button3 = new QPushButton(page);
        button3->setObjectName(QStringLiteral("button3"));
        button3->setGeometry(QRect(520, 260, 121, 111));
        button3->setFont(font);
        button4 = new QPushButton(page);
        button4->setObjectName(QStringLiteral("button4"));
        button4->setGeometry(QRect(200, 410, 121, 111));
        button4->setFont(font);
        buttonEnter = new QPushButton(page);
        buttonEnter->setObjectName(QStringLiteral("buttonEnter"));
        buttonEnter->setGeometry(QRect(520, 710, 121, 111));
        buttonEnter->setFont(font2);
        button8 = new QPushButton(page);
        button8->setObjectName(QStringLiteral("button8"));
        button8->setGeometry(QRect(360, 560, 121, 111));
        button8->setFont(font);
        button7 = new QPushButton(page);
        button7->setObjectName(QStringLiteral("button7"));
        button7->setGeometry(QRect(200, 560, 121, 111));
        button7->setFont(font);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(PinCode);

        QMetaObject::connectSlotsByName(PinCode);
    } // setupUi

    void retranslateUi(QWidget *PinCode)
    {
        PinCode->setWindowTitle(QApplication::translate("PinCode", "Form", Q_NULLPTR));
        button1->setText(QApplication::translate("PinCode", "1", Q_NULLPTR));
        button9->setText(QApplication::translate("PinCode", "9", Q_NULLPTR));
        label->setText(QApplication::translate("PinCode", "Enter PIN-Code", Q_NULLPTR));
        button2->setText(QApplication::translate("PinCode", "2", Q_NULLPTR));
        button5->setText(QApplication::translate("PinCode", "5", Q_NULLPTR));
        buttonBack->setText(QApplication::translate("PinCode", "Back", Q_NULLPTR));
        buttonClear->setText(QApplication::translate("PinCode", "CLEAR", Q_NULLPTR));
        button0->setText(QApplication::translate("PinCode", "0", Q_NULLPTR));
        button6->setText(QApplication::translate("PinCode", "6", Q_NULLPTR));
        button3->setText(QApplication::translate("PinCode", "3", Q_NULLPTR));
        button4->setText(QApplication::translate("PinCode", "4", Q_NULLPTR));
        buttonEnter->setText(QApplication::translate("PinCode", "ENTER", Q_NULLPTR));
        button8->setText(QApplication::translate("PinCode", "8", Q_NULLPTR));
        button7->setText(QApplication::translate("PinCode", "7", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PinCode: public Ui_PinCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINCODE_H
