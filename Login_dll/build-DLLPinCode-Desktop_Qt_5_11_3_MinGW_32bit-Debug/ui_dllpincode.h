/********************************************************************************
** Form generated from reading UI file 'dllpincode.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLLPINCODE_H
#define UI_DLLPINCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DLLPinCode
{
public:
    QGroupBox *groupBox;
    QLineEdit *pinLine;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *DLLPinCode)
    {
        if (DLLPinCode->objectName().isEmpty())
            DLLPinCode->setObjectName(QLatin1String("DLLPinCode"));
        DLLPinCode->resize(668, 437);
        groupBox = new QGroupBox(DLLPinCode);
        groupBox->setObjectName(QLatin1String("groupBox"));
        groupBox->setGeometry(QRect(100, 120, 451, 190));
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

        retranslateUi(DLLPinCode);

        QMetaObject::connectSlotsByName(DLLPinCode);
    } // setupUi

    void retranslateUi(QWidget *DLLPinCode)
    {
        DLLPinCode->setWindowTitle(QApplication::translate("DLLPinCode", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("DLLPinCode", "Login widget", nullptr));
        pinLine->setPlaceholderText(QApplication::translate("DLLPinCode", "Pin", nullptr));
        label->setText(QApplication::translate("DLLPinCode", "Debug", nullptr));
        pushButton->setText(QApplication::translate("DLLPinCode", "RFID -testi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DLLPinCode: public Ui_DLLPinCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLLPINCODE_H
