#include <iostream>
#include "calculator.h"
#include <windows.h>
#include <stdexcept>

using namespace std;

void Calculator::read_first()
{
    cout<<"Enter the first value: ";
    cin>>first;
}

void Calculator::read_second()
{
    cout<<"Enter the second value: ";
    cin>>second;
}

void Calculator::display_result()
{
    cout<<"Result is "<<Calculator::result<<endl;
}

void Calculator::add(double a, double b)
{
    result = a + b;
}

void Calculator::subtract(double a, double b)
{
    result = a - b;
}

void Calculator::multiply(double a, double b)
{
    result = a * b;
}

void Calculator::divide(double a, double b)
{
    try
    {
        result = a / b;
    }
    catch (runtime_error& e)
    {
        cout << "Exception occurred" << endl
             << e.what();
    }
}

void Calculator::make_calculation()
{
    int choice;
    while(true)
    {
        cout<<endl<<"Menu"<<endl;
        cout<<"------------"<<endl;
        cout<<"[1] Addition (a + b)"<<endl;
        cout<<"[2] Subtraction (a - b)"<<endl;
        cout<<"[3] Multiplying (a * b)"<<endl;
        cout<<"[4] Dividing (a / b)"<<endl;
        cout<<"[0] Exit"<<endl;
        cout<<"------------"<<endl;
        cout<<"Please make your choice: ";
        cin>>choice;

        switch(choice)
        {
        case 0:
            exit(0);
        case 1:
            Calculator::read_first();
            Calculator::read_second();
            Calculator::add(first, second);
            break;
        case 2:
            Calculator::read_first();
            Calculator::read_second();
            Calculator::subtract(first, second);
            break;
        case 3:
            Calculator::read_first();
            Calculator::read_second();
            Calculator::multiply(first, second);
            break;
        case 4:
            Calculator::read_first();
            Calculator::read_second();
            Calculator::divide(first, second);
            break;
        default:
            result = 0;
            cout<<"Wrong choice!"<<endl;
            break;
        }

        Calculator::display_result();
    }
}
