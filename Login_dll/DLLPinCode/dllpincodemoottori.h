#ifndef DLLPINCODEMOOTTORI_H
#define DLLPINCODEMOOTTORI_H

#include <QDialog>
#include <QValidator>
#include <QTimer>


namespace Ui {
class DLLPinCodeMoottori;
}
class DLLPinCodeMoottori : public QDialog
{
    Q_OBJECT


public:
    explicit DLLPinCodeMoottori(QWidget *parent = nullptr);
    ~DLLPinCodeMoottori();

    void buttonPress(int buttonPressed);

signals:
    void sendPin(QString);

private slots:
    void on_pinLine_textChanged(const QString &arg1);
    void pinTimeOut();
    void receivePinStatus(bool);

    void on_buttonNum1_clicked();
    void on_buttonNum2_clicked();
    void on_buttonNum3_clicked();
    void on_buttonNum4_clicked();
    void on_buttonNum5_clicked();
    void on_buttonNum6_clicked();
    void on_buttonNum7_clicked();
    void on_buttonNum8_clicked();
    void on_buttonNum9_clicked();
    void on_buttonNum0_clicked();
    void on_buttonClear_clicked();
    void on_buttonEnter_clicked();

private:
    Ui::DLLPinCodeMoottori *ui;
    int length;
    QString pin;

    int pinTime;
    QTimer *pinTimer;

};

#endif // DLLPINCODEMOOTTORI_H
