#include "BankingApplication.h"
#include <iostream>

using namespace std;
BankingApplication::BankingApplication(){}

int BankingApplication::display_menu() {
    cout<<"Welcome to FCAI Banking Application."<<"\n";
    cout<<"1. Create a New Account."<<"\n"<<"2. List Clients and Accounts."<<"\n"<<"3. Withdraw Money."<<"\n"<<"4. Deposit Money."<<"\n";
    cin>>choice;
    while (choice!=1 ||choice!=2 || choice!=3 || choice!=4 ) {
        cout<<"wrong choice please enter a right one: ";
    }
    return choice;
}

void BankingApplication::implementaion() {
    BankingApplication acc;
    if(choice==1){
        acc.set_name();
        acc.set_add();
        acc.set_phone();
        acc.set_type();
    }
    else if(choice==2) {
        acc.enter_id();
        acc.get_name();
        acc.get_add();
        acc.get_phone();
        acc.get_type();
    }
    else if(choice==3) {
        acc.enter_id();
        if(acc.get_type()==1){
            acc.withdraw();
        }
        else {
            acc.save_withdraw();
        }
    }
    else {
        acc.enter_id();
        if(acc.get_type()==1){
            acc.deposit();
        }
        else {
            acc.save_deposit();
        }

    }

}
