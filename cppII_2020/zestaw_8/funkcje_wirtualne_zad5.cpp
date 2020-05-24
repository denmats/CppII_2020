#include <iostream>

using namespace std;

class czworokat
{
protected:
    int *a;
    int *b;
    int *c;
    int *d;

public:
    czworokat(int x, int y, int z, int p)
    {
        a = &x;
        b = &y;
        c = &z;
        d = &p;
    }

public:
    int getA(){return *a;};
    int getB(){return *b;};
    int getC(){return *c;};
    int getD(){return *d;};

public:
    void wypisz()
    {
        cout<<"a = "<<*a<<", b = "<<*b<<", c = "<<*c<<", d = "<<*d<<endl;
    }

public:
    virtual int pole() = 0;
};


class prostokat :czworokat
{
public:
    int w1;
    int w2;

public:
    prostokat(int x, int y):czworokat(x, y, x, y)
    {
        w1 = x;
        w2 = y;
    }

    void wypisz()
    {
        cout<<"a = "<<czworokat::getA()<<", b = "<<czworokat::getB()<<endl;
    }

    void wymiary(int w1, int w2)
    {
        c = a = &w1;
        d = b = &w2;
        cout<<"w1 = "<<w1<<", w2 = "<<w2<<endl;
        czworokat::wypisz();
    }

    virtual int pole()
    {
        return (w1 + w2)*2;
    }
};


class kwadrat :czworokat
{
public:
    int w1;

public:
    kwadrat(int x):czworokat(x, x, x, x)
    {
        w1 = x;
    }

    void wypisz()
    {
        cout<<"a = "<<czworokat::getA()<<endl;
    }

    void wymiary(int w1)
    {
        c = a = b = d = &w1;

        cout<<"w1 = "<<w1<<endl;
        czworokat::wypisz();
    }

    virtual int pole()
    {
        return w1*w1;
    }
};

int main()
{
    prostokat prs(1,4);
    prs.wypisz();
    prs.wymiary(2,5);
    cout<<prs.pole()<<endl;

    kwadrat kw(4);
    kw.wypisz();
    kw.wymiary(3);
    cout<<kw.pole()<<endl;

    return 0;
}
