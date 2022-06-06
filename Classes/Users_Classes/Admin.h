#ifndef PROJECTX_ADMIN_H
#define PROJECTX_ADMIN_H
using namespace::std;

class Admin{
public:
    Admin ();
    virtual ~Admin();

    void setUserName();
    void setPassword();
    void setState();
    void setType();

    string getUserName();
    string getPassword();
    int getType();
    bool getState();

private:
    string username, password;
    bool state;
    int type;

protected:
};


#endif