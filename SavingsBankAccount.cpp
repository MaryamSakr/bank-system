#include "SavingsBankAccount.h"
#include <iostream>

using namespace std;

SavingsBankAccount::SavingsBankAccount() {
    minimumBalance=1000;
}

void SavingsBankAccount::set_bala(long double balan) {
    while(balan<minimumBalance) {
        cout<<"the minimum balance is "<<minimumBalance<<" please enter the number over that: "<<"\n";
        cin>>balan;
    }
    balance=balan;

}

int SavingsBankAccount::get_mini() {
    return minimumBalance;
}
int SavingsBankAccount::get_bala() {
    return balance;
}

void SavingsBankAccount::save_withdraw() {
    long double money;
    cin>>money;
    if(money>balance-minimumBalance ) {
        cout<<"the balance is not sufficient";
    }
    else {
        cout<<"the amount is sufficient";
        balance-=money;
        this->balance=balance;
    }


}

void SavingsBankAccount::save_deposit() {
    long double depo;
    cin>>depo;
    if(depo<100) {
        cout<<"the deposit is less than the minimum deposit";
    }
    else {
        this->balance= balance+depo;
    }

}

