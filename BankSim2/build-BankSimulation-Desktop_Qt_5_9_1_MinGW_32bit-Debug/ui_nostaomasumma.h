/********************************************************************************
** Form generated from reading UI file 'nostaomasumma.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTAOMASUMMA_H
#define UI_NOSTAOMASUMMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NostaOmaSumma
{
public:
    QFrame *frame;
    QPushButton *button9;
    QPushButton *button7;
    QPushButton *button4;
    QPushButton *button1;
    QPushButton *button5;
    QLabel *label;
    QPushButton *buttonBack;
    QPushButton *buttonClear;
    QPushButton *button6;
    QPushButton *button3;
    QPushButton *button8;
    QPushButton *button0;
    QLineEdit *lineEdit;
    QPushButton *buttonEnter;
    QPushButton *button2;

    void setupUi(QWidget *NostaOmaSumma)
    {
        if (NostaOmaSumma->objectName().isEmpty())
            NostaOmaSumma->setObjectName(QStringLiteral("NostaOmaSumma"));
        NostaOmaSumma->resize(800, 900);
        frame = new QFrame(NostaOmaSumma);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-10, 0, 801, 901));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        button9 = new QPushButton(frame);
        button9->setObjectName(QStringLiteral("button9"));
        button9->setGeometry(QRect(510, 550, 121, 111));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        button9->setFont(font);
        button7 = new QPushButton(frame);
        button7->setObjectName(QStringLiteral("button7"));
        button7->setGeometry(QRect(190, 550, 121, 111));
        button7->setFont(font);
        button4 = new QPushButton(frame);
        button4->setObjectName(QStringLiteral("button4"));
        button4->setGeometry(QRect(190, 400, 121, 111));
        button4->setFont(font);
        button1 = new QPushButton(frame);
        button1->setObjectName(QStringLiteral("button1"));
        button1->setGeometry(QRect(190, 250, 121, 111));
        button1->setFont(font);
        button5 = new QPushButton(frame);
        button5->setObjectName(QStringLiteral("button5"));
        button5->setGeometry(QRect(350, 400, 121, 111));
        button5->setFont(font);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 30, 331, 51));
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        buttonBack = new QPushButton(frame);
        buttonBack->setObjectName(QStringLiteral("buttonBack"));
        buttonBack->setGeometry(QRect(40, 700, 121, 111));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        buttonBack->setFont(font2);
        buttonClear = new QPushButton(frame);
        buttonClear->setObjectName(QStringLiteral("buttonClear"));
        buttonClear->setGeometry(QRect(190, 700, 121, 111));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        buttonClear->setFont(font3);
        button6 = new QPushButton(frame);
        button6->setObjectName(QStringLiteral("button6"));
        button6->setGeometry(QRect(510, 400, 121, 111));
        button6->setFont(font);
        button3 = new QPushButton(frame);
        button3->setObjectName(QStringLiteral("button3"));
        button3->setGeometry(QRect(510, 250, 121, 111));
        button3->setFont(font);
        button8 = new QPushButton(frame);
        button8->setObjectName(QStringLiteral("button8"));
        button8->setGeometry(QRect(350, 550, 121, 111));
        button8->setFont(font);
        button0 = new QPushButton(frame);
        button0->setObjectName(QStringLiteral("button0"));
        button0->setGeometry(QRect(350, 700, 121, 111));
        button0->setFont(font);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 120, 441, 81));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        lineEdit->setFont(font4);
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit->setAlignment(Qt::AlignCenter);
        buttonEnter = new QPushButton(frame);
        buttonEnter->setObjectName(QStringLiteral("buttonEnter"));
        buttonEnter->setGeometry(QRect(510, 700, 121, 111));
        buttonEnter->setFont(font3);
        button2 = new QPushButton(frame);
        button2->setObjectName(QStringLiteral("button2"));
        button2->setGeometry(QRect(350, 250, 121, 111));
        button2->setFont(font);

        retranslateUi(NostaOmaSumma);

        QMetaObject::connectSlotsByName(NostaOmaSumma);
    } // setupUi

    void retranslateUi(QWidget *NostaOmaSumma)
    {
        NostaOmaSumma->setWindowTitle(QApplication::translate("NostaOmaSumma", "Form", Q_NULLPTR));
        button9->setText(QApplication::translate("NostaOmaSumma", "9", Q_NULLPTR));
        button7->setText(QApplication::translate("NostaOmaSumma", "7", Q_NULLPTR));
        button4->setText(QApplication::translate("NostaOmaSumma", "4", Q_NULLPTR));
        button1->setText(QApplication::translate("NostaOmaSumma", "1", Q_NULLPTR));
        button5->setText(QApplication::translate("NostaOmaSumma", "5", Q_NULLPTR));
        label->setText(QApplication::translate("NostaOmaSumma", "Sy\303\266t\303\244 Summa", Q_NULLPTR));
        buttonBack->setText(QApplication::translate("NostaOmaSumma", "TAKAISIN", Q_NULLPTR));
        buttonClear->setText(QApplication::translate("NostaOmaSumma", "CLEAR", Q_NULLPTR));
        button6->setText(QApplication::translate("NostaOmaSumma", "6", Q_NULLPTR));
        button3->setText(QApplication::translate("NostaOmaSumma", "3", Q_NULLPTR));
        button8->setText(QApplication::translate("NostaOmaSumma", "8", Q_NULLPTR));
        button0->setText(QApplication::translate("NostaOmaSumma", "0", Q_NULLPTR));
        buttonEnter->setText(QApplication::translate("NostaOmaSumma", "ENTER", Q_NULLPTR));
        button2->setText(QApplication::translate("NostaOmaSumma", "2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NostaOmaSumma: public Ui_NostaOmaSumma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTAOMASUMMA_H
