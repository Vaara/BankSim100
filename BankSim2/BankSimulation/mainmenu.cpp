#include "mainmenu.h"
#include "ui_mainmenu.h"


MainMenu::MainMenu(QWidget *PinCode) :
    QWidget(PinCode),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);

    luoOliot(); //luodaan oliot

    objectNostaRahaa->hide();       //ilman näitä kaikki ui:t avautuu päällekkäin
    objectTilinSaldo->hide();
    objectTilitapahtumat->hide();

    connectSigAndSlo();//signaalien ja slottien connect rivit
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_buttonNostaRahaa_clicked() //Valikon Nosta rahaa -nappi
{
    ui->frame->hide();//piilotetaan päävalikko
    objectNostaRahaa->show();//avataan nosta rahaa -näkymä
}

void MainMenu::on_buttonTilinSaldo_clicked() //Valikon Tilin saldo -nappi
{
    ui->frame->hide();//piilotetaan päävalikko
    objectTilinSaldo->show();//avataan Tilin saldo -näkymä
}

void MainMenu::on_buttonTilitapahtumat_clicked() //Valikon Tilitapahtumat -nappi
{
    ui->frame->hide();//piilotetaan päävalikko
    objectTilitapahtumat->show();//avataan Tilitapahtumat -näkymä
}

void MainMenu::luoOliot() //luodaan oliot
{
    objectNostaRahaa = new NostaRahaa(this);
    objectTilinSaldo = new TilinSaldo(this);
    objectTilitapahtumat = new Tilitapahtumat(this);
}

void MainMenu::tuhoaOliot() //tuhotaan oliot
{
    delete objectTilitapahtumat;
    objectTilitapahtumat = nullptr;
    delete objectTilinSaldo;
    objectTilinSaldo = nullptr;
    delete objectNostaRahaa;
    objectNostaRahaa = nullptr;
}

void MainMenu::connectSigAndSlo() //signaalien ja slottine connect rivit
{
    connect(objectNostaRahaa, SIGNAL(sigPalaaTakaisin()), this, SLOT(sloPalaaTakaisinNostaRahaa()));
    connect(objectTilinSaldo, SIGNAL(sigPalaaTakaisin()), this, SLOT(sloPalaaTakaisinTilinSaldo()));
    connect(objectTilitapahtumat, SIGNAL(sigPalaaTakaisin()), this, SLOT(sloPalaaTakaisinTilitapahtumat()));
}


void MainMenu::on_buttonKirjauduUlos_clicked()
{

}

void MainMenu::sloPalaaTakaisinNostaRahaa()
{
    delete objectNostaRahaa;
    objectNostaRahaa = nullptr;
    objectNostaRahaa = new NostaRahaa(this);
    connect(objectNostaRahaa, SIGNAL(sigPalaaTakaisin()), this, SLOT(sloPalaaTakaisinNostaRahaa()));
    ui->frame->show();
}

void MainMenu::sloPalaaTakaisinTilinSaldo()
{
    delete objectTilinSaldo;
    objectTilinSaldo = nullptr;
    objectTilinSaldo = new TilinSaldo(this);
    connect(objectTilinSaldo, SIGNAL(sigPalaaTakaisin()), this, SLOT(sloPalaaTakaisinTilinSaldo()));
    ui->frame->show();
}

void MainMenu::sloPalaaTakaisinTilitapahtumat()
{
    delete objectTilitapahtumat;
    objectTilitapahtumat = nullptr;
    objectTilitapahtumat = new Tilitapahtumat(this);
    connect(objectTilitapahtumat, SIGNAL(sigPalaaTakaisin()), this, SLOT(sloPalaaTakaisinTilitapahtumat()));
    ui->frame->show();
}
