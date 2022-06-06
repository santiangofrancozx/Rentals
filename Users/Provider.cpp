#include <iostream>
using namespace::std;

#include "Classes/Users_Classes/Provider.h"
#include "Classes/Users_Classes/Admin.h"
#include "Classes/Users_Classes/User.h"

Provider::Provider(){
    company = "-";
    NIT = 0;
}

Provider::~Provider(){
    //Dtor
}


void Provider::setCompany(){
    fflush(stdin);
    cout<<"Input company's name: ";
    getline(cin, company);
}

void Provider::setNIT(){
    cout<<"Input company's NIT: ";
    cin>>NIT;
}

string Provider::getCompany(){
    return company;
}

long Provider::getNIT(){
    return NIT;
}
