/********************************************************************************
** Form generated from reading UI file 'dllpincodemoottori_copy.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLLPINCODEMOOTTORI_COPY_H
#define UI_DLLPINCODEMOOTTORI_COPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QPushButton *pushButton;

    void setupUi(QWidget *DLLPinCodeMoottori)
    {
        if (DLLPinCodeMoottori->objectName().isEmpty())
            DLLPinCodeMoottori->setObjectName(QLatin1String("DLLPinCodeMoottori"));
        DLLPinCodeMoottori->resize(591, 300);
        groupBox = new QGroupBox(DLLPinCodeMoottori);
        groupBox->setObjectName(QLatin1String("groupBox"));
        groupBox->setGeometry(QRect(70, 50, 451, 190));
        pinLine = new QLineEdit(groupBox);
        pinLine->setObjectName(QLatin1String("pinLine"));
        pinLine->setGeometry(QRect(102, 129, 241, 41));
        pinLine->setMaxLength(4);
        pinLine->setEchoMode(QLineEdit::Password);
        pinLine->setAlignment(Qt::AlignCenter);
        label = new QLabel(groupBox);
        label->setObjectName(QLatin1String("label"));
        label->setGeometry(QRect(380, 20, 47, 13));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QLatin1String("pushButton"));
        pushButton->setGeometry(QRect(190, 80, 75, 23));

        retranslateUi(DLLPinCodeMoottori);

        QMetaObject::connectSlotsByName(DLLPinCodeMoottori);
    } // setupUi

    void retranslateUi(QWidget *DLLPinCodeMoottori)
    {
        DLLPinCodeMoottori->setWindowTitle(QApplication::translate("DLLPinCodeMoottori", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("DLLPinCodeMoottori", "Login widget", nullptr));
        pinLine->setPlaceholderText(QApplication::translate("DLLPinCodeMoottori", "Pin", nullptr));
        label->setText(QApplication::translate("DLLPinCodeMoottori", "Debug", nullptr));
        pushButton->setText(QApplication::translate("DLLPinCodeMoottori", "RFID -testi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DLLPinCodeMoottori: public Ui_DLLPinCodeMoottori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLLPINCODEMOOTTORI_COPY_H
