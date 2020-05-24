#include <iostream>
#include <cmath>

using namespace std;

class bazowa
{
public:
    virtual double modul()=0;
};

class liczba :bazowa
{
public:
    double re;

public:
    liczba(double x)
    {
        re = x;
    }

public:
    virtual double modul()
    {
        return abs(re);
    };

    bool wieksza(liczba &ref)
    {
        liczba l(re);
        liczba *l2;
        l2 = &ref;

        //comparing cell number of memory with absolute number of argument
        if((int)l2 >(int) modul()) return true;
        return false;
    }
};

int main()
{
    liczba l(-4000230.25);
    liczba *l1;
    l1 = &l;

    //public function modul()
    cout<<l.modul()<<endl;

    cout<<(int)l1<<endl;
    cout<<l.wieksza(l);

    return 0;
}
