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
    double tab[n];
    double *w;
    w = &tab[0];

    //this loop only for demonstration,it is not necessary for program
    for(int i=0;i<n; i++){
        cout<<(int)&tab[i]<<" ";
    }
    cout<<endl;

    return (int)w;
}


