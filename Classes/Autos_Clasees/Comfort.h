//
// Created by User on 6/1/22.
//

#ifndef PROYECTOX_COMFORT_H
#define PROYECTOX_COMFORT_H
#include "Sport.h"
#include <iostream>
using namespace::std;

class Comfort {
private:
    int numberSeats, numberAirBag;
public:
    Comfort();
    virtual ~Comfort();

    void setNumberSeats();
    void setNumberAirBag();

    int getNumberSeats();
    int getNumberAirBag();
};


#endif //PROYECTOX_COMFORT_H
