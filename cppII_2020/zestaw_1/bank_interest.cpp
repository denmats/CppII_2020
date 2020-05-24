#include <iostream>

using namespace std;

double withdrawal(double deposit,double interest, int years);

int main()
{
    int years;
    double deposit,interest;
    cin>>deposit;
    cin>>interest;
    cin>>years;
    cout << withdrawal((double)deposit,(double)interest,years) << endl;
    return 0;
}

double withdrawal(double deposit,double interest, int years){
    if(years==0)return deposit;
    if(years==1)return deposit*((1+(double)interest/(double)100));
    else return withdrawal(deposit,interest,years-1)*((1+(double)interest/(double)100));
}
