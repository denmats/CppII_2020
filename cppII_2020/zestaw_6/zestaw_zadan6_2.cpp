#include <iostream>

using namespace std;

class Uczen
{
protected:
    string Imie;
    string Nazwisko;
    string Pesel;

public:
    void Ustaw_imie()
    {
        cout<<"What's the name? ";
        cin>>Imie;
    }

    void Ustaw_nazwisko()
    {
        cout<<"What's the surname? ";
        cin>>Nazwisko;
    }

    void Ustaw_pesel()
    {
        cout<<"What's the pesel? ";
        cin>>Pesel;
    }

    Uczen(){}
};

class UczenSzkoly :public Uczen
{
    string Nazwa_szkoly;

public:
    void Ustaw_szkole()
    {
        cout<<"Put down the school title: ";
        cin>>Nazwa_szkoly;
    }

    UczenSzkoly()
    :Uczen(){}
};


int main()
{


    return 0;
}

