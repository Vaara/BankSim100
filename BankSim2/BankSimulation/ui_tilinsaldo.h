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
#include <QtWidgets/QFrame>
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
    QLabel *balanceLabel;
    QLabel *nameLabel;
    QFrame *frame;

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
        graphicsView->setGeometry(QRect(50, 130, 701, 141));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 30, 391, 51));
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
        label3->setGeometry(QRect(130, 210, 121, 31));
        label3->setFont(font1);
        buttonKirjauduUlos = new QPushButton(widget);
        buttonKirjauduUlos->setObjectName(QStringLiteral("buttonKirjauduUlos"));
        buttonKirjauduUlos->setGeometry(QRect(250, 720, 301, 131));
        QFont font2;
        font2.setPointSize(26);
        font2.setBold(false);
        font2.setWeight(50);
        buttonKirjauduUlos->setFont(font2);
        balanceLabel = new QLabel(widget);
        balanceLabel->setObjectName(QStringLiteral("balanceLabel"));
        balanceLabel->setGeometry(QRect(290, 200, 431, 51));
        balanceLabel->setFont(font1);
        balanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(380, 150, 351, 51));
        nameLabel->setFont(font1);
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(50, 310, 701, 221));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(TilinSaldo);

        QMetaObject::connectSlotsByName(TilinSaldo);
    } // setupUi

    void retranslateUi(QWidget *TilinSaldo)
    {
        TilinSaldo->setWindowTitle(QApplication::translate("TilinSaldo", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("TilinSaldo", "Account Balance", Q_NULLPTR));
        labe4->setText(QApplication::translate("TilinSaldo", "Card owner:", Q_NULLPTR));
        label3->setText(QApplication::translate("TilinSaldo", "Balance:", Q_NULLPTR));
        buttonKirjauduUlos->setText(QApplication::translate("TilinSaldo", "Back", Q_NULLPTR));
        balanceLabel->setText(QString());
        nameLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TilinSaldo: public Ui_TilinSaldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILINSALDO_H
