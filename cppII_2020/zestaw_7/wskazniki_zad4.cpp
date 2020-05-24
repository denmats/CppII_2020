#include <iostream>

using namespace std;

int n;

int getPointerAtFirstItem(int n);

int main()
{
    cout << "Enter n, where n > 0: " << endl;
    cin>>n;
    cout<<"The cell number in memory which belong to the first double number: "<<getPointerAtFirstItem(n)<<endl;

    return 0;
}

int getPointerAtFirstItem(int n)
{
    double *tab;
    tab = new double[n];

    //this loop is for demonstration,it is not necessary for program
    for(int i=0;i<n; i++){
        cout<<(int)&tab[i]<<" ";
    }
    cout<<endl;
    delete[]tab;

    return (int)&tab[0];
}


