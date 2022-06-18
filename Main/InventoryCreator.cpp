#include <iostream>
#include "fstream"
#include "Classes/Autos_Clasees/Comfort.h"
#include "Classes/Autos_Clasees/Sport.h"
#include "Classes/Autos_Clasees/Work.h"
using namespace::std;


vector <Sport> vecSport;
vector <Comfort> vecComfort;
vector <Work> vecWork;

//AGREGAR ITEMS
void addComfort(){
    Comfort obj1;
    //string state;

    obj1.setPrice();
    obj1.setLicensePlate();
    obj1.setKMxG();
    obj1.setMileage();
    obj1.setBrand();
    obj1.setNumberSeats();
    obj1.setNumberAirBag();
    vecComfort.push_back(obj1); //toda la informacion la almacena en un vector
    system("clear");
}

void addSport(){
    Sport obj2;

    obj2.setPrice();
    obj2.setLicensePlate();
    obj2.setKMxG();
    obj2.setMileage();
    obj2.setBrand();
    vecSport.push_back(obj2);
    system("clear");
}

void addWork(){
    Work obj3;

    obj3.setPrice();
    obj3.setLicensePlate();
    obj3.setKMxG();
    obj3.setMileage();
    obj3.setBrand();
    obj3.setCantTons();
    obj3.setTrailer();
    vecWork.push_back(obj3);
    system("clear");
}

//VER INVENTARIO EN ARCHIVO CSV
void checkInventory(){
    cout<< "Comfort inventory\n\n";
    for (int i = 0; i < vecComfort.size(); ++i) {
        cout<< vecComfort[i].getBrand()
            << " " << vecComfort[i].getLicensePlate()
            << " " << vecComfort[i].getPrice()
            << " " << vecComfort[i].getState()
            << endl;
    }
    cout<< "Sport inventory\n\n";
    for (int j = 0; j < vecSport.size(); ++j) {
        cout<< vecSport[j].getBrand()
            << " " << vecSport[j].getLicensePlate()
            << " " << vecSport[j].getPrice()
            << " " << vecSport[j].getState()
            << endl;
    }
    cout<< "Work inventory\n\n";
    for (int k = 0; k < vecWork.size(); ++k) {
        cout<< vecWork[k].getBrand()
            << " " << vecWork[k].getLicensePlate()
            << " " << vecWork[k].getPrice()
            << " " << vecWork[k].getState()
            << endl;
    }
    system("clear");
}

void rentCar(){
    int opc;
    do {
        cout << "Welcome, please select what type of car do u want to rent: \n";
        cout << "1. Comfort\n";
        cout << "2. Sport\n";
        cout << "3. Work\n";
        cout << "0. Go back\n";
        cout << "-> ";
        cin >> opc;
        switch (opc) {
            case 1: {
                string plate;
                cout << "This is the Comfort cars in inventory\n";
                for (int i = 0; i < vecComfort.size(); ++i) {
                    cout << vecComfort[i].getBrand() << " "
                         << vecComfort[i].getLicensePlate() << " "
                         << vecComfort[i].getState() << " "
                         << vecComfort[i].getPrice() << endl;
                }
                cout << "Select one writing his license plate: ";
                cin >> plate;
                for (int i = 0; i < vecComfort.size(); ++i) {
                    if (plate == vecComfort[i].getLicensePlate()) {
                        cout << "Item specs: \n";
                        cout << "---------- \n";
                        cout << "License Plate:  " << vecComfort[i].getLicensePlate() << endl;
                        cout << "brand: " << vecComfort[i].getBrand() << endl;
                        cout << "Price: " << vecComfort[i].getPrice() << endl;
                        cout << "Do " << vecComfort[i].getKMxG() << " Kilometers by gallon\n";
                        cout << "Have " << vecComfort[i].getMileage() << " millage\n";
                        cout << "Have " << vecComfort[i].getNumberAirBag() << " Airbags\n";
                        cout << "Have " << vecComfort[i].getNumberSeats() << " seats\n";
                        int opcR;
                        cout << "If u want to rent type 1, for go back type 0: ";
                        cin >> opcR;
                        if (opcR == 0) {
                            cout << "Going back...\n";
                            break;
                        } else {
                            if(vecComfort[i].getState() == "Available") {
                                vecComfort[i].setState();
                                //generateBill();
                                break;
                            } else {
                                cout << "Sorry, this item is out of stock\n";
                                break;
                            }
                        }

                    }else {
                        cout << "I can't find that license plate, please try again\n";
                        break;
                    }

                }
                break;
            }
            case 2:{
                string plate;
                cout << "This is the Sport cars in inventory\n";
                for (int i = 0; i < vecSport.size(); ++i) {
                    cout << vecSport[i].getBrand() << " "
                         << vecSport[i].getLicensePlate() << " "
                         << vecSport[i].getState() << " "
                         << vecSport[i].getPrice() << endl;
                }
                cout << "Select one writing his license plate: ";
                cin >> plate;
                for (int i = 0; i < vecSport.size(); ++i) {
                    if (plate == vecSport[i].getLicensePlate()) {
                        cout << "Item specs: \n";
                        cout << "---------- \n";
                        cout << "License Plate:  " << vecSport[i].getLicensePlate() << endl;
                        cout << "brand: " << vecSport[i].getBrand() << endl;
                        cout << "Price: " << vecSport[i].getPrice() << endl;
                        cout << "Do " << vecSport[i].getKMxG() << " Kilometers by gallon\n";
                        cout << "Have " << vecSport[i].getMileage() << " millage\n";
                        int opcR;
                        cout << "If u want to rent type 1, for go back type 0: ";
                        cin >> opcR;
                        if (opcR == 0) {
                            cout << "Going back...\n";
                            break;
                        } else {
                            if(vecSport[i].getState() == "Available") {
                                vecSport[i].setState();
                                //generateBill();
                                break;
                            } else {
                                cout << "Sorry, this item is out of stock\n";
                                break;
                            }
                        }

                    }else {
                        cout << "I can't find that license plate, please try again\n";
                        break;
                    }

                }
                break;
            }
            case 3:{
                string plate;
                cout << "This is the Work cars in inventory\n";
                for (int i = 0; i < vecWork.size(); ++i) {
                    cout << vecWork[i].getBrand() << " "
                         << vecWork[i].getLicensePlate() << " "
                         << vecWork[i].getState() << " "
                         << vecWork[i].getPrice() << endl;
                }
                cout << "Select one writing his license plate: ";
                cin >> plate;
                for (int i = 0; i < vecWork.size(); ++i) {
                    if (plate == vecWork[i].getLicensePlate()) {
                        cout << "Item specs: \n";
                        cout << "---------- \n";
                        cout << "License Plate:  " << vecWork[i].getLicensePlate() << endl;
                        cout << "brand: " << vecWork[i].getBrand() << endl;
                        cout << "Price: " << vecWork[i].getPrice() << endl;
                        cout << "Do " << vecWork[i].getKMxG() << " Kilometers by gallon\n";
                        cout << "Have " << vecWork[i].getMileage() << " millage\n";
                        cout << "Have trailer: " << vecWork[i].getTrailer() << endl;
                        cout << "Capacity in tons: " << vecWork[i].getCantTons() << endl;
                        cout << "Have " << vecWork[i].getNumberSeats() << " seats\n";
                        cout << "Have " << vecWork[i].getNumberAirBag() << " airbags\n";
                        int opcR;
                        cout << "If u want to rent type 1, for go back type 0: ";
                        cin >> opcR;
                        if (opcR == 0) {
                            cout << "Going back...\n";
                            break;
                        } else {
                            if(vecWork[i].getState() == "Available") {
                                vecWork[i].setState();
                                //generateBill();
                                break;
                            } else {
                                cout << "Sorry, this item is out of stock";
                                break;
                            }
                        }

                    }else {
                        cout << "I can't find that license plate, please try again\n";
                        break;
                    }

                }
                break;
            }
            case 0: break;
            default:
                cout << "Wrong option, please try again\n";
                break;
        }
    }while(opc != 0);
    system("pause");
    system("clear");
}

void rentedItems(){
    cout<< "-----------------\n";
    cout<< "Comfort inventory\n";
    cout<< "-----------------\n";
    for (int i = 0; i < vecComfort.size(); ++i) {
        if(vecComfort[i].getState() != "Available") {
            cout << vecComfort[i].getBrand()
                 << " " << vecComfort[i].getLicensePlate()
                 << " " << vecComfort[i].getPrice()
                 << " " << vecComfort[i].getState()
                 << endl;
            break;
        } else {
            cout << "No comfort cars rented\n";
            break;
        }
    }
    cout<< "---------------\n";
    cout<< "Sport inventory\n";
    cout<< "---------------\n";
    for (int j = 0; j < vecSport.size(); ++j) {
        if(vecSport[j].getState() != "Available") {
            cout << vecSport[j].getBrand()
                 << " " << vecSport[j].getLicensePlate()
                 << " " << vecSport[j].getPrice()
                 << " " << vecSport[j].getState()
                 << endl;
            break;
        } else {
            cout << "No sport cars rented\n";
            break;
        }
    }
    cout<< "--------------\n";
    cout<< "Work inventory\n";
    cout<< "--------------\n";
    for (int k = 0; k < vecWork.size(); ++k) {
        if(vecWork[k].getState() != "Available") {
            cout << vecWork[k].getBrand()
                 << " " << vecWork[k].getLicensePlate()
                 << " " << vecWork[k].getPrice()
                 << " " << vecWork[k].getState()
                 << endl;
            break;
        } else{
            cout << "No work cars rented\n";
            break;
        }
    }
}