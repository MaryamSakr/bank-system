#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount()
{
    balance=0;
}

BankAccount::BankAccount(long double bala) {
    balance=bala;
}

 void BankAccount::set_acc(int account_id) {
    account_id++;
    this->account_id=account_id;
 }

void BankAccount::set_bala(long double bala) {
    balance=bala;
}

int BankAccount::get_acc() {
    return account_id;
}

long double BankAccount::get_balance() {
    return balance;
}

int BankAccount::enter_id() {
    int id;
    cin>>id;
    return id;
}

void BankAccount::withdraw() {
    long double money;
    cin>>money;
    if(money>balance) {
        cout<<"the balance is not sufficient";
    }
    else {
        cout<<"the amount is sufficient";
        balance-=money;
        this->balance= balance;
    }

}

void BankAccount::deposit() {
    long double depo;
    cin>>depo;
    this->balance= balance+depo;
}
