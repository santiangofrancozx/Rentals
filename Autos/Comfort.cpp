//
// Created by User on 6/1/22.
//
// si sirvio prro

#include "Classes/Autos_Clasees/Comfort.h"
#include <iostream>
using namespace::std;

Comfort::Comfort() {
    numberSeats = numberAirBag = 0;
    subtotal = 0;
}

Comfort::~Comfort() {
    //DTOR
}

void Comfort::setNumberSeats(){
    cout<<"Number of seats: ";
    cin>>numberSeats;
}

void Comfort::setNumberAirBag(){
    cout<<"Number of air bags: ";
    cin>>numberAirBag;
}

void Comfort::Price(){
    cout<<"Set price: ";
    cin >> subtotal;
    price = (subtotal * 0.5) + subtotal;
}

int Comfort::getNumberSeats(){
    return numberSeats;
}

int Comfort::getNumberAirBag(){
    return numberAirBag;
}
