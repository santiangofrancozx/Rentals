//
// Created by User on 6/1/22.
//
#include <iostream>
#include <vector>
#include <fstream> //esto es pa crear documentos, .txt, .csv, etc
#include "Classes/Users_Classes/User.h"
#include "Classes/Users_Classes/Suscribed.h"
#include "Classes/Users_Classes/Provider.h"
#include "Classes/Users_Classes/Admin.h"
#include "Main/Menus.cpp"
using namespace::std;

//definicionde variables globales
vector <Admin> vecUniversal;
//vector <User> vecUser;

//definicion de metodos
void Menu();
void Register();

//Implementacion de metodos

void Register(){
    Admin obj;
    cout<<"Hello, now i need information about u\n";
    obj.setUserName();
    obj.setPassword();
    vecUniversal.push_back(obj);
}

void login(){
    string username, password;
    cout<<"Input the user: ";
    cin>>username;
    cout<<"Input the password  ";
    cin>>password;
    for(int i = 0; i < vecUniversal.size(); i++){
        if(username == vecUniversal[i].getUserName()){
            if(password == vecUniversal[i].getPassword()){
                if(vecUniversal[i].getType() == 1){
                    menuAdmin();
                } else if(vecUniversal[i].getType() == 2){
                    //menuUser();
                } else if(vecUniversal[i].getType() == 3){
                    //menuSuplier();
                } else if(vecUniversal[i].getType() == 4){
                    //menuSubscribed();
                }
            }else{
                cout<<"Incorrect password\n";
                login();
            }
        } else{
            cout<<"Incorrect user name\n";
            login();
        }
    }

}

/*void Login(){//setters xd
    User obj;
    string username, password;
    cout<<"Input the user: ";
    cin>>username;
    cout<<"Input the password  ";
    cin>>password;
    int n = vecUniversal.size();
    bool login = false;
    for(int i = 0; i < n; i++){
        //vecAdmin[i] = obj;

        if(obj.getUserName() == username && obj.getPassword() == password){
            if(obj.getType() == 1){
                menuAdmin{};
            }
        }
        if(!login){
            cout<< "The user or the password doesn't exist"<<endl<<endl;
        }
    }

    if(login = true){
        //menu();
    }

};*/

void firstRun(){

}

void Menu(){
    int opc;
    cout<<"Welcome to our program, please log in\n";
    cout<<"Option menu:\n";
    cout<<"----------------\n";
    cout<<"1. Login\n";
    //cout<<"2. Register\n";
    cout<<"2. Invited\n";
    cout<<"3. About\n";
    cout<<"0. Exit\n";
    cout<<"-> ";
    cin>>opc;
    do{
        switch (opc) {
            case 1: login(); break;
            case 0: break;

        }
    }while(opc != 0);
}
