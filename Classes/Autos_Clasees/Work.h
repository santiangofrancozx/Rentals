//
// Created by User on 6/1/22.
//

#ifndef PROYECTOX_BUS_H
#define PROYECTOX_BUS_H
#include "Comfort.h"
#include <iostream>
using namespace::std;

class Work: public Comfort{
private:
    int cantTons;
    bool trailer;
public:
    Work();
    virtual ~Work();

    void setCantTons();
    void setTrailer();

    int getCantTons();
    bool getTrailer();
};


#endif //PROYECTOX_BUS_H
