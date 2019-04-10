#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>
#include <QWidget>
#include <QString>

#include "nostarahaa.h"
#include "tilinsaldo.h"
#include "tilitapahtumat.h"


namespace Ui {
class MainMenu;
}

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *PinCode);
    ~MainMenu();
    void tuhoaOliot(); //oliot tuhotaan
    void luoOliot(); //oliot luodaan
    void connectSigAndSlo(); //signaalien ja slottien connect käskyt


public slots:
    void sloPalaaTakaisinNostaRahaa();
    void sloPalaaTakaisinTilitapahtumat();
    void sloPalaaTakaisinTilinSaldo();


private slots:
    void on_buttonNostaRahaa_clicked(); //Valikon Nosta rahaa -nappi

    void on_buttonTilinSaldo_clicked(); //Valikon Tilin saldo - nappi

    void on_buttonTilitapahtumat_clicked(); //Valikon Tilitapahtumat -nappi


    void on_buttonKirjauduUlos_clicked(); //Valikon kirjaudu ulos -nappi(ei toiminnallisuutta)

private:
    Ui::MainMenu *ui;
    NostaRahaa *objectNostaRahaa;
    TilinSaldo *objectTilinSaldo;
    Tilitapahtumat *objectTilitapahtumat;
};

#endif // MAINMENU_H
