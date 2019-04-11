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

signals:
    void sendPin(QString);

private slots:
    void on_pinLine_textChanged(const QString &arg1);
    void pinTimeOut();
    void receivePinStatus(bool);

private:
    Ui::DLLPinCodeMoottori *ui;
    int length;
    QString pin;

    int pinTime;
    QTimer *pinTimer;

};

#endif // DLLPINCODEMOOTTORI_H
