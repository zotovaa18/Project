#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <QString>

class Person
{
public:
    Person();
    Person (QString name, QString surname, QString telephone,
            QString mail, QString city, QString street,
            int house, int flat, int index);



    QString getName() const;
    void setName(QString name);
    QString getSurname() const;
    void setSurname(QString surname);
    QString getTel() const;
    void setTel(QString telephone);
    QString getMail() const;
    void setMail(QString mail);
    QString getCity() const;
    void setCity(QString city);
    QString getStreet() const;
    void setStreet(QString street);
    int getHouse() const;
    void setHouse(int house);
    int getFlat() const;
    void setFlat(int flat);
    int getIndex() const;
    void setIntex(int index);
    QString getNamecard() const;
    void setNamecard(QString namecard);
    QString getNumber() const;
    void setNumber(QString number);
    QString getDate() const;
    void setDate(QString date);
    int getCvc() const;
    void setCvc(int cvc);


private:
    QString name, surname, telephone, mail;
    QString city, street;
    int house, flat, index;

    QString namecard, number, date;
    int cvc;
};

#endif // PERSON_H

