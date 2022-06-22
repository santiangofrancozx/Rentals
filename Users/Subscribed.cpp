//
// Created by User on 6/1/22.
//
#include <iostream>
using namespace::std;

#include "Classes/Users_Classes/Subscribed.h"

Subscribed::Subscribed(){
    code = 0;
}

Subscribed::~Subscribed(){
    //DTOR
}

void Subscribed::setCode(){
    cout<<"Input special code: ";
    cin>>code;
}

long Subscribed::getCode(){
    return code;
}