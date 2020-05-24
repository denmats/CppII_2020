#include <iostream>
#include "konto.h"
#include <windows.h>


using namespace std;


void Konto::check_account_balance()
{
    cout<<"Balance: "<<balance<<endl;
}

void Konto::deposit()
{
    double deposit;
    cout<<"Please enter the amount of money you want to deposit: ";
    cin>>deposit;
    cout<<"Your deposit is "<<deposit<<endl;
    balance +=deposit;
}
void Konto::withdrawal()
{
    double withdrawal;
    cout<<"Please enter the amount of money you want to withdraw: ";
    cin>>withdrawal;
    if(balance < withdrawal)
    {
        cout<<"You don't have enough means on your account!"<<endl;
    }else
    {
        cout<<"Please take your money..."<<endl;
        balance -=withdrawal;
    }
}
void Konto::change_PIN()
{
    cout<<"Enter a new PIN: ";
    cin>>PIN;
}

void Konto::display_menu()
{
    int choice = 0;

    while(true)
    {
        cout<<endl<<"Menu"<<endl;
        cout<<"------------"<<endl;
        cout<<"[1] Balance"<<endl;
        cout<<"[2] Deposit"<<endl;
        cout<<"[3] Withdrawal"<<endl;
        cout<<"[4] Change PIN"<<endl;
        cout<<"[0] Exit"<<endl;
        cout<<"------------"<<endl;
        cout<<"Please make your choice: ";
        cin>>choice;

        switch(choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            Konto::check_account_balance();
            break;
        case 2:
            Konto::deposit();
            break;
        case 3:
            Konto::withdrawal();
            break;
        case 4:
            Konto::change_PIN();
            break;
        default:
            cout<<"Wrong choice!"<<endl;
            break;
        }
    }
}



