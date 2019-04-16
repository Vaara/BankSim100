/********************************************************************************
** Form generated from reading UI file 'tilitapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILITAPAHTUMAT_H
#define UI_TILITAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tilitapahtumat
{
public:
    QFrame *frame;
    QGraphicsView *graphicsView;
    QPushButton *buttonKirjauduUlos;
    QLabel *label_2;
    QLabel *label;
    QLabel *labelBalance;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QWidget *page_2;
    QPushButton *nextPageButton;
    QPushButton *previousPageButton;
    QLabel *labelPageNumber;
    QLabel *labelLastLogin;
    QLabel *labelLastLogin_2;

    void setupUi(QWidget *Tilitapahtumat)
    {
        if (Tilitapahtumat->objectName().isEmpty())
            Tilitapahtumat->setObjectName(QStringLiteral("Tilitapahtumat"));
        Tilitapahtumat->resize(800, 900);
        frame = new QFrame(Tilitapahtumat);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 801, 901));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        graphicsView = new QGraphicsView(frame);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(40, 110, 721, 641));
        buttonKirjauduUlos = new QPushButton(frame);
        buttonKirjauduUlos->setObjectName(QStringLiteral("buttonKirjauduUlos"));
        buttonKirjauduUlos->setGeometry(QRect(240, 770, 301, 101));
        QFont font;
        font.setPointSize(24);
        font.setBold(false);
        font.setWeight(50);
        buttonKirjauduUlos->setFont(font);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 160, 211, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 30, 301, 51));
        QFont font2;
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setGeometry(QRect(540, 160, 201, 31));
        labelBalance->setFont(font1);
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(50, 200, 701, 471));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 140, 311, 161));
        pushButton->setFont(font1);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        nextPageButton = new QPushButton(frame);
        nextPageButton->setObjectName(QStringLiteral("nextPageButton"));
        nextPageButton->setGeometry(QRect(420, 680, 141, 61));
        QFont font3;
        font3.setPointSize(12);
        nextPageButton->setFont(font3);
        previousPageButton = new QPushButton(frame);
        previousPageButton->setObjectName(QStringLiteral("previousPageButton"));
        previousPageButton->setGeometry(QRect(212, 680, 151, 61));
        previousPageButton->setFont(font3);
        labelPageNumber = new QLabel(frame);
        labelPageNumber->setObjectName(QStringLiteral("labelPageNumber"));
        labelPageNumber->setGeometry(QRect(370, 685, 41, 51));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setWeight(50);
        labelPageNumber->setFont(font4);
        labelPageNumber->setAlignment(Qt::AlignCenter);
        labelLastLogin = new QLabel(frame);
        labelLastLogin->setObjectName(QStringLiteral("labelLastLogin"));
        labelLastLogin->setGeometry(QRect(50, 120, 191, 31));
        labelLastLogin->setFont(font1);
        labelLastLogin_2 = new QLabel(frame);
        labelLastLogin_2->setObjectName(QStringLiteral("labelLastLogin_2"));
        labelLastLogin_2->setGeometry(QRect(344, 110, 401, 41));
        labelLastLogin_2->setFont(font1);
        labelLastLogin_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(Tilitapahtumat);

        QMetaObject::connectSlotsByName(Tilitapahtumat);
    } // setupUi

    void retranslateUi(QWidget *Tilitapahtumat)
    {
        Tilitapahtumat->setWindowTitle(QApplication::translate("Tilitapahtumat", "Form", Q_NULLPTR));
        buttonKirjauduUlos->setText(QApplication::translate("Tilitapahtumat", "Back", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QApplication::translate("Tilitapahtumat", "transactions", Q_NULLPTR));
        labelBalance->setText(QString());
        pushButton->setText(QApplication::translate("Tilitapahtumat", "Show Transactions", Q_NULLPTR));
        nextPageButton->setText(QApplication::translate("Tilitapahtumat", "Next Page>", Q_NULLPTR));
        previousPageButton->setText(QApplication::translate("Tilitapahtumat", "<Previous Page", Q_NULLPTR));
        labelPageNumber->setText(QString());
        labelLastLogin->setText(QString());
        labelLastLogin_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tilitapahtumat: public Ui_Tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
