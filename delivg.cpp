#include "delivg.h"
#include "ui_delivg.h"

DelivG::DelivG(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DelivG)
{
    ui->setupUi(this);
    sd = new SelfDelGUI();
}

DelivG::~DelivG()
{
    delete ui;
}

void DelivG::on_NextD_clicked()
{
    if (ui->pickup->isChecked())
    {
        sd->show();
    }
    else
        if (ui->tohome->isChecked())
        {

        }

}
