#include <iostream>
#include <vector>
#include "Classes/Users_Classes/Subscribed.h"
#include "Classes/Users_Classes/Provider.h"
#include "Classes/Users_Classes/Admin.h"
#include "Classes/Users_Classes/User.h"

using namespace::std;

//definicion de vectores globales
vector <Admin> vecAdmin;
vector <User> vecUser;
vector <Provider> vecProvider;
vector <Subscribed> vecSubscribed;

//definicion de funciones
void CreateUser();
void CreateProvider();
void CreateSubscribed();
void CreateAdmin();

//implemetacion de funciones
void clean(){
    system( "read -n 1 -s -p \"Press any key to continue...\"" );
    system("clear");
}

void clear(){
    system("clear");
}

void CreateUser() {
    User obj;
    obj.setName();
    obj.setLastname();
    obj.setPhone();
    obj.setID();
    obj.setMail();
    obj.setUserName();
    obj.setPassword();
    vecUser.push_back(obj);
    clean();
}

void CreateProvider(){
    Provider obj;
    obj.setName();
    obj.setLastname();
    obj.setID();
    obj.setPhone();
    obj.setMail();
    obj.setCompany();
    obj.setNIT();
    obj.setUserName();
    obj.setPassword();
    vecProvider.push_back(obj);
    clean();
}

void CreateSubscribed(){
    Subscribed obj;
    obj.setName();
    obj.setLastname();
    obj.setID();
    obj.setPhone();
    obj.setMail();
    obj.setCode();
    obj.setUserName();
    obj.setPassword();
    vecSubscribed.push_back(obj);
    clean();
}

void CreateAdmin(){
    Admin obj;
    obj.setUserName();
    obj.setPassword();
    vecAdmin.push_back(obj);
    clean();
}