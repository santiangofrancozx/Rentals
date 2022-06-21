#ifndef PROJECTX_USER_H
#define PROJECTX_USER_H
#include "Classes/Users_Classes/Admin.h"
using namespace::std;

class User: public Admin{
    public:
        User ();
        virtual ~User();

        void setMail();
        void setName();
        void setLastname();
        void setID();
        void setPhone();

        string getMail();
        string getName();
        string getLastname();
        long getID();
        long getPhone();

    private:
        string mail, name, lastname;
        long ID, phone;


    protected:
};


#endif