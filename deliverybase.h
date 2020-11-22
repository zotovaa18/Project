#ifndef DELIVERYBASE_H
#define DELIVERYBASE_H
#include <QString>

class DeliveryBase
{
protected:
    QString nameD, surnameD, telD, mailD;
public:
    DeliveryBase();
    DeliveryBase(QString nameD,QString surnameD,QString telD,QString mailD);
    ~DeliveryBase();

    QString getNameD() const;
    void setNameD(QString nameD);

    QString getSurnameD() const;
    void setSurnameD(QString surname);

    QString getTelD() const;
    void setTelD(QString telD);

    QString getMailD() const;
    void setMailD(QString mailD);

    virtual int type() const;
    virtual double price() const;

};

#endif // DELIVERYBASE_H
