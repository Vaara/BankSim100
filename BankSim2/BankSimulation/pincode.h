#ifndef PINCODE_H
#define PINCODE_H

#include <QDialog>
#include <QWidget>
#include <QMainWindow>
#include "mainmenu.h"


namespace Ui {
class PinCode;
}

class PinCode : public QWidget
{
    Q_OBJECT

public:
    explicit PinCode(QWidget *MainWindow);
    ~PinCode();

signals:
    void sigBackToMainWindow();

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_button0_clicked();

    void on_buttonClear_clicked();

    void on_buttonEnter_clicked();

    void on_buttonBack_clicked();

private:
    Ui::PinCode *ui;
    MainMenu *objectMainMenu;
};

#endif // PINCODE_H
