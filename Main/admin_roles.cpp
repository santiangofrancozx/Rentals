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
            case 1:
                clear();
                CreateUser();
                break;
            case 2:
                clear();
                CreateProvider();
                break;
            case 3:
                clear();
                CreateSubscribed();
                break;
            case 4:
                clear();
                CreateAdmin();
                break;
            case 0: break;
            default:
                cout<<"Incorrect option, please try again.\n";
                clean();
        }
    }while(opc != 0);
    clean();
}

//2. buscar/consultar cliente
void searchClient(){
    int opc;
    do{
        cout << "Select the type of user you want to find: \n";
        cout << "1. Common user\n";
        cout << "2. Provider user\n";
        cout << "3. Subscribed user\n";
        cout << "4. Admin user\n";
        cout << "0. Go back\n";
        cout << "-> ";
        cin>> opc;

        switch(opc){
            case 1:
                clear();
                searchCommonUser();
                break;
            case 2:
                clear();
                searchProviderUser();
                break;
            case 3:
                clear();
                searchSubscribedUser();
                break;
            case 4:
                clear();
                searchAdmin();
                break;
            case 0:  break;
            default:
                cout<<"Incorrect option\n";
                clean();
        }
    }while(opc != 0);
    clean();
}

//3. borrar usuario
void eraseClient(){
    int opc;
    do{
        cout << "Select the type of user you want to erase:\n";
        cout << "1. Common user\n";
        cout << "2. Provider user\n";
        cout << "3. Subscribed user\n";
        cout << "0. Go back\n";
        cout << "-> ";
        cin>> opc;

        switch(opc){
            case 1:
                clear();
                eraseCommonUser();
                break;
            case 2:
                clear();
                eraseProviderUser();
                break;
            case 3:
                clear();
                eraseSubscribedUser();
                break;
            case 0: break;
            default:
                cout << "Incorrect option\n";
                clean();
        }
    }while(opc != 0);
    clean();
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
            case 1:
                clear();
                createNewClients();
                break;
            case 2:
                clear();
                searchClient();
                break;
            case 3:
                clear();
                eraseClient();
                break;
            case 0: break;
            default:
                cout << "Incorrect option\n";
                clean();
        }
    }while(opc != 0);
    clean();
}

//2. agregar item
void addItem(){
    int opc;
    do {
        cout << "Select the type of item you want to add: \n";
        cout << "1. Comfort car\n";
        cout << "2. Sport car\n";
        cout << "3. Work car\n";
        cout << "0. Go back\n";
        cout << "-> ";
        cin >> opc;

        switch(opc){
            case 1:
                clear();
                addComfort();
                break;
            case 2:
                clear();
                addSport();
                break;
            case 3:
                clear();
                addWork();
                break;
            case 0: break;
            default:
                cout << "Incorrect option\n";
                clean();
        }
    } while(opc != 0);
    clean();
}
