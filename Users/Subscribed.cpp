//
// Created by User on 6/1/22.
//
#include <iostream>
using namespace::std;

#include "Classes/Users_Classes/Subscribed.h"

Subscribed::Subscribed(){
    AccountNumber = code = 0;
}

Subscribed::~Subscribed(){
    //DTOR
}

void Subscribed::setAccountNumber(){
    cout<<"Input your account number: ";
    cin>>AccountNumber;
}
void Subscribed::setCode(){
    cout<<"Input special code: ";
    cin>>code;
}

long Subscribed::getAccountNumber(){
    return AccountNumber;
}
long Subscribed::getCode(){
    return code;
}