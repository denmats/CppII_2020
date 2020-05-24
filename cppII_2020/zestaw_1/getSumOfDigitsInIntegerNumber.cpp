#include <iostream>

using namespace std;
//example: input: 1265, output: 14 explanation: 1+2+6+5=14
int getSum(int n, int sum);

int main()
{
    int n, sum = 0;
    cin>>n;
    cout<<getSum(n, sum)<<endl;
    return 0;
}

int getSum(int n, int sum){
    if(n ==0) return sum;
    if(n==1) return ++sum;
   else {
        sum +=n%10;
        getSum(((n-=n%10) != 0)?n/=10:0,sum);
   }
}

