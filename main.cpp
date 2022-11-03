#include <iostream>
#include "BankAccount.h"
#include "client.h"
#include "BankingApplication.h"

using namespace std;

int main()
{
    BankingApplication acc;
    acc.display_menu();
    acc.implementaion();
    return 0;
}
