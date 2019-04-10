#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
<<<<<<< HEAD
<<<<<<< HEAD
#include "C:\Users\samij\Desktop\BankSim\BankSim100\DLLMySql\dllmysql.h"
=======
=======
#include <QTableView>
>>>>>>> master
#include "C:\Users\samij\Desktop\BankSim\BankSim100\DLLMySql\databaseconnection.h"
>>>>>>> master

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
};

#endif // MAINWINDOW_H
