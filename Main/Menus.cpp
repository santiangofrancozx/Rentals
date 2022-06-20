//
// Created by User on 6/1/22.
//
#include <iostream>
#include "Main/userCreator2000.cpp"
#include "Main/admin_roles.cpp"
using namespace::std;

//definicion de variables y arreglos globales

//Definicion de metodos
void menuAdmin();
void login();
void clean();
void firstRun();
void Menu();
void inventoryMenu();
void addInventoryItemsMenu();

//Implementacion de metodos
void clean(){
    system("clear");
}
void firstRun(){
    Admin objAdmin;
    string verify;
    cout<<"Welcome to the rentals, our program, "
        << " later u can learn more about the developer who create this program.\n";
    cout<<"Now i need u create the information about the administrator.\n";
    objAdmin.setUserName();
    objAdmin.setPassword();
    vecAdmin.push_back(objAdmin);
    cout<< "Verify ur password: ";
    cin>> verify;
    if(verify == objAdmin.getPassword()){
        cout<<"Great, now u can use this program, :3 \n";
    } else{
        do {
            cout << "Oh no, the password don't match. :c\n";
            cout << "Verify ur password: ";
            cin >> verify;
        }while(objAdmin.getPassword() != verify);
    }
    clean();
    Menu();
}

void login(){
    clean();
    string username, password;
    int type;
    int opc;

    Admin adm;
    User usr;
    Provider prv;
    Subscribed ssd;
    do {
        cout << "Input you user's type code: \n";
        cout << "1. Admin, 2. Common, 3. Suscribed, 4. Provider\n";
        cout << "-> ";
        cin >> type;
        //limpiar pantalla

        cout << "Input your username: ";
        fflush(stdin);
        getline(cin, username);
        cout << "Input your password: ";
        fflush(stdin);
        getline(cin, password);
        //optar por retirar tipos de usuarios en menu, pero los switch optimizan la ram
        //los case evitan ejecutar 4 bucles en simultaneo eso ahorra recursos
        switch (type) {
            //MENU ADMIN
            case 1:
                for (int x = 0; x < vecAdmin.size(); x++) {
                    adm = vecAdmin[x];
                    if (username == adm.getUserName()) {
                        if (password == adm.getPassword()) {
                            menuAdmin();
                            clean();
                            opc = 0;
                            break;
                        }else {
                            cout << "Incorrect username or password\n";
                            clean();
                            break;
                        }
                    }else {
                        cout << "Incorrect username or password\n";
                        clean();
                        break;
                    }
                }
                break;
                //MENU COMMON USER
            case 2:
                for (int x = 0; x < vecUser.size(); x++) {
                    usr = vecUser[x];
                    if (username == usr.getUserName()) {
                        if (password == usr.getPassword()) {
                            cout << "hola bb user\n";
                            clean();
                            opc = 0;
                            break;
                        }else {
                            cout << "Incorrect username or password\n";
                            clean();
                            break;
                        }
                    }else {
                        cout << "Incorrect username or password\n";
                        clean();
                        break;
                    }
                }
                break;
                //MENU SUBSCRIBED USER
            case 3:
                for (int x = 0; x < vecSubscribed.size(); x++) {
                    ssd = vecSubscribed[x];
                    if (username == ssd.getUserName()) {
                        if (password == ssd.getPassword()) {
                            cout << "a que hora pasas por el pan subscribed(?)\n";
                            clean();
                            opc = 0;
                            break;
                        }else {
                            cout << "Incorrect username or password\n";
                            clean();
                            break;
                        }
                    }else {
                        cout << "Incorrect username or password\n";
                        clean();
                        break;
                    }
                }
                break;
                //MENU PROVIDER USER
            case 4:
                for (int x = 0; x < vecProvider.size(); x++) {
                    prv = vecProvider[x];
                    if (username == prv.getUserName()) {
                        if (password == prv.getPassword()) {
                            cout << "pa donde tan dindo provider\n";
                            clean();
                            opc = 0;
                            break;
                        }else {
                            cout << "Incorrect username or password\n";
                            clean();
                            break;
                        }
                    }else {
                        cout << "Incorrect username or password\n";
                        clean();
                        break;
                    }
                }
                break;
            default:
                cout << "Wrong option, please try again.\n";
                clean();
                break;
        }
    }while(opc != 0);
    clean();
}


void Menu(){
    int opc;
    do {
        cout << "Welcome to our program, please login\n";
        cout << "Option menu:\n";
        cout << "----------------\n";
        cout << "1. Login\n";
        cout << "2. Invited\n";
        cout << "3. About\n";
        cout << "0. Exit\n";
        cout << "-> ";
        cin >> opc;
        switch (opc) {
            case 1: login(); break;
            case 2: /*web();*/ break;
            case 3:
                system("open /Users/user1/Desktop/Rentals/aboutWebPage/aboutWebPage.html ");
                clean();
                break;
            case 0: break;
            default:
                cout<<"Wrong option, please try again.\n";
                clean();
                break;
        }
    }while(opc != 0);

}

void menuAdmin(){
    int opc;
    do {
        cout << "Menu for administrators ;3\n";
        cout << "--------------------------\n";
        cout << "1. Inventory menu\n";
        cout << "2. Clients options\n";
        cout << "3. Rent car\n";
        cout << "0. Exit\n";
        cin >> opc;
        switch(opc){
            case 1: inventoryMenu(); break;
            case 2: clientsFuntions(); break;
            case 3: rentCar(); break;
            case 0: break;
            default:
                cout<<"Wrong option, please try again.\n";
                break;
        }
    }while(opc != 0);
}


void addInventoryItemsMenu(){
    int opc;
    Sport SportObj;
    Comfort ComfortObj;
    Work WorkObj;
    do {
        cout << "Please select what type of item do u add: \n";
        cout << "1. Comfort car\n";
        cout << "2. Sport car\n";
        cout << "3. Work car\n";
        cout << "0. Go back\n";
        cout << "-> ";
        cin >> opc;
        switch (opc) {
            case 1:
                addComfort();
                break;
            case 2:
                addSport();
                break;
            case 3:
                addWork();
                break;
            case 0: break;

            default:
                cout<< "Wrong option, please try again\n";
                break;
        }
    }while(opc != 0);

}


void inventoryMenu(){
    int opc;
    do {
        cout << "Inventory Menu\n";
        cout << "--------------\n\n";
        cout << "1. Check inventory\n";
        cout << "2. Add items\n";
        cout << "3. See rented items\n";
        cout << "0. Go back\n";
        cout<< "-> ";
        cin>> opc;

        switch (opc) {
            case 1: checkInventory(); break;
            case 2: addInventoryItemsMenu(); break;
            case 3: rentedItems(); break;
            case 0: break;
            default:
                cout<< "Wrong option, please try again\n";
        }
    }while(opc != 0);
}


