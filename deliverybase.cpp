#include "deliverybase.h"

DeliveryBase::DeliveryBase()
{
    nameD = "unknown";
    surnameD = "unknown";
    telD = "00000000000";
    mailD = "xxx@xxx";
}



DeliveryBase::DeliveryBase(QString nameD, QString surnameD, QString telD, QString mailD) {
    this->nameD = nameD;
    this->surnameD = surnameD;
    this->telD = telD;
    this->mailD = mailD;
}

DeliveryBase::~DeliveryBase() {
}

QString DeliveryBase::getNameD() const {
    return this->nameD;
}

void DeliveryBase::setNameD(QString nameD) {
    if (nameD != "") {
        this->nameD = nameD;
    }
    else
        this->nameD = "unknown";
}

QString DeliveryBase::getSurnameD() const {
    return this->surnameD;
}

void DeliveryBase::setSurnameD(QString surnameD) {
    if (surnameD != "") {
        this->surnameD = surnameD;
    }
    else
        this->surnameD = "unknown";
}

QString DeliveryBase::getTelD() const {
    return this->telD;
}

void DeliveryBase::setTelD(QString telD) {
    if (telD != "") {
        this->telD = telD;
    }
    else
        this->telD = "00000000000";
}

QString DeliveryBase::getMailD() const {
    return this->mailD;
}

void DeliveryBase::setMailD(QString mailD) {
    if (mailD != "") {
        this->mailD = mailD;
    }
    else
        this->mailD = "xxx@xxx";
}


int DeliveryBase::type() const {
    return 0;
}

double DeliveryBase::price() const {
    return 0;
}
