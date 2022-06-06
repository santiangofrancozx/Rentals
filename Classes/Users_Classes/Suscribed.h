//
// Created by User on 6/1/22.
//

#ifndef PROYECTOX_INVITED_H
#define PROYECTOX_INVITED_H
#include "User.h"
using namespace::std;

class Suscribed: public User{
private:
    long AccountNumber, code;
public:
    Suscribed();
    virtual ~Suscribed();
    //stters
    void setAccountNumber();
    void setCode();
    //getters
    long getAccountNumber();
    long getCode();
};
//chichona


#endif //PROYECTOX_INVITED_H
