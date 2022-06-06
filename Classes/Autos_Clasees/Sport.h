//
// Created by User on 6/1/22.
//

#ifndef PROYECTOX_SPORT_H
#define PROYECTOX_SPORT_H
#include <iostream>
using namespace::std;

class Sport {
private:
    long price, license_plate, KMxG, Mileage;
    string brand;
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
    long getLicensePlate();
    long getKMxG();
    long getMileage();
    string getBrand();
    bool getState();
};


#endif //PROYECTOX_SPORT_H
