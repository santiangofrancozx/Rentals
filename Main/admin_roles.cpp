//funciones para el admin
#include <iostream>
using namespace::std;

//#include "userCreator2000.cpp"
#include "Main/metods.cpp"
//#include "Main/Menus.cpp"

//implementacion de metodos


void createNewClients(){
    int opc;
    do {
        cout << "Seleccione el tipo de usuario que desea crear: \n";
        cout << "1. Usuario normal\n";
        cout << "2. Usuario proveedor\n";
        cout << "3. Usuario Subcribed\n";
        cout << "4. Usuario Admin\n";
        cout << "0. exit\n";
        cout << "-> ";
        cin>> opc;

        switch (opc) {
            case 1: CreateUser(); break;
            case 2: CreateProvider(); break;
            case 3: CreateSubscribed(); break;
            case 4: CreateAdmin(); break;
            case 0: break;
            default: cout<<"Incorrect option, please try again.\n";
        }
    }while(opc != 0);
}

//2. buscar/consultar cliente
void searchClient(){
    int opc;
    do{
        cout << "Select the type of user you want to find: \n";
        cout << "1. Common user\n";
        cout << "2. Provider user\n";
        cout << "3. Suscribed user\n";
        cout << "4. Admin user\n";
        cout << "0. Go back\n";
        cout << "-> ";
        cin>> opc;

        switch(opc){
            case 1: searchCommonUser(); break;
            case 2: searchProviderUser(); break;
            case 3: searchSubscribedUser(); break;
            case 4: searchAdmin(); break;
            case 0:  break;
            default: cout<<"Incorrect option\n";
        }
    }while(opc != 0);
}

//3. borrar usuario
void eraseClient(){
    int opc;
    do{
        cout << "Select the type of user you want to erase:\n";
        cout << "1. Common user\n";
        cout << "2. Provider user\n";
        cout << "3. Suscribed user\n";
        cout << "0. Go back\n";
        cout << "-> ";
        cin>> opc;

        switch(opc){
            case 1: eraseCommonUser(); break;
            case 2: eraseProviderUser(); break;
            case 3: eraseSuscriberUser(); break;
            case 0: break;
            default: cout << "Incorrect option\n";
        }
    }while(opc != 0);
}

//MENU EN ADMIN PARA CLIENTES
void clientsFuntions(){
    int opc;
    do{
        cout << "Options for clients:\n";
        cout << "--------------------\n";
        cout << "1. Create user\n";
        cout << "2. Search user\n";
        cout << "3. Erase user\n";
        cout << "0. Go back\n";
        cout << "-> ";
        cin >> opc;

        switch (opc) {
            case 1: createNewClients(); break;
            case 2: searchClient(); break;
            case 3: eraseClient(); break;
            case 0: break;
            default: cout << "Incorrect option\n";
        }
    }while(opc != 0);
}