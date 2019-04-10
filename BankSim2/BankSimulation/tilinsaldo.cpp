#include "tilinsaldo.h"
#include "ui_tilinsaldo.h"


TilinSaldo::TilinSaldo(QWidget *MainMenu) :
    QWidget(MainMenu),
    ui(new Ui::TilinSaldo)
{
    ui->setupUi(this);
}

TilinSaldo::~TilinSaldo()
{
    delete ui;
}

void TilinSaldo::on_buttonKirjauduUlos_clicked() //*palaa takaisin nappi, ei kirjaudu ulos
{
    ui->widget->hide();
    takaisin();
}


void TilinSaldo::takaisin()
{
    emit sigPalaaTakaisin();
}
