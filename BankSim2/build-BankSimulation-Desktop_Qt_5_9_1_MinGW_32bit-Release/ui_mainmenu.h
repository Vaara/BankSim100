/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *buttonKirjauduUlos;
    QPushButton *buttonTilitapahtumat;
    QPushButton *buttonTilinSaldo;
    QPushButton *buttonNostaRahaa;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(800, 900);
        frame = new QFrame(MainMenu);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 0, 801, 901));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 40, 421, 41));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        buttonKirjauduUlos = new QPushButton(frame);
        buttonKirjauduUlos->setObjectName(QStringLiteral("buttonKirjauduUlos"));
        buttonKirjauduUlos->setGeometry(QRect(230, 690, 301, 131));
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(false);
        font1.setWeight(50);
        buttonKirjauduUlos->setFont(font1);
        buttonTilitapahtumat = new QPushButton(frame);
        buttonTilitapahtumat->setObjectName(QStringLiteral("buttonTilitapahtumat"));
        buttonTilitapahtumat->setGeometry(QRect(230, 510, 301, 131));
        buttonTilitapahtumat->setFont(font1);
        buttonTilinSaldo = new QPushButton(frame);
        buttonTilinSaldo->setObjectName(QStringLiteral("buttonTilinSaldo"));
        buttonTilinSaldo->setGeometry(QRect(230, 150, 301, 131));
        buttonTilinSaldo->setFont(font1);
        buttonNostaRahaa = new QPushButton(frame);
        buttonNostaRahaa->setObjectName(QStringLiteral("buttonNostaRahaa"));
        buttonNostaRahaa->setGeometry(QRect(230, 330, 301, 131));
        buttonNostaRahaa->setFont(font1);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("MainMenu", "Pankkiautomaatti", Q_NULLPTR));
        buttonKirjauduUlos->setText(QApplication::translate("MainMenu", "Kirjaudu ulos", Q_NULLPTR));
        buttonTilitapahtumat->setText(QApplication::translate("MainMenu", "Tilitapahtumat", Q_NULLPTR));
        buttonTilinSaldo->setText(QApplication::translate("MainMenu", "Tilin saldo", Q_NULLPTR));
        buttonNostaRahaa->setText(QApplication::translate("MainMenu", "Nosta rahaa", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
