#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    del = new DelivG();
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_OrderButton_clicked()
{
    del->show();
    this->close();
}
