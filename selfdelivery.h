#ifndef SELFDELIVERY_H
#define SELFDELIVERY_H
#include "deliverybase.h"
#include "QString"

class SelfDelivery : public DeliveryBase
{
public:
    SelfDelivery();
    SelfDelivery(QString adressSD);
    ~SelfDelivery();

    QString getAdressSD() const;
    void setAdressSD(QString adressSD);

    virtual int type() const;
    virtual double price() const;

private:
    QString adressSD;
};

#endif // SELFDELIVERY_H
