#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include "SavingsBankAccount.h"

using namespace std;

class client : public SavingsBankAccount
{
private:
    string name, add;
    int type , phone;
    long double balance;
public:
    client();
    void set_name();
    void set_add();
    void set_phone();
    void set_type();
    void set_balance(long double bala);
    string get_name();
    string get_add();
    int get_type();
    int get_phone();
    long double get_balance();
};

#endif // CLIENT_H
