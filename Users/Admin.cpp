#include <iostream>
using namespace::std;

#include "Classes/Users_Classes/Admin.h"


Admin::Admin(){
    username = password = "-";
    state = true; //lo pongo true porque San dijo
    type = 0;
}

Admin::~Admin(){
    //Dtor
}


void Admin::setUserName(){
    fflush(stdin);
    cout<<"Input user name: ";
    getline(cin, username);
}

void Admin::setPassword(){
    fflush(stdin);
    cout<<"Input user password: ";
    getline(cin, password);
}

void Admin::setState() {
    state = false;
}

void Admin::setType() {
    cout<<"Input class of user:\n";
    cout<<"1. Administrator\n"
        <<"2. Common User\n"
        <<"3. Provider\n"
        <<"4. Subscribed\n";
    cout<<"-> ";
    cin>>type;
}

string Admin::getUserName(){
    return username;
}

string Admin::getPassword(){
    return password;
}

int Admin::getType() {
    return type;
}

bool Admin::getState() {
    return state;
}