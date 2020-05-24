#include <iostream>
#include <ctime>
#include <cstdio>


using namespace std;

long int factorial(int n);
long int factorial_recur(int n);

int main()
{
    int n;
    cin>>n;
    clock_t start = clock();
    cout<<factorial(n)<<endl;
    clock_t finish = clock();
    double diff_loop = (double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"Time for loop: "<<diff_loop<<endl;
    cout<<endl;

    clock_t start1 = clock();
    cout<<factorial_recur(n)<<endl;
    clock_t finish1 = clock();
    double diff_recursion = (double)(finish1 - start1)/CLOCKS_PER_SEC;
    cout<<"Time for recursion: "<<diff_recursion<<endl;
    return 0;
}

long int factorial_recur(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    else return factorial_recur(n-1)*n;
}


long int factorial(int n){
    int factorial = 1;
    if(n==0) return 1;
    if(n==1) return 1;
    for(int i =1; i<=n; i++){
        factorial *= i;
    }
    return factorial;
}
