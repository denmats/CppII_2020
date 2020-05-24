#include <iostream>

using namespace std;

class towar
{
public:
    string nazwa;
    float cena;
    int ilosc;

public:
    towar(string x, float y, int z)
    {
        nazwa = x;
        cena = y;
        ilosc = z;
    }


    virtual void opis()
    {
        cout<<nazwa<<", "<<cena<<", "<<ilosc<< ";"<<endl;
    }

};

void getItemDescription(towar *t)
{
    t ->opis();
}

int main()
{
    towar t1("racket", 5.65, 3);
    towar t2("ball",0.12, 20);

    towar *t = &t2;
    getItemDescription(t);


    return 0;
}
