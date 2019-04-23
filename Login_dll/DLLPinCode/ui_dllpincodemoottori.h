/********************************************************************************
** Form generated from reading UI file 'dllpincodemoottori.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLLPINCODEMOOTTORI_H
#define UI_DLLPINCODEMOOTTORI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DLLPinCodeMoottori
{
public:
    QGroupBox *groupBox;
    QLineEdit *pinLine;
    QLabel *label;
    QLabel *timerLabel;
    QLabel *pinLabel;
    QFrame *frame;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *buttonClear;
    QPushButton *buttonNum9;
    QPushButton *buttonNum4;
    QPushButton *buttonNum7;
    QPushButton *buttonNum3;
    QPushButton *buttonNum0;
    QPushButton *buttonNum8;
    QPushButton *buttonNum5;
    QPushButton *buttonNum6;
    QPushButton *buttonEnter;
    QPushButton *buttonNum1;
    QPushButton *buttonNum2;

    void setupUi(QDialog *DLLPinCodeMoottori)
    {
        if (DLLPinCodeMoottori->objectName().isEmpty())
            DLLPinCodeMoottori->setObjectName(QLatin1String("DLLPinCodeMoottori"));
        DLLPinCodeMoottori->resize(402, 558);
        groupBox = new QGroupBox(DLLPinCodeMoottori);
        groupBox->setObjectName(QLatin1String("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 361, 190));
        pinLine = new QLineEdit(groupBox);
        pinLine->setObjectName(QLatin1String("pinLine"));
        pinLine->setGeometry(QRect(20, 120, 321, 51));
        pinLine->setMaxLength(4);
        pinLine->setEchoMode(QLineEdit::Password);
        pinLine->setAlignment(Qt::AlignCenter);
        label = new QLabel(groupBox);
        label->setObjectName(QLatin1String("label"));
        label->setGeometry(QRect(310, 20, 47, 13));
        timerLabel = new QLabel(groupBox);
        timerLabel->setObjectName(QLatin1String("timerLabel"));
        timerLabel->setGeometry(QRect(170, 20, 47, 13));
        pinLabel = new QLabel(groupBox);
        pinLabel->setObjectName(QLatin1String("pinLabel"));
        pinLabel->setGeometry(QRect(20, 70, 321, 41));
        QFont font;
        font.setPointSize(12);
        pinLabel->setFont(font);
        pinLabel->setAlignment(Qt::AlignCenter);
        frame = new QFrame(DLLPinCodeMoottori);
        frame->setObjectName(QLatin1String("frame"));
        frame->setGeometry(QRect(20, 220, 361, 321));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QLatin1String("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 321, 284));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QLatin1String("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonClear = new QPushButton(layoutWidget);
        buttonClear->setObjectName(QLatin1String("buttonClear"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        buttonClear->setFont(font1);

        gridLayout->addWidget(buttonClear, 3, 0, 1, 1);

        buttonNum9 = new QPushButton(layoutWidget);
        buttonNum9->setObjectName(QLatin1String("buttonNum9"));
        QFont font2;
        font2.setPointSize(36);
        font2.setBold(true);
        font2.setWeight(75);
        buttonNum9->setFont(font2);

        gridLayout->addWidget(buttonNum9, 2, 2, 1, 1);

        buttonNum4 = new QPushButton(layoutWidget);
        buttonNum4->setObjectName(QLatin1String("buttonNum4"));
        buttonNum4->setFont(font2);

        gridLayout->addWidget(buttonNum4, 1, 0, 1, 1);

        buttonNum7 = new QPushButton(layoutWidget);
        buttonNum7->setObjectName(QLatin1String("buttonNum7"));
        buttonNum7->setFont(font2);

        gridLayout->addWidget(buttonNum7, 2, 0, 1, 1);

        buttonNum3 = new QPushButton(layoutWidget);
        buttonNum3->setObjectName(QLatin1String("buttonNum3"));
        buttonNum3->setFont(font2);

        gridLayout->addWidget(buttonNum3, 0, 2, 1, 1);

        buttonNum0 = new QPushButton(layoutWidget);
        buttonNum0->setObjectName(QLatin1String("buttonNum0"));
        buttonNum0->setFont(font2);

        gridLayout->addWidget(buttonNum0, 3, 1, 1, 1);

        buttonNum8 = new QPushButton(layoutWidget);
        buttonNum8->setObjectName(QLatin1String("buttonNum8"));
        buttonNum8->setFont(font2);

        gridLayout->addWidget(buttonNum8, 2, 1, 1, 1);

        buttonNum5 = new QPushButton(layoutWidget);
        buttonNum5->setObjectName(QLatin1String("buttonNum5"));
        buttonNum5->setFont(font2);

        gridLayout->addWidget(buttonNum5, 1, 1, 1, 1);

        buttonNum6 = new QPushButton(layoutWidget);
        buttonNum6->setObjectName(QLatin1String("buttonNum6"));
        buttonNum6->setFont(font2);

        gridLayout->addWidget(buttonNum6, 1, 2, 1, 1);

        buttonEnter = new QPushButton(layoutWidget);
        buttonEnter->setObjectName(QLatin1String("buttonEnter"));
        buttonEnter->setEnabled(false);
        buttonEnter->setFont(font1);

        gridLayout->addWidget(buttonEnter, 3, 2, 1, 1);

        buttonNum1 = new QPushButton(layoutWidget);
        buttonNum1->setObjectName(QLatin1String("buttonNum1"));
        buttonNum1->setFont(font2);

        gridLayout->addWidget(buttonNum1, 0, 0, 1, 1);

        buttonNum2 = new QPushButton(layoutWidget);
        buttonNum2->setObjectName(QLatin1String("buttonNum2"));
        buttonNum2->setFont(font2);

        gridLayout->addWidget(buttonNum2, 0, 1, 1, 1);


        retranslateUi(DLLPinCodeMoottori);

        QMetaObject::connectSlotsByName(DLLPinCodeMoottori);
    } // setupUi

    void retranslateUi(QDialog *DLLPinCodeMoottori)
    {
        DLLPinCodeMoottori->setWindowTitle(QApplication::translate("DLLPinCodeMoottori", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("DLLPinCodeMoottori", "Login widget", nullptr));
        pinLine->setPlaceholderText(QApplication::translate("DLLPinCodeMoottori", "Pin", nullptr));
        label->setText(QApplication::translate("DLLPinCodeMoottori", "Debug", nullptr));
        timerLabel->setText(QApplication::translate("DLLPinCodeMoottori", "TextLabel", nullptr));
        pinLabel->setText(QString());
        buttonClear->setText(QApplication::translate("DLLPinCodeMoottori", "CLEAR", nullptr));
        buttonNum9->setText(QApplication::translate("DLLPinCodeMoottori", "9", nullptr));
        buttonNum4->setText(QApplication::translate("DLLPinCodeMoottori", "4", nullptr));
        buttonNum7->setText(QApplication::translate("DLLPinCodeMoottori", "7", nullptr));
        buttonNum3->setText(QApplication::translate("DLLPinCodeMoottori", "3", nullptr));
        buttonNum0->setText(QApplication::translate("DLLPinCodeMoottori", "0", nullptr));
        buttonNum8->setText(QApplication::translate("DLLPinCodeMoottori", "8", nullptr));
        buttonNum5->setText(QApplication::translate("DLLPinCodeMoottori", "5", nullptr));
        buttonNum6->setText(QApplication::translate("DLLPinCodeMoottori", "6", nullptr));
        buttonEnter->setText(QApplication::translate("DLLPinCodeMoottori", "ENTER", nullptr));
        buttonNum1->setText(QApplication::translate("DLLPinCodeMoottori", "1", nullptr));
        buttonNum2->setText(QApplication::translate("DLLPinCodeMoottori", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DLLPinCodeMoottori: public Ui_DLLPinCodeMoottori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLLPINCODEMOOTTORI_H
