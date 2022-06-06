#include <iostream>
using namespace::std;

#include "Classes/Users_Classes/User.h"


User::User(){
    mail = name = lastname = "-";
    ID = phone = 0;
}

User::~User(){
    //Dtor
}


void User::setMail(){
    fflush(stdin);
    cout<<"Input mail: ";
    getline(cin, mail);
}

void User::setName(){
    fflush(stdin);
    cout<<"Input name: ";
    getline(cin, name);
}

void User::setLastname(){
    fflush(stdin);
    cout<<"Input lastname: ";
    getline(cin, lastname);
}

void User::setID(){
    cout<<"Input ID: ";
    cin>>ID;
}

void User::setPhone(){
    cout<<"Input phone number: ";
    cin>>phone;
}

string User::getMail(){
    return mail;
}

string User::getName(){
    return name;
}

string User::getLastname(){
    return lastname;
}

long User::getID(){
    return ID;
}

long User::getPhone(){
    return phone;
}
