#ifndef TILINSALDO_H
#define TILINSALDO_H

#include <QDialog>
#include <QWidget>


namespace Ui {
class TilinSaldo;
}

class TilinSaldo : public QWidget
{
    Q_OBJECT

public:
    explicit TilinSaldo(QWidget *MainMenu);
    ~TilinSaldo();

signals:
    void sigPalaaTakaisin();

public slots:
    void takaisin();

private slots:
    void on_buttonKirjauduUlos_clicked();

private:
    Ui::TilinSaldo *ui;

};

#endif // TILINSALDO_H
