#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "registration.h"
#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_MenuGo_clicked();

    void on_Regist_clicked();

private:
    Ui::MainWindow *ui;
    Registration *windowReg;
    Menu *windowMenu;
};
#endif // MAINWINDOW_H
