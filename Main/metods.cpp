#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "Classes/Autos_Clasees/Comfort.h"
#include "Classes/Autos_Clasees/Sport.h"
#include "Classes/Autos_Clasees/Work.h"
#include "Classes/Users_Classes/Subscribed.h"
#include "Classes/Users_Classes/Provider.h"

using namespace::std;

//objetos globales
Admin objAdmin;
User objUser;
Provider objProvider;
Subscribed objSuscribed;

//vectores globales
vector <Comfort> vecComfort;
vector <Sport> vecSport;
vector <Work> vecWork;

string inventory[30][3];

//BUSQUEDA/CONSULTA DE USUARIOS
void searchCommonUser(){
    long search;
    bool exist = false;
    User t1;

    cout << "Input user's ID: ";
    cin >> search;
    for (int i = 0; i < vecUser.size(); i++){
        t1 = vecUser[i];
        if (t1.getID() == search){
            exist = true;
            cout << "Information about user: \n";
            cout << t1.getLastname() << ", " << t1.getName() << endl;
            cout << t1.getUserName() << endl;
            cout << t1.getPhone() << endl;
            cout << t1.getMail() << endl;
        } else if (!exist){
            cout << "The ID has not been found.\n";
            cout << "Make sure that the ID is correct.\n";
            break;
        }
    }
}

void searchProviderUser(){
    long search;
    bool exist = false;
    Provider t2;

    cout << "Input provider's ID: ";
    cin >> search;
    for (int i = 0; i < vecProvider.size(); i++){
        t2 = vecProvider[i];
        if (t2.getID() == search){
            exist = true;
            cout << "Information about user: \n";
            cout << t2.getLastname() << ", " << t2.getName() << endl;
            cout << t2.getUserName() << endl;
            cout << t2.getPhone() << endl;
            cout << t2.getMail() << endl;
            cout << t2.getCompany() << ", " << t2.getNIT() << endl;
        } else if (!exist){
            cout << "The ID has not been found.\n";
            cout << "Make sure that the ID is correct.\n";
        }
    }
}

void searchSubscribedUser(){
    long search;
    bool exist = false;
    Subscribed t3;

    cout << "Input suscribed's ID: ";
    cin >> search;
    for (int i = 0; i < vecSubscribed.size(); i++){
        t3 = vecSubscribed[i];
        if (t3.getID() == search){
            exist = true;
            cout << "Information about user: \n";
            cout << t3.getLastname() << ", " << t3.getName() << endl;
            cout << t3.getUserName() << endl;
            cout << t3.getPhone() << endl;
            cout << t3.getMail() << endl;
            cout << t3.getAccountNumber() << ", " << t3.getCode() << endl;
        } else if (!exist){
            cout << "The ID has not been found.\n";
            cout << "Make sure that the ID is correct.\n";
        }
    }
}

void searchAdmin(){
    string search;
    bool exist = false;
    Admin t4;

    cout << "Input admin's username: ";
    cin >> search;
    for (int i = 0; i < vecAdmin.size(); i++){
        t4 = vecAdmin[i];
        if (t4.getUserName() == search){
            exist = true;
            cout << "Information about user: \n";
            cout << t4.getUserName() << endl;
            cout << "This is another administrator's account";
        } else if (!exist){
            cout << "The admin's name has not been found.\n";
            cout << "Make sure that the username is correct.\n";
        }
    }
}

//BORRAR USUARIOS
void eraseCommonUser(){
    long search;
    bool exist = false;
    int opc;
    User t1;

    cout << "Input user's ID: ";
    cin >> search;
    for (int i = 0; i < vecUser.size(); i++){
        t1 = vecUser[i];
        if (t1.getID() == search){
            exist = true;
            cout << "Are you sure you want to erase this user?\n";
            cout << "1. Yes // 2. No: ";
            cin >> opc;

            switch(opc){
                case 1: vecUser.erase(vecUser.begin() + i); break;
                case 2: break; //or erasemenu
                default: cout << "Incorrect option\n";
            }
        } else if (!exist){
            cout << "The ID has not been found.\n";
            cout << "Make sure that the ID is correct.\n";
        }
    }
}

void eraseProviderUser(){
    long search;
    bool exist = false;
    int opc;
    Provider t2;

    cout << "Input provider's ID: ";
    cin >> search;
    for (int i = 0; i < vecProvider.size(); i++){
        t2 = vecProvider[i];
        if (t2.getID() == search){
            exist = true;
            cout << "Are you sure you want to erase this user?\n";
            cout << "1. Yes // 2. No: ";
            cin >> opc;

            switch (opc){
                case 1: vecProvider.erase(vecProvider.begin() + i); break;
                case 2: break; //or erase menu
                default: cout << "Incorrect option\n";
            }
        } else if (!exist){
            cout << "The ID has not been found.\n";
            cout << "Make sure that the ID is correct.\n";
        }
    }
}

void eraseSubscribedUser(){
    long search;
    bool exist = false;
    int opc;
    Subscribed t3;

    cout << "Input suscribed's ID: ";
    cin >> search;
    for (int i = 0; i < vecSubscribed.size(); i++){
        t3 = vecSubscribed[i];
        if (t3.getID() == search){
            exist = true;
            cout << "Are you sure you want to erase this user?\n";
            cout << "1. Yes // 2. No: ";
            cin >> opc;

            switch(opc){
                case 1: vecSubscribed.erase(vecSubscribed.begin() + i); break;
                case 2: break;
                default: cout << "Incorrect option\n";
            }
        } else if (!exist){
            cout << "The ID has not been found.\n";
            cout << "Make sure that the ID is correct.\n";
        }
    }
}

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
    obj1.setState();
    vecComfort.push_back(obj1); //toda la informacion la almacena en un vector

    //luego, almacenara una matriz con 3 campos basicos que seran el inventario a mostrar
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 3; j++){
            if (j < 1) {
                inventory[i][j] = obj1.getBrand(); //por ejemplo
            } else if (j < 2) {
                inventory[i][j] = obj1.getLicensePlate();
            } else if (j < 3) {
                inventory[i][j] = obj1.getState();
                /*if (obj1.getState() == true) {
                    state = "Available";
                    inventory[i][j] = state;
                } else if (obj1.getState() == false) {
                    state = "Not available";
                    inventory[i][j] = state;*/
                    //PONER EN TODOS LOS OBJETOS SI FUNCIONA
                //}
            }
        }
    }
}

void addSport(){
    Sport obj2;

    obj2.setPrice();
    obj2.setLicensePlate();
    obj2.setKMxG();
    obj2.setMileage();
    obj2.setBrand();
    obj2.setState();
    vecSport.push_back(obj2);

    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 3; j++){
            if (j < 1) {
                inventory[i][j] = obj2.getBrand(); //por ejemplo
            } else if (j < 2) {
                inventory[i][j] = obj2.getLicensePlate();
            } else if (j < 3) {
                inventory[i][j] = obj2.getState();
            }
        }
    }
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
    obj3.setState();
    vecWork.push_back(obj3);

    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 3; j++){
            if (j < 1) {
                inventory[i][j] = obj3.getBrand(); //por ejemplo
            } else if (j < 2) {
                inventory[i][j] = obj3.getLicensePlate();
            } else if (j < 3) {
                inventory[i][j] = obj3.getState();
            }
        }
    }
}

//VER INVENTARIO EN ARCHIVO CSV
void checkInventory(){
    ofstream file ("inventory.csv", ofstream::app);

    if (!file){
        cout << "Error. Couldn't create 'inventory.csv'\n";
    } else {
        for (int i = 0; i < 30; i++) {
            for (int j =0; j < 30; i++) {
                if (j != 0) {
                    file << " | ";
                }
                file << inventory[i][j];
            }
            file << "\n";
        }
        file.close();
    }
    file.close();
}
