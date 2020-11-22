#include "person.h"

Person::Person()
{
    name = "unknown";
    surname = "unknown";
    telephone = "00000000000";
    mail = "xxx@xxx";
    city = "xxx";
    street = "xxx";
    house = 0;
    flat = 0;
    index = 100000;

    namecard = "xxxxx";
    number = "xxxxxxxxxxxx";
    date = "xxxx";
    cvc = 0;
}

Person::Person(QString name, QString surname, QString telephone,
               QString mail, QString city, QString street,
               int house, int flat, int index)
{
    setName(name);
    setSurname(surname);
    setTel(telephone);
    setMail(mail);
    setCity(city);
    setStreet(street);
    setHouse(house);
    setFlat(flat);
    setIntex(index);
}

QString Person::getName() const {
    return this->name;
}

void Person::setName(QString name) {
    if (name != "") {
        this->name = name;
    }
    else
        this->name = "unknown";
}

QString Person::getSurname() const {
    return this->surname;
}

void Person::setSurname(QString surname) {
    if (surname != "") {
        this->surname = surname;
    }
    else
        this->surname = "unknown";
}

QString Person::getTel() const {
    return this->telephone;
}

void Person::setTel(QString telephone) {
    if (telephone != "") {
        this->telephone = telephone;
    }
    else
        this->telephone = "00000000000";
}

QString Person::getMail() const {
    return this->mail;
}

void Person::setMail(QString mail) {
    if (mail != "") {
        this->mail = mail;
    }
    else
        this->mail = "xxx@xxx";
}

QString Person::getCity() const {
    return this->city;
}

void Person::setCity(QString city) {
    if (city != "") {
        this->city = city;
    }
    else
        this->city = "xxx";
}

QString Person::getStreet() const {
    return this->street;
}

void Person::setStreet(QString street) {
    if (street != "") {
        this->street = street;
    }
    else
        this->street = "xxx";
}

int Person::getHouse() const {
    return this->house;
}

void Person::setHouse(int house) {
    if (house >= 0) {
        this->house = house;
    }
    else
        this->house = 0;
}

int Person::getFlat() const {
    return this->flat;
}

void Person::setFlat(int flat) {
    if (flat >= 0) {
        this->flat = flat;
    }
    else
        this->flat = 0;
}

int Person::getIndex() const {
    return this->index;
}

void Person::setIntex(int index) {
    if (index >= 100000 && index <= 999999) {
        this->index = index;
    }
    else
        this->index = 100000;
}

QString Person::getNamecard() const {
    return this->namecard;
}

void Person::setNamecard(QString namecard) {
    if (namecard != "") {
        this->namecard = namecard;
    }
    else
        this->namecard = "xxxx";
}

QString Person::getNumber() const {
    return this->number;
}

void Person::setNumber(QString number) {
    if (number != "") {
        this->number = number;
    }
    else
        this->number = "xxxxxxxxxxxx";
}

QString Person::getDate() const {
    return this->date;
}

void Person::setDate(QString date) {
    if (date != "") {
        this->date = date;
    }
    else
        this->date = "xx/xx";
}

int Person::getCvc() const {
    return this->cvc;
}

void Person::setCvc(int cvc) {
    if (cvc >= 100 && cvc <= 999) {
        this->cvc = cvc;
    }
    else
        this->cvc = 0;
}


