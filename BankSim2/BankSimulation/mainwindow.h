#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
//#include <QStackedWidget>
#include <QWidget>
#include "pincode.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void backVoid();

public slots:
    void sloPalaaPaanakymaan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    PinCode *objectPinCode;


};

#endif // MAINWINDOW_H
