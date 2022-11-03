#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H


class BankAccount
{
private:
    int account_id=0;
    long double balance;
public:
    BankAccount(long double bala);
    BankAccount();
    void set_acc(int account_id);
    void set_bala(long double bala);
    int get_acc();
    int enter_id();
    long double get_balance();
    void withdraw();
    void deposit();
};


#endif // BANKACCOUNT_H
