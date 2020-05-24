#include <iostream>

using namespace std;


string str;
const char * pointer = &str[0];

char convertStringToChar(string str, const char* pointer);

int main()
{
    cout<<"The pointer display the first item of new char array: "<<convertStringToChar(str, pointer)<<endl;

    return 0;
}

char convertStringToChar(string str, const char* pointer)
{
    cout<<"Write down one word: ";
    cin>>str;


    char buf[str.length()];
    for(int i=0;i<str.length();i++)
    {
        buf[i]=str[i];
    }

    pointer = &buf[0];

    return *pointer;
}
