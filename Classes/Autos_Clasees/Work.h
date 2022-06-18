//
// Created by User on 6/1/22.
//

#ifndef PROYECTOX_BUS_H
#define PROYECTOX_BUS_H
#include "Comfort.h"
#include <iostream>
using namespace::std;

<<<<<<< HEAD
class Work: public Comfort{
=======
class Work: public Comfort {
>>>>>>> 903a29a9b54b210079ec2d5259df7e231c310393
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
