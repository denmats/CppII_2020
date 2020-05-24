#include <iostream>

using namespace std;

void writeOutNumbers(int number);

int main()
{
    int n;
    cin>>n;
    writeOutNumbers(n);
    return 0;
}

void writeOutNumbers(int number){
    if(number==1) cout<<1<<" ";
    else {
            cout<<number<<" ";
            writeOutNumbers(number-1);
    }
}
