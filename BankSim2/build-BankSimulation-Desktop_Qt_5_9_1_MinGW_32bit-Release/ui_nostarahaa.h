/********************************************************************************
** Form generated from reading UI file 'nostarahaa.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTARAHAA_H
#define UI_NOSTARAHAA_H

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

class Ui_NostaRahaa
{
public:
    QFrame *frame;
    QPushButton *buttonNosta90;
    QPushButton *buttonNosta60;
    QPushButton *buttonNosta20;
    QLabel *label;
    QPushButton *buttonPalaaAlkuun;
    QPushButton *buttonNosta40;
    QPushButton *buttonSyotaSumma;
    QPushButton *buttonNosta140;
    QPushButton *buttonNosta240;

    void setupUi(QWidget *NostaRahaa)
    {
        if (NostaRahaa->objectName().isEmpty())
            NostaRahaa->setObjectName(QStringLiteral("NostaRahaa"));
        NostaRahaa->resize(800, 900);
        frame = new QFrame(NostaRahaa);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 801, 901));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        buttonNosta90 = new QPushButton(frame);
        buttonNosta90->setObjectName(QStringLiteral("buttonNosta90"));
        buttonNosta90->setGeometry(QRect(560, 180, 181, 111));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        buttonNosta90->setFont(font);
        buttonNosta60 = new QPushButton(frame);
        buttonNosta60->setObjectName(QStringLiteral("buttonNosta60"));
        buttonNosta60->setGeometry(QRect(60, 490, 181, 111));
        buttonNosta60->setFont(font);
        buttonNosta20 = new QPushButton(frame);
        buttonNosta20->setObjectName(QStringLiteral("buttonNosta20"));
        buttonNosta20->setGeometry(QRect(60, 190, 181, 111));
        buttonNosta20->setFont(font);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 30, 351, 51));
        label->setFont(font);
        buttonPalaaAlkuun = new QPushButton(frame);
        buttonPalaaAlkuun->setObjectName(QStringLiteral("buttonPalaaAlkuun"));
        buttonPalaaAlkuun->setGeometry(QRect(60, 700, 301, 141));
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        buttonPalaaAlkuun->setFont(font1);
        buttonNosta40 = new QPushButton(frame);
        buttonNosta40->setObjectName(QStringLiteral("buttonNosta40"));
        buttonNosta40->setGeometry(QRect(60, 340, 181, 111));
        buttonNosta40->setFont(font);
        buttonSyotaSumma = new QPushButton(frame);
        buttonSyotaSumma->setObjectName(QStringLiteral("buttonSyotaSumma"));
        buttonSyotaSumma->setGeometry(QRect(440, 700, 301, 141));
        buttonSyotaSumma->setFont(font1);
        buttonNosta140 = new QPushButton(frame);
        buttonNosta140->setObjectName(QStringLiteral("buttonNosta140"));
        buttonNosta140->setGeometry(QRect(560, 340, 181, 111));
        buttonNosta140->setFont(font);
        buttonNosta240 = new QPushButton(frame);
        buttonNosta240->setObjectName(QStringLiteral("buttonNosta240"));
        buttonNosta240->setGeometry(QRect(560, 490, 181, 111));
        buttonNosta240->setFont(font);

        retranslateUi(NostaRahaa);

        QMetaObject::connectSlotsByName(NostaRahaa);
    } // setupUi

    void retranslateUi(QWidget *NostaRahaa)
    {
        NostaRahaa->setWindowTitle(QApplication::translate("NostaRahaa", "Form", Q_NULLPTR));
        buttonNosta90->setText(QApplication::translate("NostaRahaa", "90\342\202\254", Q_NULLPTR));
        buttonNosta60->setText(QApplication::translate("NostaRahaa", "60\342\202\254", Q_NULLPTR));
        buttonNosta20->setText(QApplication::translate("NostaRahaa", "20\342\202\254", Q_NULLPTR));
        label->setText(QApplication::translate("NostaRahaa", "NOSTA RAHAA", Q_NULLPTR));
        buttonPalaaAlkuun->setText(QApplication::translate("NostaRahaa", "Palaa alkuun", Q_NULLPTR));
        buttonNosta40->setText(QApplication::translate("NostaRahaa", "40\342\202\254", Q_NULLPTR));
        buttonSyotaSumma->setText(QApplication::translate("NostaRahaa", "Sy\303\266t\303\244 summa", Q_NULLPTR));
        buttonNosta140->setText(QApplication::translate("NostaRahaa", "140\342\202\254", Q_NULLPTR));
        buttonNosta240->setText(QApplication::translate("NostaRahaa", "240\342\202\254", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NostaRahaa: public Ui_NostaRahaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTARAHAA_H
