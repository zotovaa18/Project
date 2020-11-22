#include "selfdelivery.h"

SelfDelivery::SelfDelivery() : DeliveryBase()
{
    adressSD = "-";
}

SelfDelivery::SelfDelivery(QString adressSD) : DeliveryBase(nameD, surnameD, telD, mailD)
{
    setNameD(nameD);
    setSurnameD(surnameD);
    setTelD(telD);
    setMailD(mailD);
    setAdressSD(adressSD);
}

QString SelfDelivery::getAdressSD() const
{
    return this->adressSD;
}

void SelfDelivery::setAdressSD(QString adressSD) {
    if (adressSD != "") {
        this->adressSD = adressSD;
    }
    else
        this->adressSD = "-";
}

int SelfDelivery::type() const {
    return 1;
}

double SelfDelivery::price() const {
    return 150;
}
