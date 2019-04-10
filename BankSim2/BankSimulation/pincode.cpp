#include "pincode.h"
#include "ui_pincode.h"



PinCode::PinCode(QWidget *MainWindow) :
    QWidget(MainWindow),
    ui(new Ui::PinCode)
{
    ui->setupUi(this);

    QPalette pal = palette();
    ui->lineEdit->setMaxLength(4);
    pal.setColor(QPalette::Background, Qt::green);      //asetetaan ENTER-nappi vihreän väriseksi
    ui->buttonEnter->setAutoFillBackground(true);
    ui->buttonEnter->setPalette(pal);
    ui->buttonEnter->setStyleSheet("background-color:green;");
    ui->buttonEnter->show();

    pal.setColor(QPalette::Background, Qt::yellow);     //asetetaan CLEAR-nappi keltaisen väriseksi
    ui->buttonClear->setAutoFillBackground(true);
    ui->buttonClear->setPalette(pal);
    ui->buttonClear->setStyleSheet("background-color:yellow;");
    ui->buttonClear->show();
}

PinCode::~PinCode()
{
    delete ui;
}

void PinCode::on_button1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "1");
}

void PinCode::on_button2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "2");
}

void PinCode::on_button3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "3");
}

void PinCode::on_button4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "4");
}

void PinCode::on_button5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "5");
}

void PinCode::on_button6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "6");
}

void PinCode::on_button7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "7");
}

void PinCode::on_button8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "8");
}

void PinCode::on_button9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "9");
}

void PinCode::on_button0_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "0");
}

void PinCode::on_buttonClear_clicked() //poista numerot kentästä -nappi
{
    ui->lineEdit->setText("");
}

void PinCode::on_buttonEnter_clicked() //syötä PIN-Koodi -nappi
{
    ui->page->hide();
    ui->page_2->hide();

    objectMainMenu = new MainMenu(this);
    objectMainMenu->show();
}

void PinCode::on_buttonBack_clicked() //palaa alkuun -nappi
{
    emit sigBackToMainWindow();
}
