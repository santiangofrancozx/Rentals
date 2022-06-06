//
// Created by User on 6/1/22.
//
#include <iostream>
using namespace::std;

#include "Classes/Users_Classes/Suscribed.h"

Suscribed::Suscribed(){
    AccountNumber = code = 0;
}

Suscribed::~Suscribed(){
    //DTOR
}

void Suscribed::setAccountNumber(){
    cout<<"Input your account number: ";
    cin>>AccountNumber;
}
void Suscribed::setCode(){
    cout<<"Input special code: ";
    cin>>code;
}

long Suscribed::getAccountNumber(){
    return AccountNumber;
}
long Suscribed::getCode(){
    return code;
}