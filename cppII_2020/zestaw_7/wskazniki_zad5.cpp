#include <iostream>

using namespace std;

int n;
double *tab;

void eraseMemory(double *w);

int main()
{
    cout << "Enter the array's size: " ;
    cin>>n;


    tab = new double[n];

    eraseMemory(tab);

    return 0;
}

void eraseMemory(double *w)
{
    cout<<"Memory is empty";
    delete []w;
}
