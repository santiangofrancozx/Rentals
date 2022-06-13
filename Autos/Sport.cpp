//
// Created by User on 6/1/22.
//

#include "Classes/Autos_Clasees/Sport.h"
#include <iostream>
using namespace::std;


Sport::Sport(){
    price = license_plate = KMxG = Mileage = 0;
    brand = "-";
    state = true;
}

Sport::~Sport(){
    //DTOR
}

void Sport::setPrice(){
    cout<<"Set price: ";
    cin>>price;
}

void Sport::setLicensePlate(){
    cout<<"Set license plate: ";
    cin>> license_plate;
}

void Sport::setKMxG(){
    cout<<"Input miles per galon: ";
    cin>>KMxG;
}

void Sport::setMileage(){
    cout<<"Input mileage: ";
    cin>>Mileage;
}
//amen
void Sport::setBrand(){
    fflush(stdin);
    cout<<"Input brand: ";
    getline(cin, brand);
}

void Sport::setState(){
    cout<<"Current state: ";
    cin>>state;
}

long Sport::getPrice(){
    return price;
}

long Sport::getLicensePlate(){
    return license_plate;
}

long Sport::getKMxG(){
    return KMxG;
}

long Sport::getMileage(){
    return Mileage;
}

string Sport::getBrand(){
    return brand;
}

bool Sport::getState(){
    return state;
}