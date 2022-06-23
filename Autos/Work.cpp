//
// Created by User on 6/1/22.
//

#include "Classes/Autos_Clasees/Work.h"
#include <iostream>
using namespace::std;

Work::Work() {
    cantTons = 0;
    trailer = true;
}

Work::~Work() {
    //DTOR
}


void Work::setCantTons(){
    cout<<"Input number of tons: ";
    cin>>cantTons;
}

void Work::setTrailer(){
    cout<<"Has it trailer(1. yes, 2. no): ";
    cin>>trailer;
}

void Work::Price() {
    cout<<"Set price: ";
    cin >> subtotal;
    price = (subtotal * 0.75) + subtotal;
}

int Work::getCantTons(){
    return cantTons;
}

bool Work::getTrailer(){
    return trailer;
}
