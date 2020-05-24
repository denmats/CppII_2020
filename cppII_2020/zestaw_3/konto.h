#include <iostream>

using namespace std;

class Konto
{
    string PIN;
    double balance;

public:
    void check_account_balance();
    void display_menu();
    void deposit();
    void withdrawal();
    void change_PIN();

    Konto()
    {
        PIN = "0000";
        balance = 0;
    }
};
