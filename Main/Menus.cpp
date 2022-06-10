//
// Created by User on 6/1/22.
//
#include <iostream>
#include "Main/userCreator2000.cpp"
using namespace::std;

//definicion de variables y arreglos globales

//Definicion de metodos
void menuAdmin();
void createNewClients();
void login();
//void clean();
void inventory();
void firstRun();
void Menu();

//Implementacion de metodos
/*void clean(){
    system("clear");
}*/
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
    //clean();
    cout<< objAdmin.getUserName() <<endl;
    cout<< objAdmin.getPassword() <<endl;
    Menu();
}

void login(){
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
                            opc = 0;
                            break;
                        }else {
                            cout << "Incorrect username or password\n";
                            break;
                        }
                    }else {
                        cout << "Incorrect username or password\n";
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
                            opc = 0;
                            break;
                        }else {
                            cout << "Incorrect username or password\n";
                            break;
                        }
                    }else {
                        cout << "Incorrect username or password\n";
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
                            opc = 0;
                            break;
                        }else {
                            cout << "Incorrect username or password\n";
                            break;
                        }
                    }else {
                        cout << "Incorrect username or password\n";
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
                            cout << "pa donde tan dindo\n";
                            opc = 0;
                            break;
                        }else {
                            cout << "Incorrect username or password\n";
                            break;
                        }
                    }else {
                        cout << "Incorrect username or password\n";
                        break;
                    }
                }
                break;
            default:
                cout << "Wrong option, please try again.\n";
                break;
        }
    }while(opc != 0);
}


void Menu(){
    int opc;
    do {
        cout << "Welcome to our program, please log in\n";
        cout << "Option menu:\n";
        cout << "----------------\n";
        cout << "1. Login\n";
        cout << "2. Invited\n";
        cout << "3. About\n";
        cout << "0. Exit\n";
        cout << "-> ";
        cin >> opc;
        switch (opc) {
            case 1:
                login();
                break;
            case 2:
                //web.cppp
                break;
            case 3:
                //about.cpp
                break;
            case 0:
                break;
            default:
                cout<<"Wrong option, please try again.\n";
                break;
        }
    }while(opc != 0);

}

void createNewClients(){
    int opc;
    do {
        cout << "Seleccione el tipo de usuario que desea crear: \n";
        cout << "1. Usuario normal\n";
        cout << "2. Usuario proveedor\n";
        cout << "3. Usuario Subcribed\n";
        cout << "4. Usuario Admin\n";
        cout << "0. exit\n";
        cin>> opc;

        switch (opc) {
            case 1: CreateUser(); break;
            case 2: CreateProvider(); break;
            case 3: CreateSubscribed(); break;
            case 4: CreateAdmin(); break;
            case 0: menuAdmin(); break;
            default: cout<<"Incorrect option, please try again.\n";
        }
    }while(opc != 0);
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
        cout << "5. Search suplier\n";
        cout << "0. Exit\n";
        cin >> opc;
        switch(opc){
            case 3: createNewClients(); break;
            case 0: Menu(); break;
            default:
                cout<<"Wrong option, please try again.\n";
                break;
        }
    }while(opc != 0);
}



