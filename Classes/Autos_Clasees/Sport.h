//
// Created by User on 6/1/22.
//

#ifndef PROYECTOX_SPORT_H
#define PROYECTOX_SPORT_H
#include <iostream>
using namespace::std;

class Sport{
private:
    long KMxG, Mileage;
    string brand, license_plate;
    bool state;
    string IDUserProperty;
public:
    long price;

    Sport();
    virtual ~Sport();

    virtual void Price();

    void setLicensePlate();
    void setKMxG();
    void setMileage();
    void setBrand();
    void setState();
    void setIDUserProperty();

    long getPrice();

    string getLicensePlate();
    long getKMxG();
    long getMileage();
    string getIDUserProperty();
    string getBrand();
    string getState();
};


#endif //PROYECTOX_SPORT_H
