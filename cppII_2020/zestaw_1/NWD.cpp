#include <iostream>

using namespace std;

int getNWD_recursion(int a, int b);
int getNWD_loop(int a, int b);

//NWD(a,b)
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<getNWD_recursion(a,b); //find NWD with recursion
    //cout<<getNWD_loop(a,b);// find NWD with loop
    return 0;
}

int getNWD_recursion(int a, int b){
    if(a == b)return a;
    else {
        if(a>b) return getNWD_recursion(b, a-b);
        else return getNWD_recursion(a, b-a);
    }
}

int getNWD_loop(int a, int b){
    while(a != b){
        if(a>b) a = a - b;
        else b = b - a;
    }
    return a;
}
