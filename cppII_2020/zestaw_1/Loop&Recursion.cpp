#include <iostream>
#include <cstdlib>
#include <math.h>
#include <ctime>

using namespace std;

//Napisz program wyznaczajacy iteracyjnie i rekurecyjne sume szeregu: 1/x + 1/x^2 + 1/x^3 + 1/x^4 + . . . + 1/x^n

double sum_loop(int x, int n, double sum);
double sum_recursion(int x, int n, double sum);

int main()
{
    int x, n;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter degree: ";
    cin >> n;
    //loop
    clock_t start = clock();
    if (x == 0) cout<< "Do not divide by zero!"<<endl;
    else cout<<sum_loop(x,n,0)<<endl;
    clock_t finish = clock();
    double diff_loop = (double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"Time for loop: "<<diff_loop<<endl;

    //recursion
    clock_t start1 = clock();
    if (x == 0) cout<< "Do not divide by zero!"<<endl;
    else cout<<sum_recursion(x,n,0)<<endl;
    clock_t finish1 = clock();
    double diff_recursion = (double)(finish1-start1)/CLOCKS_PER_SEC;
    cout<<"Time for loop: "<<diff_recursion<<endl;
    return 0;
}

double sum_recursion(int x, int n, double sum)
{
    if(n == 0) return 1;
    if(n == 1) return 1/(double)x;

    else return sum_recursion(x,n-1,sum) +1/pow((double)x,n);
}


double sum_loop(int x, int n, double sum)
{
    if(n == 0) return 1;
    else
    {
        for(int i=1; i<=n; i++)
            sum +=1/ (double)pow(x,i);
        return sum;
    }
}
