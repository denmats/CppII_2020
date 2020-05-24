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

    void wyswietl()
    {
        cout<<"Uczen: "<<Nazwisko<<","<<Imie<<", "<<Pesel<<endl;
    }

    Uczen(){}
};

class UczenSzkoly :public Uczen
{
protected:
    string Nazwa_szkoly;

public:
    void Ustaw_szkole()
    {
        cout<<"Put down the school title: ";
        cin>>Nazwa_szkoly;
    }

    void wyswietl()
    {
        cout<<"Uczen: "<<Uczen::Nazwisko<<","<<Uczen::Imie<<" "<<Uczen::Pesel<<", Szkola: "<<Nazwa_szkoly<<endl;
    }

    UczenSzkoly()
    :Uczen(){}
};

class UczenKlasy :public UczenSzkoly
{
    int klasa;
public:
    void Ustaw_klase()
    {
        cout<<"Give the class number: ";
        cin>>klasa;
    }

    void wyswietl()
    {
        cout<<"Uczen: "<<UczenSzkoly::Nazwisko<<","<<UczenSzkoly::Imie<<" "<<UczenSzkoly::Pesel<<", Szkola: "<<UczenSzkoly::Nazwa_szkoly<<", klasa: "<<klasa<<endl;
    }

    UczenKlasy()
    :UczenSzkoly(){}
};


int main()
{
    UczenKlasy uk1;
    uk1.Ustaw_imie();
    uk1.Ustaw_nazwisko();
    uk1.Ustaw_pesel();
    uk1.Ustaw_szkole();
    uk1.Ustaw_klase();
    uk1.wyswietl();


    return 0;
}


