#ifndef PROJECTX_PROVIDER_H
#define PROJECTX_PROVIDER_H

#include "Classes/Users_Classes/Admin.h"
#include "User.h"
using namespace::std;

class Provider: public User{
    public:
        Provider ();
        virtual ~Provider();

        void setCompany();
        void setNIT();
        
        string getCompany();
        long getNIT();

    private:
        string company;
        long NIT;

    protected:
};


#endif