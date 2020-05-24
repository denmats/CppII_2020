#include <iostream>

using namespace std;


int *b, num1, num2;
int &a =num1;


void getSwap(int &a, int *b);


int main()
{
    cout << "Enter number1: " << endl;
    cin>>num1;
    cout << "Enter number2: " << endl;
    cin>>num2;

    cout<<"Number1 (before change) is: "<<num1<<endl;
    cout<<"Number2 (before change) is: "<<num2<<endl;

    getSwap(a, b);

    cout<<"Number1 (after change) is: "<<num1<<endl;
    cout<<"Number2 (after change) is: "<<num2<<endl;
    return 0;
}

void getSwap(int &a, int *b)
{
    num1 = (int)&a;

    b = &num2;
    num2 = (int)b;
}


