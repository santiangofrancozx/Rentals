//
// Created by User on 6/1/22.
//

#ifndef PROYECTOX_SPORT_H
#define PROYECTOX_SPORT_H
#include <iostream>
using namespace::std;

class Sport{
private:
    long price, KMxG, Mileage;
    string brand, license_plate;
    bool state;
public:
    Sport();
    virtual ~Sport();

    void setPrice();
    void setLicensePlate();
    void setKMxG();
    void setMileage();
    void setBrand();
    void setState();

    long getPrice();
    string getLicensePlate();
    long getKMxG();
    long getMileage();
    string getBrand();
    string getState();
};


#endif //PROYECTOX_SPORT_H
