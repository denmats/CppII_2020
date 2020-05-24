#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

class Obywatel
{
    string name;
    string surname;
    int yearOfBirth;

public:
    Obywatel(string n, string s, int yob)
    {
        name = n;
        surname = s;
        yearOfBirth = yob;
    }

    int getYearOfBirth()
    {
        return yearOfBirth;
    }

    int getCurrentYear()
{
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    int year = aTime->tm_year + 1900; // Year is # years since 1900

    return year;
}

    int getCurrentAge(Obywatel citizen)
    {
        return getCurrentYear()-citizen.getYearOfBirth();
    }

    bool IsPerson1OlderPerson2(Obywatel Ob1, Obywatel Ob2)
    {
        if(Ob1.getCurrentAge(Ob1)>Ob2.getCurrentAge(Ob2))
          return true;
          return false;
    }
};



int main()
{
    Obywatel Ob("D","D",1999);
    cout<<Ob.getCurrentAge(Ob)<<endl;

    Obywatel Ob1("A","A",1890);
    Obywatel Ob2("B","C", 2001);

    cout<<Ob1.IsPerson1OlderPerson2(Ob1,Ob2)<<endl;

    return 0;
}
