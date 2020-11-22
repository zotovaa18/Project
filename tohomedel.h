#ifndef TOHOMEDEL_H
#define TOHOMEDEL_H
#include "deliverybase.h"


class ToHomeDel: DeliveryBase
{
public:
    ToHomeDel();

    void setCity(QString cityHD);
    QString getStreet() const;
    void setStreet(QString streetHD);
    int getHouse() const;
    void setHouse(int houseHD);
    int getFlat() const;
    void setFlat(int flatHD);
    int getIndex() const;
    void setIntex(int indexHD);

private:
    QString cityHD, streetHD;
    int houseHD, flatHD, indexHD;


};

#endif // TOHOMEDEL_H
