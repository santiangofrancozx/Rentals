//
// Created by User on 6/1/22.
//

#ifndef PROYECTOX_INVITED_H
#define PROYECTOX_INVITED_H
#include "User.h"
using namespace::std;

class Subscribed: public User{
private:
    long code;
public:
    Subscribed();
    virtual ~Subscribed();
    //stters
    void setCode();
    //getters
    long getCode();
};
//chichona


#endif //PROYECTOX_INVITED_H
