#include "selfdelgui.h"
#include "ui_selfdelgui.h"

SelfDelGUI::SelfDelGUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelfDelGUI)
{
    ui->setupUi(this);
}

SelfDelGUI::~SelfDelGUI()
{
    delete ui;
}
