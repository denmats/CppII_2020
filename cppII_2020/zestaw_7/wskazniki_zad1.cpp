#include <iostream>

using namespace std;

int num1,num2;
int *r1, *r2;


void getReference(int &num1, int &num2);


int main()
{
    cout << "Enter number1: " << endl;
    cin>>num1;
    cout << "Enter number2: " << endl;
    cin>>num2;

    cout<<"Number1 (before change) is: "<<num1<<endl;
    cout<<"Number2 (before change) is: "<<num2<<endl;

    getReference(num1,num2);

    cout<<"Number1 (after change) is: "<<num1<<endl;
    cout<<"Number2 (after change) is: "<<num2<<endl;
    return 0;
}

void getReference(int &num1, int &num2)
{
    r1 = &num1;
    r2 = &num2;

    num1 = (int)r1;
    num2 = (int)r2;
}


