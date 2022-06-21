#include <iostream>
#include <vector>
#include <fstream>
#include "Classes/Autos_Clasees/Comfort.h"
#include "Classes/Autos_Clasees/Sport.h"
#include "Classes/Autos_Clasees/Work.h"
//#include "Main/Menus.cpp" //si algo quita esta linea, yo la puse porque sino, me daba error

using namespace::std;


vector <Sport> vecSport;
vector <Comfort> vecComfort;
vector <Work> vecWork;

void clean(){
    system( "read -n 1 -s -p \"Press any key to continue...\"" );
    system("clear");
}

void clear(){
    system("clear");
}

//AGREGAR ITEMS
void addComfort(){
    Comfort obj1;
    //string state;

    obj1.Price();
    obj1.setLicensePlate();
    obj1.setKMxG();
    obj1.setMileage();
    obj1.setBrand();
    obj1.setNumberSeats();
    obj1.setNumberAirBag();
    vecComfort.push_back(obj1); //toda la informacion la almacena en un vector
    clean();
}

void addSport(){
    Sport obj2;

    obj2.Price();
    obj2.setLicensePlate();
    obj2.setKMxG();
    obj2.setMileage();
    obj2.setBrand();
    vecSport.push_back(obj2);
    clean();
}

void addWork(){
    Work obj3;

    obj3.Price();
    obj3.setLicensePlate();
    obj3.setKMxG();
    obj3.setMileage();
    obj3.setBrand();
    obj3.setCantTons();
    obj3.setTrailer();
    vecWork.push_back(obj3);
    clean();
}


void checkInventory(){
    cout<< "-----------------\n";
    cout<< "Comfort inventory\n";
    cout<< "-----------------\n";
    for (int i = 0; i < vecComfort.size(); ++i) {
        cout<< vecComfort[i].getBrand()
            << " " << vecComfort[i].getLicensePlate()
            << " " << vecComfort[i].getPrice()
            << " " << vecComfort[i].getIDUserProperty()
            << " " << vecComfort[i].getState()
            << endl;
    }
    cout<< "---------------\n";
    cout<< "Sport inventory\n";
    cout<< "---------------\n";
    for (int j = 0; j < vecSport.size(); ++j) {
        cout<< vecSport[j].getBrand()
            << " " << vecSport[j].getLicensePlate()
            << " " << vecSport[j].getPrice()
            << " " << vecSport[j].getIDUserProperty()
            << " " << vecSport[j].getState()
            << endl;
    }
    cout<< "--------------\n";
    cout<< "Work inventory\n";
    cout<< "--------------\n";
    for (int k = 0; k < vecWork.size(); ++k) {
        cout<< vecWork[k].getBrand()
            << " " << vecWork[k].getLicensePlate()
            << " " << vecWork[k].getPrice()
            << " " << vecWork[k].getIDUserProperty()
            << " " << vecWork[k].getState()
            << endl;
    }
    clean();
}


void generateCCB(int i){
    vecComfort[i];
    int opc;
    do {
        cout << "Registered user? (1. yes, 2. not): ";
        cin >> opc;
        switch (opc) {
            case 1: {
                long search;
                bool exist = false;
                User t1;

                cout << "Input user's ID: ";
                cin >> search;
                for (int i = 0; i < vecUser.size(); i++) {
                    t1 = vecUser[i];
                    if (t1.getID() == search) {
                        exist = true;
                        cout << "Information about user: \n";
                        cout << t1.getLastname() << ", " << t1.getName() << endl;
                        cout << t1.getUserName() << endl;
                        cout << t1.getPhone() << endl;
                        cout << t1.getMail() << endl;
                        vecComfort[i].setIDUserProperty();

                        ofstream webComfort("CCB.html");
                        webComfort << "<html><head><title>CCB</title><link rel=\"stylesheet\" href=\"/Users/user1/Desktop/Rentals/cmake-build-debug/billStyle.css\"></head>"
                                   << endl;
                        webComfort << "<body><div><h1>COMFORT CAR BILL</h1><span class=\"by\">by Rentals</span></div>"
                                   << endl;
                        webComfort << "<div><span class=\"valid\">This bill is valid until 15 days<span></div>" << endl;
                        webComfort << "<div><span class=\"ID\">" << vecComfort[i].getIDUserProperty() << "</span></div>" << endl;
                        webComfort << "<div><p>Details of the rented car: </p>" << endl;

                        webComfort << "<div><table><tr><th>FACTS</th><th>DATA</th></tr>" << endl;
                        webComfort << "<tr><td>Car's Brand </td><td class=\"data1\">" << vecComfort[i].getBrand()
                                   << "</td></tr>" << endl;
                        webComfort << "<tr><td>Car's License Plate </td><td class=\"data2\">"
                                   << vecComfort[i].getLicensePlate() << "</td></tr>" << endl;
                        webComfort << "<tr><td>Total Price </td><td class=\"data3\">" << vecComfort[i].getPrice()
                                   << "</td></tr></div>" << endl;
                        webComfort << "</body></html>" << endl;
                        system("open /Users/user1/Desktop/Rentals/cmake-build-debug/CCB.html");
                        clean();
                    } else if (!exist) {
                        cout << "The ID has not been found.\n";
                        cout << "Make sure that the ID is correct.\n";
                        break;
                        clean();
                    }
                }
            }
            case 2: {
                cout << "Register the user\n";
                CreateUser();
                long search;
                bool exist = false;
                User t1;
                cout << "---------------------------------\n";
                cout << "Search the user who wants to rent\n";
                cout << "---------------------------------\n";
                cout << "Input user's ID: ";
                cin >> search;
                for (int i = 0; i < vecUser.size(); i++) {
                    t1 = vecUser[i];
                    if (t1.getID() == search) {
                        exist = true;
                        cout << "\nInformation about user: \n";
                        cout << t1.getLastname() << ", " << t1.getName() << endl;
                        cout << t1.getUserName() << endl;
                        cout << t1.getPhone() << endl;
                        cout << t1.getMail() << endl;
                        cout << "------------------------------\n";
                        cout << "Input ID for complete the rent\n";
                        cout << "------------------------------\n";
                        vecComfort[i].setIDUserProperty();

                        ofstream webComfort("CCB.html");
                        webComfort
                                << "<html><head><title>CCB</title><link rel=\"stylesheet\" href=\"/Users/user1/Desktop/Rentals/cmake-build-debug/billStyle.css\"></head>"
                                << endl;
                        webComfort << "<body><div><h1>COMFORT CAR BILL</h1><span class=\"by\">by Rentals</span></div>"
                                   << endl;
                        webComfort << "<div><span class=\"valid\">This bill is valid until 15 days<span></div>" << endl;
                        webComfort << "<div><span class=\"ID\">" << vecComfort[i].getIDUserProperty() << "</span></div>" << endl;
                        webComfort << "<div><p>Details of the rented car: </p>" << endl;

                        webComfort << "<div><table><tr><th>FACTS</th><th>DATA</th></tr>" << endl;
                        webComfort << "<tr><td>Car's Brand </td><td class=\"data1\">" << vecComfort[i].getBrand()
                                   << "</td></tr>" << endl;
                        webComfort << "<tr><td>Car's License Plate </td><td class=\"data2\">"
                                   << vecComfort[i].getLicensePlate() << "</td></tr>" << endl;
                        webComfort << "<tr><td>Total Price </td><td class=\"data3\">" << vecComfort[i].getPrice()
                                   << "</td></tr></div>" << endl;
                        webComfort << "</body></html>" << endl;
                        system("open /Users/user1/Desktop/Rentals/cmake-build-debug/CCB.html");
                    } else if (!exist) {
                        cout << "The ID has not been found.\n";
                        cout << "Make sure that the ID is correct.\n";
                        clean();
                        break;
                    }
                }
            }
        }
    }while(opc != 0);
}

void generateSCB(int j){
    vecSport[j];
    int opc;
    do {
        cout << "Registered user? (1. yes, 2. not): ";
        cin >> opc;
        switch (opc) {
            case 1: {
                long search;
                bool exist = false;
                User t1;

                cout << "Input user's ID: ";
                cin >> search;
                for (int i = 0; i < vecUser.size(); i++) {
                    t1 = vecUser[i];
                    if (t1.getID() == search) {
                        exist = true;
                        cout << "Information about user: \n";
                        cout << t1.getLastname() << ", " << t1.getName() << endl;
                        cout << t1.getUserName() << endl;
                        cout << t1.getPhone() << endl;
                        cout << t1.getMail() << endl;
                        vecSport[i].setIDUserProperty();

                        ofstream webSport("SCB.html");
                        webSport << "<html><head><title>SCB</title><link rel=\"stylesheet\" href=\"/Users/user1/Desktop/Rentals/cmake-build-debug/billStyle.css\"></head>" << endl;
                        webSport << "<body><div><h1>SPORT CAR BILL</h1><span class=\"by\">by Rentals</span></div>" << endl;
                        webSport << "<div><span class=\"valid\">This bill is valid until 15 days<span></div>" << endl;
                        webSport << "<div><span class=\"ID\">" << vecSport[j].getIDUserProperty() << "</span></div>" << endl;
                        webSport << "<div><p>Details of the rented car: </p>" <<endl;

                        webSport << "<div><table><tr><th>FACTS</th><th>DATA</th></tr>" << endl;
                        webSport << "<tr><td>Car's Brand </td><td class=\"data1\">" << vecSport[j].getBrand() << "</td></tr>" << endl;
                        webSport << "<tr><td>Car's License Plate </td><td class=\"data2\">" << vecSport[j].getLicensePlate() << "</td></tr>" << endl;
                        webSport << "<tr><td>Total Price </td><td class=\"data3\">" << vecSport[j].getPrice() << "</td></tr></div>" << endl;
                        webSport << "</body></html>" << endl;
                        system("open /Users/user1/Desktop/Rentals/cmake-build-debug/SCB.html");
                        clean();
                    } else if (!exist) {
                        cout << "The ID has not been found.\n";
                        cout << "Make sure that the ID is correct.\n";
                        break;
                        clean();
                    }
                }
            }
            case 2: {
                cout << "Register the user\n";
                CreateUser();
                long search;
                bool exist = false;
                User t1;
                cout << "---------------------------------\n";
                cout << "Search the user who wants to rent\n";
                cout << "---------------------------------\n";
                cout << "Input user's ID: ";
                cin >> search;
                for (int i = 0; i < vecUser.size(); i++) {
                    t1 = vecUser[i];
                    if (t1.getID() == search) {
                        exist = true;
                        cout << "\nInformation about user: \n";
                        cout << t1.getLastname() << ", " << t1.getName() << endl;
                        cout << t1.getUserName() << endl;
                        cout << t1.getPhone() << endl;
                        cout << t1.getMail() << endl;
                        cout << "------------------------------\n";
                        cout << "Input ID for complete the rent\n";
                        cout << "------------------------------\n";
                        vecSport[i].setIDUserProperty();

                        ofstream webSport("SCB.html");
                        webSport << "<html><head><title>SCB</title><link rel=\"stylesheet\" href=\"/Users/user1/Desktop/Rentals/cmake-build-debug/billStyle.css\"></head>" << endl;
                        webSport << "<body><div><h1>SPORT CAR BILL</h1><span class=\"by\">by Rentals</span></div>" << endl;
                        webSport << "<div><span class=\"valid\">This bill is valid until 15 days<span></div>" << endl;
                        webSport << "<div><span class=\"ID\">" << vecSport[i].getIDUserProperty() << "</span></div>" << endl;
                        webSport << "<div><p>Details of the rented car: </p>" <<endl;

                        webSport << "<div><table><tr><th>FACTS</th><th>DATA</th></tr>" << endl;
                        webSport << "<tr><td>Car's Brand </td><td class=\"data1\">" << vecSport[j].getBrand() << "</td></tr>" << endl;
                        webSport << "<tr><td>Car's License Plate </td><td class=\"data2\">" << vecSport[j].getLicensePlate() << "</td></tr>" << endl;
                        webSport << "<tr><td>Total Price </td><td class=\"data3\">" << vecSport[j].getPrice() << "</td></tr></div>" << endl;
                        webSport << "</body></html>" << endl;
                        system("open /Users/user1/Desktop/Rentals/cmake-build-debug/SCB.html");
                    } else if (!exist) {
                        cout << "The ID has not been found.\n";
                        cout << "Make sure that the ID is correct.\n";
                        clean();
                        break;
                    }
                }
            }
        }
    }while(opc != 0);
}

void generateWCB(int k){
    vecWork[k];
    int opc;
    do {
        cout << "Registered user? (1. yes, 2. not): ";
        cin >> opc;
        switch (opc) {
            case 1: {
                long search;
                bool exist = false;
                User t1;

                cout << "Input user's ID: ";
                cin >> search;
                for (int i = 0; i < vecUser.size(); i++) {
                    t1 = vecUser[i];
                    if (t1.getID() == search) {
                        exist = true;
                        cout << "Information about user: \n";
                        cout << t1.getLastname() << ", " << t1.getName() << endl;
                        cout << t1.getUserName() << endl;
                        cout << t1.getPhone() << endl;
                        cout << t1.getMail() << endl;
                        vecWork[i].setIDUserProperty();

                        ofstream webWork("WCB.html");
                        webWork << "<html><head><title>WCB</title><link rel=\"stylesheet\" href=\"/Users/user1/Desktop/Rentals/cmake-build-debug/billStyle.css\"></head>" << endl;
                        webWork << "<body><div><h1>WORK CAR BILL</h1><span class=\"by\">by Rentals</span></div>" << endl;
                        webWork << "<div><span class=\"valid\">This bill is valid until 15 days<span></div>" << endl;
                        webWork << "<div><span class=\"ID\">" << vecWork[k].getIDUserProperty() << "</span></div>" << endl;
                        webWork << "<div><p>Details of the rented car: </p>" <<endl;

                        webWork << "<div><table><tr><th>FACTS</th><th>DATA</th></tr>" << endl;
                        webWork << "<tr><td>Car's Brand </td><td class=\"data1\">" << vecWork[k].getBrand() << "</td></tr>" << endl;
                        webWork << "<tr><td>Car's License Plate </td><td class=\"data2\">" << vecWork[k].getLicensePlate() << "</td></tr>" << endl;
                        webWork << "<tr><td>Total Price </td><td class=\"data3\">" << vecWork[k].getPrice() << "</td></tr></div>" << endl;
                        webWork << "</body></html>" << endl;
                        system("open /Users/user1/Desktop/Rentals/cmake-build-debug/WCB.html");
                        clean();
                    } else if (!exist) {
                        cout << "The ID has not been found.\n";
                        cout << "Make sure that the ID is correct.\n";
                        break;
                        clean();
                    }
                }
            }
            case 2:{
                cout << "Register the user\n";
                CreateUser();
                long search;
                bool exist = false;
                User t1;
                cout << "---------------------------------\n";
                cout << "Search the user who wants to rent\n";
                cout << "---------------------------------\n";
                cout << "Input user's ID: ";
                cin >> search;
                for (int i = 0; i < vecUser.size(); i++) {
                    t1 = vecUser[i];
                    if (t1.getID() == search) {
                        exist = true;
                        cout << "\nInformation about user: \n";
                        cout << t1.getLastname() << ", " << t1.getName() << endl;
                        cout << t1.getUserName() << endl;
                        cout << t1.getPhone() << endl;
                        cout << t1.getMail() << endl;
                        cout << "------------------------------\n";
                        cout << "Input ID for complete the rent\n";
                        cout << "------------------------------\n";
                        vecWork[i].setIDUserProperty();

                        ofstream webWork("WCB.html");
                        webWork << "<html><head><title>CCD</title><link rel=\"stylesheet\" href=\"/Users/user1/Desktop/Rentals/cmake-build-debug/billStyle.css\"></head>" << endl;
                        webWork << "<body><div><h1>WORK CAR BILL</h1><span class=\"by\">by Rentals</span></div>" << endl;
                        webWork << "<div><span class=\"valid\">This bill is valid until 15 days<span></div>" << endl;
                        webWork << "<div><span class=\"ID\">" << vecWork[i].getIDUserProperty() << "</span></div>" << endl;
                        webWork << "<div><p>Details of the rented car: </p>" <<endl;

                        webWork << "<div><table><tr><th>FACTS</th><th>DATA</th></tr>" << endl;
                        webWork << "<tr><td>Car's Brand </td><td class=\"data1\">" << vecWork[k].getBrand() << "</td></tr>" << endl;
                        webWork << "<tr><td>Car's License Plate </td><td class=\"data2\">" << vecWork[k].getLicensePlate() << "</td></tr>" << endl;
                        webWork << "<tr><td>Total Price </td><td class=\"data3\">" << vecWork[k].getPrice() << "</td></tr></div>" << endl;
                        webWork << "</body></html>" << endl;
                        system("open /Users/user1/Desktop/Rentals/cmake-build-debug/WCB.html");
                    } else if (!exist) {
                        cout << "The ID has not been found.\n";
                        cout << "Make sure that the ID is correct.\n";
                        clean();
                        break;
                    }
                }
            }
        }
    }while(opc != 0);
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
                                generateCCB(i);
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
                                generateSCB(i);
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
                                generateWCB(i);
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
}

void generateCCB(int i, string ID){
    if(vecComfort[i].getIDUserProperty() == ID)
        vecComfort[i];
    ofstream webComfort("CCB.html");
    webComfort << "<html><head><title>CCB</title><link rel=\"stylesheet\" href=\"/Users/user1/Desktop/Rentals/cmake-build-debug/billStyle.css\"></head>"
               << endl;
    webComfort << "<body><div><h1>COMFORT CAR BILL</h1><span class=\"by\">by Rentals</span></div>"
               << endl;
    webComfort << "<div><span class=\"valid\">This bill is valid until 15 days<span></div>" << endl;
    webComfort << "<div><span class=\"ID\">" << vecComfort[i].getIDUserProperty() << "</span></div>" << endl;
    webComfort << "<div><p>Details of the rented car: </p>" << endl;

    webComfort << "<div><table><tr><th>FACTS</th><th>DATA</th></tr>" << endl;
    webComfort << "<tr><td>Car's Brand </td><td class=\"data1\">" << vecComfort[i].getBrand()
               << "</td></tr>" << endl;
    webComfort << "<tr><td>Car's License Plate </td><td class=\"data2\">"
               << vecComfort[i].getLicensePlate() << "</td></tr>" << endl;
    webComfort << "<tr><td>Total Price </td><td class=\"data3\">" << vecComfort[i].getPrice()
               << "</td></tr></div>" << endl;
    webComfort << "</body></html>" << endl;
    system("open /Users/user1/Desktop/Rentals/cmake-build-debug/CCB.html");
    clean();
}
void generateWCB(int k, string ID){
    if(vecComfort[k].getIDUserProperty() == ID)
        vecComfort[k];
    ofstream webWork("WCB.html");
    webWork << "<html><head><title>WCB</title><link rel=\"stylesheet\" href=\"/Users/user1/Desktop/Rentals/cmake-build-debug/billStyle.css\"></head>" << endl;
    webWork << "<body><div><h1>WORK CAR BILL</h1><span class=\"by\">by Rentals</span></div>" << endl;
    webWork << "<div><span class=\"valid\">This bill is valid until 15 days<span></div>" << endl;
    webWork << "<div><span class=\"ID\">" << vecWork[k].getIDUserProperty() << "</span></div>" << endl;
    webWork << "<div><p>Details of the rented car: </p>" <<endl;

    webWork << "<div><table><tr><th>FACTS</th><th>DATA</th></tr>" << endl;
    webWork << "<tr><td>Car's Brand </td><td class=\"data1\">" << vecWork[k].getBrand() << "</td></tr>" << endl;
    webWork << "<tr><td>Car's License Plate </td><td class=\"data2\">" << vecWork[k].getLicensePlate() << "</td></tr>" << endl;
    webWork << "<tr><td>Total Price </td><td class=\"data3\">" << vecWork[k].getPrice() << "</td></tr></div>" << endl;
    webWork << "</body></html>" << endl;
    system("open /Users/user1/Desktop/Rentals/cmake-build-debug/WCB.html");
    clean();
}

void generateSCB(int j, string ID){
    if(vecComfort[j].getIDUserProperty() == ID)
        vecComfort[j];
    ofstream webSport("SCB.html");
    webSport << "<html><head><title>CCD</title><link rel=\"stylesheet\" href=\"/Users/user1/Desktop/Rentals/cmake-build-debug/billStyle.css\"></head>" << endl;
    webSport << "<body><div><h1>SPORT CAR BILL</h1><span class=\"by\">by Rentals</span></div>" << endl;
    webSport << "<div><span class=\"valid\">This bill is valid until 15 days<span></div>" << endl;
    webSport << "<div><p>Details of the rented car: </p>" <<endl;

    webSport << "<div><table><tr><th>FACTS</th><th>DATA</th></tr>" << endl;
    webSport << "<tr><td>Car's Brand </td><td class=\"data1\">" << vecSport[j].getBrand() << "</td></tr>" << endl;
    webSport << "<tr><td>Car's License Plate </td><td class=\"data2\">" << vecSport[j].getLicensePlate() << "</td></tr>" << endl;
    webSport << "<tr><td>Total Price </td><td class=\"data3\">" << vecSport[j].getPrice() << "</td></tr></div>" << endl;
    webSport << "</body></html>" << endl;
    system("open /Users/user1/Desktop/Rentals/cmake-build-debug/SCB.html");
    clean();
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
    clean();
}

void searchCar(){
    string plate;
    int opcBill;
    do {
        cout << "Input the plate: ";
        cin >> plate;
        for (int i = 0; i < vecComfort.size(); ++i) {
            if (plate == vecComfort[i].getLicensePlate()) {
                cout << "This is what i found: \n";
                cout << "-----------------------\n";
                cout << "Licence plat: " << vecComfort[i].getLicensePlate() << endl;
                cout << "Brand: " << vecComfort[i].getBrand() << endl;
                cout << "Price: " << vecComfort[i].getPrice() << endl;
                cout << "State: " << vecComfort[i].getState() << endl;
                cout << "Actual Property: " << vecComfort[i].getIDUserProperty() << endl;
                if (vecComfort[i].getIDUserProperty() != "Dont have ID user property") {
                    cout << "To generate the bill for this car press 1 to go back press 0: ";
                    cin >> opcBill;
                    switch (opcBill) {
                        case 1:
                            generateCCB(i, vecComfort[i].getIDUserProperty());
                            break;
                        case 0:
                            break;
                        default:
                            cout << "Wrong option, please try again\n";
                            clean();
                            break;
                    }
                }
            }
        }

        for (int i = 0; i < vecWork.size(); ++i) {
            if (plate == vecWork[i].getLicensePlate()) {
                cout << "This is what i found: \n";
                cout << "-----------------------\n";
                cout << "Licence plat: " << vecWork[i].getLicensePlate() << endl;
                cout << "Brand: " << vecWork[i].getBrand() << endl;
                cout << "Price: " << vecWork[i].getPrice() << endl;
                cout << "State: " << vecWork[i].getState() << endl;
                cout << "Actual Property: " << vecWork[i].getIDUserProperty() << endl;
                if (vecWork[i].getIDUserProperty() != "Dont have ID user property") {
                    cout << "To generate the bill for this car press 1 to go back press 0: ";
                    cin >> opcBill;
                    switch (opcBill) {
                        case 1:
                            generateWCB(i, vecWork[i].getIDUserProperty());
                            break;
                        case 0:
                            break;
                        default:
                            cout << "Wrong option, please try again\n";
                            clean();
                            break;
                    }
                }
            }
        }
    } while (opcBill != 0);
    clean();
}

void eraseComfortCar(){
    string search;
    bool exist = false;
    int opc;
    Comfort t2;

    cout << "Input comfort's licence plate: ";
    cin >> search;
    for (int i = 0; i < vecComfort.size(); i++){
        t2 = vecComfort[i];
        if (t2.getLicensePlate() == search){
            exist = true;
            cout << "Are you sure you want to erase this user?\n";
            cout << "1. Yes // 2. No: ";
            cin >> opc;

            switch (opc){
                case 1: vecComfort.erase(vecComfort.begin() + i); break;
                case 2: break; //or erase menu
                default: cout << "Incorrect option\n";
            }
        } else if (!exist){
            cout << "The license plate has not been found.\n";
            cout << "Make sure that the license plate is correct.\n";
            clean();
        }
    }
    clean();
}

void eraseSportCar(){
    string search;
    bool exist = false;
    int opc;
    Sport t2;

    cout << "Input sport's licence plate: ";
    cin >> search;
    for (int i = 0; i < vecSport.size(); i++){
        t2 = vecSport[i];
        if (t2.getLicensePlate() == search){
            exist = true;
            cout << "Are you sure you want to erase this user?\n";
            cout << "1. Yes // 2. No: ";
            cin >> opc;

            switch (opc){
                case 1: vecSport.erase(vecSport.begin() + i); break;
                case 2: break; //or erase menu
                default: cout << "Incorrect option\n";
            }
        } else if (!exist){
            cout << "The license plate has not been found.\n";
            cout << "Make sure that the license plate is correct.\n";
            clean();
        }
    }
    clean();
}

void eraseWorkCar(){
    string search;
    bool exist = false;
    int opc;
    Work t2;

    cout << "Input sport's licence plate: ";
    cin >> search;
    for (int i = 0; i < vecWork.size(); i++){
        t2 = vecWork[i];
        if (t2.getLicensePlate() == search){
            exist = true;
            cout << "Are you sure you want to erase this user?\n";
            cout << "1. Yes // 2. No: ";
            cin >> opc;

            switch (opc){
                case 1: vecWork.erase(vecWork.begin() + i); break;
                case 2: break; //or erase menu
                default: cout << "Incorrect option\n";
            }
        } else if (!exist){
            cout << "The license plate has not been found.\n";
            cout << "Make sure that the license plate is correct.\n";
            clean();
        }
    }
    clean();
}

void eraseCar(){
    int opc;
    do {
        cout << "What type of car do u want to erase: \n";
        cout << "1. Comfort\n";
        cout << "2. Sport\n";
        cout << "3. Work\n";
        cout << "0. Go back\n";
        cout << "-> ";
        cin >> opc;

        switch (opc) {
            case 1:
                eraseComfortCar();
                break;
            case 2:
                eraseSportCar();
                break;
            case 3:
                eraseWorkCar();
                break;
            case 0:
                break;
            default:
                cout << "Wrong option, please try again\n";
                clean();
                break;
        }
    } while (opc != 0);
}