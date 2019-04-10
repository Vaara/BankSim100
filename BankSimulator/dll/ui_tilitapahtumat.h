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
    QLabel *label_3;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QPushButton *nextPageButton;
    QPushButton *previousPageButton;

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
        label_2->setGeometry(QRect(50, 150, 211, 51));
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
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(540, 160, 201, 31));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 150, 93, 28));
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(50, 200, 701, 471));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
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

        retranslateUi(Tilitapahtumat);

        QMetaObject::connectSlotsByName(Tilitapahtumat);
    } // setupUi

    void retranslateUi(QWidget *Tilitapahtumat)
    {
        Tilitapahtumat->setWindowTitle(QApplication::translate("Tilitapahtumat", "Form", Q_NULLPTR));
        buttonKirjauduUlos->setText(QApplication::translate("Tilitapahtumat", "Back", Q_NULLPTR));
        label_2->setText(QApplication::translate("Tilitapahtumat", "Balance:", Q_NULLPTR));
        label->setText(QApplication::translate("Tilitapahtumat", "transactions", Q_NULLPTR));
        label_3->setText(QApplication::translate("Tilitapahtumat", "00,00\342\202\254", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Tilitapahtumat", "PushButton", Q_NULLPTR));
        nextPageButton->setText(QApplication::translate("Tilitapahtumat", "Next Page>", Q_NULLPTR));
        previousPageButton->setText(QApplication::translate("Tilitapahtumat", "<Previous Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Tilitapahtumat: public Ui_Tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
