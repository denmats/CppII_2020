#include <iostream>

using namespace std;

class Zesp
{
    double re;
    double im;

public:
    Zesp()
    {

    }

    Zesp(double a, double b)
    {
        re = a;
        im = b;
    }

    double getRe()
    {
        return re;
    }

    double getIm()
    {
        return im;
    }


    Zesp add(Zesp a, Zesp b)
    {
        double x = a.getRe()+b.getRe();
        double y = a.getIm()+b.getIm();
        re = x;
        im = y;
        Zesp result(x,y);
        return result;
    }

    Zesp subtract(Zesp a, Zesp b)
    {
        double x = a.getRe()-b.getRe();
        double y = a.getIm()-b.getIm();
        re = x;
        im = y;
        Zesp result(x,y);
        return result;
    }

    void display_zespolone()
    {
        cout<<"Liczba zespolona: ("<<re<<","<<im<<")"<<endl;
    }
};




int main()
{
    Zesp z1(2,-1);
    Zesp z2(3,56);
    z1.display_zespolone();
    z2.display_zespolone();


    Zesp z3;
    //adition
    z3.add(z1,z2);
    z3.display_zespolone();

    //subtraction
    z3.subtract(z1,z2);
    z3.display_zespolone();
    return 0;
}
