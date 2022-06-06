//
// Created by User on 6/1/22.
//
#include <iostream>
#include <vector>
#include "Classes/Users_Classes/User.h"
#include "Classes/Users_Classes/Suscribed.h"
#include "Classes/Users_Classes/Provider.h"
#include "Classes/Users_Classes/Admin.h"
using namespace::std;
//definicion de variables y arreglos globales

//Definicion de metodos
void menuAdmin();
void clea();
void inventory();


//Implementacion de metodos
void clean(){
    system("clear");
}
void menuAdmin(){
    int opc;
    do {
        cout << "Menu for administrators ;3\n";
        cout << "--------------------------\n";
        cout << "1. Check the inventory\n";
        cout << "2. Add items to inventory\n";
        cout << "3. Create new clients\n";
        cout << "4. Search clients\n";
        cout << "5. Create new suplier\n";
        cout << "6. Search suplier\n";
        cout << "0. Exit\n";
        cin >> opc;
    }while(opc != 0);
    switch(opc){

    }

}
