#ifndef SAVINGSBANKACCOUNT_H
#define SAVINGSBANKACCOUNT_H
#include "BankAccount.h"

class SavingsBankAccount : public BankAccount
{
private:
    int minimumBalance;
    long double balance;
public:
    SavingsBankAccount();
    void save_withdraw();
    void save_deposit();
    void set_mini(int mini);
    void set_bala(long double balan);
    int get_mini();
    int get_bala();
};

#endif // SAVINGSBANKACCOUNT_H
