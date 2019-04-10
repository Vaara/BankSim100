#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QDialog>
#include <QWidget>
#include "nostaomasumma.h"


namespace Ui {
class NostaRahaa;
}

class NostaRahaa : public QWidget
{
    Q_OBJECT

public:
    explicit NostaRahaa(QWidget *MainMenu);
    ~NostaRahaa();
signals:
    void sigPalaaTakaisin();



private slots:
    void on_buttonSyotaSumma_clicked();

    void on_buttonPalaaAlkuun_clicked();

public slots:
    void takaisin();
    void sloPalaaRahanNostoon(); //palataan oman summan syötöstä takaisin rahan noston päänäkymään

private:
    Ui::NostaRahaa *ui;
    NostaOmaSumma *objectNostaOmaSumma;

};

#endif // NOSTARAHAA_H
