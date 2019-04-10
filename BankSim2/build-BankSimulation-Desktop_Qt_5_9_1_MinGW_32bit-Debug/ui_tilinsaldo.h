/********************************************************************************
** Form generated from reading UI file 'tilinsaldo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILINSALDO_H
#define UI_TILINSALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TilinSaldo
{
public:
    QWidget *widget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *labe4;
    QLabel *label3;
    QPushButton *buttonKirjauduUlos;
    QLabel *saldoLabel;
    QLabel *katevarausLabel;
    QLabel *label2;
    QLabel *kaytettavissaLabel;

    void setupUi(QWidget *TilinSaldo)
    {
        if (TilinSaldo->objectName().isEmpty())
            TilinSaldo->setObjectName(QStringLiteral("TilinSaldo"));
        TilinSaldo->resize(800, 900);
        widget = new QWidget(TilinSaldo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 801, 901));
        graphicsView = new QGraphicsView(widget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(50, 130, 701, 192));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 30, 241, 51));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        labe4 = new QLabel(widget);
        labe4->setObjectName(QStringLiteral("labe4"));
        labe4->setGeometry(QRect(80, 150, 191, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        labe4->setFont(font1);
        label3 = new QLabel(widget);
        label3->setObjectName(QStringLiteral("label3"));
        label3->setGeometry(QRect(180, 210, 91, 31));
        label3->setFont(font1);
        buttonKirjauduUlos = new QPushButton(widget);
        buttonKirjauduUlos->setObjectName(QStringLiteral("buttonKirjauduUlos"));
        buttonKirjauduUlos->setGeometry(QRect(250, 720, 301, 131));
        QFont font2;
        font2.setPointSize(26);
        font2.setBold(false);
        font2.setWeight(50);
        buttonKirjauduUlos->setFont(font2);
        saldoLabel = new QLabel(widget);
        saldoLabel->setObjectName(QStringLiteral("saldoLabel"));
        saldoLabel->setGeometry(QRect(570, 200, 101, 51));
        saldoLabel->setFont(font1);
        katevarausLabel = new QLabel(widget);
        katevarausLabel->setObjectName(QStringLiteral("katevarausLabel"));
        katevarausLabel->setGeometry(QRect(570, 260, 101, 51));
        katevarausLabel->setFont(font1);
        label2 = new QLabel(widget);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(100, 270, 171, 21));
        label2->setFont(font1);
        kaytettavissaLabel = new QLabel(widget);
        kaytettavissaLabel->setObjectName(QStringLiteral("kaytettavissaLabel"));
        kaytettavissaLabel->setGeometry(QRect(570, 150, 161, 51));
        kaytettavissaLabel->setFont(font1);

        retranslateUi(TilinSaldo);

        QMetaObject::connectSlotsByName(TilinSaldo);
    } // setupUi

    void retranslateUi(QWidget *TilinSaldo)
    {
        TilinSaldo->setWindowTitle(QApplication::translate("TilinSaldo", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("TilinSaldo", "Tilin saldo", Q_NULLPTR));
        labe4->setText(QApplication::translate("TilinSaldo", "K\303\244ytett\303\244viss\303\244:", Q_NULLPTR));
        label3->setText(QApplication::translate("TilinSaldo", "Saldo:", Q_NULLPTR));
        buttonKirjauduUlos->setText(QApplication::translate("TilinSaldo", "TAKAISIN", Q_NULLPTR));
        saldoLabel->setText(QApplication::translate("TilinSaldo", "00,00\342\202\254", Q_NULLPTR));
        katevarausLabel->setText(QApplication::translate("TilinSaldo", "00,00\342\202\254", Q_NULLPTR));
        label2->setText(QApplication::translate("TilinSaldo", "Katevaraus:", Q_NULLPTR));
        kaytettavissaLabel->setText(QApplication::translate("TilinSaldo", "00,00\342\202\254", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TilinSaldo: public Ui_TilinSaldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILINSALDO_H
