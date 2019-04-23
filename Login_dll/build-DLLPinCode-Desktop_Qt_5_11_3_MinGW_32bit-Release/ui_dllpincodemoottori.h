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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DLLPinCodeMoottori
{
public:
    QGroupBox *groupBox;
    QLineEdit *pinLine;
    QLabel *label;
    QLabel *timerLabel;
    QLabel *pinLabel;

    void setupUi(QDialog *DLLPinCodeMoottori)
    {
        if (DLLPinCodeMoottori->objectName().isEmpty())
            DLLPinCodeMoottori->setObjectName(QLatin1String("DLLPinCodeMoottori"));
        DLLPinCodeMoottori->resize(562, 364);
        groupBox = new QGroupBox(DLLPinCodeMoottori);
        groupBox->setObjectName(QLatin1String("groupBox"));
        groupBox->setGeometry(QRect(50, 60, 451, 190));
        pinLine = new QLineEdit(groupBox);
        pinLine->setObjectName(QLatin1String("pinLine"));
        pinLine->setGeometry(QRect(102, 129, 241, 41));
        pinLine->setMaxLength(4);
        pinLine->setEchoMode(QLineEdit::Password);
        pinLine->setAlignment(Qt::AlignCenter);
        label = new QLabel(groupBox);
        label->setObjectName(QLatin1String("label"));
        label->setGeometry(QRect(380, 20, 47, 13));
        timerLabel = new QLabel(groupBox);
        timerLabel->setObjectName(QLatin1String("timerLabel"));
        timerLabel->setGeometry(QRect(370, 90, 47, 13));
        pinLabel = new QLabel(groupBox);
        pinLabel->setObjectName(QLatin1String("pinLabel"));
        pinLabel->setGeometry(QRect(100, 70, 241, 41));
        QFont font;
        font.setPointSize(12);
        pinLabel->setFont(font);
        pinLabel->setAlignment(Qt::AlignCenter);

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
    } // retranslateUi

};

namespace Ui {
    class DLLPinCodeMoottori: public Ui_DLLPinCodeMoottori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLLPINCODEMOOTTORI_H
