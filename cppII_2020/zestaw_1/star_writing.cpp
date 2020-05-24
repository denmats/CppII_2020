#include <iostream>

using namespace std;

string star_writing(int s);

int main()
{
    int stars;
    cin>>stars;
    cout<<star_writing(stars)<<endl;
    return 0;
}

string star_writing(int s){
    if(s==0) return "0";
    if(s==1) return "*";
    else return star_writing(s-1)+"*";
}
