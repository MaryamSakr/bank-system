#include "client.h"
#include <iostream>
#include "BankAccount.h"
#include "SavingsBankAccount.h"

client::client(){}


void client::set_name() {
    string n;
    cout<<"Please Enter Client Name: ";
    cin>>n;
    name=n;
}
void client::set_add() {
    string ad;
    cout<<"\n"<<"Please Enter Client Address: ";
    cin>>ad;
    add=ad;
}
void client::set_phone() {
    int ph;
    cout<<"\n"<<"Please Enter Client Phone: ";
    cin>>ph;
    phone=ph;
}

void client::set_type(){
    cout<<"What Type of Account Do You Like?"<<"\n"<<"(1)Basic"<<"\n"<<"(2)Saving"<<"\n";
    cin>>type;
    while(type!=1 && type!=2) {
        cout<<"wrong choice please choose right one: ";
        cin>>type;
    }
    this->type=type;
    if (type==1) {
        BankAccount acc;
        acc.set_acc(acc.get_acc());
        cout<<"Please Enter the Starting Balance: ";
        cin>>balance;
        acc.set_bala(balance);
        cout<<acc.get_acc();
    }
    else {
        SavingsBankAccount acc;
        acc.set_acc(acc.get_acc());
        cout<<"Please Enter the Starting Balance: ";
        cin>>balance;
        acc.set_bala(balance);
        cout<<acc.get_acc();
    }


}

string client::get_name() {
    return name;
}
string client::get_add() {
    return add;
}
int client::get_phone() {
    return phone;
}
int client::get_type() {
    return type;
}
long double client::get_balance() {
    return balance;
}
