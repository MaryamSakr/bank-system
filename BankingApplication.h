#ifndef BANKINGAPPLICATION_H
#define BANKINGAPPLICATION_H
#include "client.h"


class BankingApplication :public client
{
private:
    int choice;
public:
    BankingApplication();
    int display_menu();
    void implementaion();
};

#endif // BANKINGAPPLICATION_H
