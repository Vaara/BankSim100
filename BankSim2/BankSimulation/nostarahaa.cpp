#include "nostarahaa.h"
#include "ui_nostarahaa.h"


NostaRahaa::NostaRahaa(QWidget *MainMenu) :
    QWidget(MainMenu),
    ui(new Ui::NostaRahaa)
{
    ui->setupUi(this);

    objectNostaOmaSumma = new NostaOmaSumma(this);
    objectNostaOmaSumma->hide();

    connect(objectNostaOmaSumma, SIGNAL(sigPalaaRahanNostoon()), this, SLOT(sloPalaaRahanNostoon()));
}

NostaRahaa::~NostaRahaa()
{
    delete ui;
}

void NostaRahaa::on_buttonSyotaSumma_clicked() //syötä oma summa -nappi
{
    ui->frame->hide();
    objectNostaOmaSumma->show();
}


void NostaRahaa::on_buttonPalaaAlkuun_clicked() //palaa takaisin -nappi
{
    ui->frame->hide();
    takaisin();
}

void NostaRahaa::takaisin()
{
    emit sigPalaaTakaisin(); //Nosta rahaa -näkymästä takaisin päävalikkoon (SIGNAL)
}

void NostaRahaa::sloPalaaRahanNostoon() //Oma summa -näkymästä takaisin Nosta rahaa -näkymään (SLOT)
{
    delete objectNostaOmaSumma;
    objectNostaOmaSumma = nullptr;

    objectNostaOmaSumma = new NostaOmaSumma(this);

    connect(objectNostaOmaSumma, SIGNAL(sigPalaaRahanNostoon()), this, SLOT(sloPalaaRahanNostoon()));

    ui->frame->show();
}






