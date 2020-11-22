#include "registration.h"
#include "ui_registration.h"
#include <iostream>

Registration::Registration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
}

Registration::~Registration()
{
    delete ui;
}

void Registration::saveNew(Person &per)
{
    per.setName(ui->NameRE->text());
    per.setSurname(ui->SurnameRE->text());
    per.setTel(ui->TelRE->text());
    per.setMail(ui->MailRE->text());
    per.setCity(ui->CityRE->text());
    per.setStreet(ui->StreetRE->text());
    per.setHouse(ui->HouseRE->text().toInt());
    per.setFlat(ui->FlatRE->text().toInt());
    per.setIntex(ui->IndexRE->text().toInt());

    per.setNamecard(ui->NamecardRE->text());
    per.setNumber(ui->NumberRE->text());
    per.setDate(ui->DateRE->text());
    per.setCvc(ui->CVCRE->text().toInt());

}


void Registration::on_pushButton_clicked()
{
    Person* per = new Person();
    saveNew(*per);
    PC.addPerson(*per);
    std::cout<<PC.size();
    this->close();
    emit firstWindow();
}
