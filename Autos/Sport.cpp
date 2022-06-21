//
// Created by User on 6/1/22.
//

#include "Classes/Autos_Clasees/Sport.h"
#include <iostream>
using namespace::std;


Sport::Sport(){
    price = KMxG = Mileage = 0;
    brand = license_plate = "-";
    state = true;
    IDUserProperty = "Dont have id user property once\n";
}

Sport::~Sport(){
    //DTOR
}

void Sport::Price(){
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
    state = false;
}

void Sport::setIDUserProperty() {
    cout << "Input user's ID who wants to rent: ";
    cin>> IDUserProperty;
}

long Sport::getPrice(){
    return price;
}

string Sport::getLicensePlate(){
    return license_plate;
}

long Sport::getKMxG(){
    return KMxG;
}

long Sport::getMileage(){
    return Mileage;
}

string  Sport::getIDUserProperty() {
    return IDUserProperty;
}

string Sport::getBrand(){
    return brand;
}

string Sport::getState(){
    if(state == 1){
        return "Available";
    } else{
        return  "Out of stock";
    }
}
