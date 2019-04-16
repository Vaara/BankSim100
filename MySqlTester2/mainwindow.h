#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QDebug>
#include "C:\Users\samij\Desktop\BankSim\BankSim100\DLLMySql\databaseconnection.h"
#include "doubledelegate.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    DatabaseConnection *connection;
    QTableView *view;
    DoubleDelegate *delegate;
};


#endif // MAINWINDOW_H
