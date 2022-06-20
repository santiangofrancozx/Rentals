#include <iostream>
#include <vector>

#include "Main/InventoryCreator.cpp"

#include <string>
#include <fstream>

#include "Classes/Autos_Clasees/Comfort.h"
#include "Classes/Autos_Clasees/Sport.h"
#include "Classes/Autos_Clasees/Work.h"
#include "Classes/Users_Classes/Subscribed.h"
#include "Classes/Users_Classes/Provider.h"


using namespace::std;


//definicion de metodos
void searchCommonUser();
void searchProviderUser();
void searchSubscribedUser();
void searchAdmin();
void eraseCommonUser();
void eraseProviderUser();
void eraseSubscribedUser();



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

