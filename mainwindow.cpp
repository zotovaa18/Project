#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    windowReg = new Registration();
    connect(windowReg, &Registration::firstWindow, this, &MainWindow::show);
    windowMenu = new Menu();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_MenuGo_clicked()
{
    windowMenu->show();
    this->close();

}

void MainWindow::on_Regist_clicked()
{
    windowReg->show();
    this->close();

}

