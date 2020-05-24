#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class PLIK
{
    fstream id_pliku;
    char* nazwa_pliku;
    string stan_pliku;
    char tryb_otwierania;

public:

    PLIK()
    {
        nazwa_pliku = "plik_tekstowy.txt";

    }

    ~PLIK()
    {
        delete &id_pliku;
    }


    //ustaw_tryb – ustawia tryb otwierania pliku

    void ustaw_tryb(char tryb)
    {
        tryb_otwierania = tryb;
        switch(tryb_otwierania)
        {
        case 'R':
            tryb_otwierania = 'R';
            break;
        case 'W':
            tryb_otwierania = 'W';
            break;
        case 'U':
            tryb_otwierania = 'U';
            break;
        default:
            cout<<"Niepoprawne podany tryb! Tryb pliku nie zostal ustawiony!"<<endl;
            while(tryb_otwierania != 'R'||tryb_otwierania!='W'||tryb_otwierania!='U')
            {
                cout<<"Podaj tryb otwierania: R, W lub U ";cin>>tryb_otwierania;
                if(tryb_otwierania == 'R'||tryb_otwierania == 'W'||tryb_otwierania == 'U')
                    break;
            }
            break;
        }
    }


    //wyswietl_tryb – wyświetla tryb otwierania pliku

    void wyswietl_tryb()
    {
        cout<<"Tryb pliku: "<<tryb_otwierania<<endl;
    }


    //wyswietl_stan_pliku – wyświetla stan pliku: "zamkniety lub nie istnieje" albo "otwarty"

    void wyswietl_stan_pliku()
    {
        if(id_pliku.good() == false)
        {
           stan_pliku = "zamkniety lub nie istnieje";
        }
        else
        {
           stan_pliku = "otwarty";
        }
        cout<<"Stan pliku: "<<stan_pliku<<endl;
    }


    //otworz – otwiera plik o nazwie ustawionej w konstruktorze i w trybie ustawionym za pomocą metody ustaw_tryb. Sprawdza ewentualne błędy otwierania pliku! Ustawia stan pliku.

    void otworz()
    {
        id_pliku.open(nazwa_pliku, ios::in);
        if(id_pliku.good()==false)
        {
            cout<<"Plik nie istnieje!"<<endl;
            exit(0);
        }
        stan_pliku = "otwarty";
    }


    //zamknij – zamyka plik o nazwie ustawionej w konstruktorze. Ustawia stan pliku.

    void zamknij(void)
    {
        id_pliku.close();
        stan_pliku = "zamkniety lub nie istnieje";
    }


    //wyswietl_zawartosc_pliku – czyta i wyświetla wiersze pliku o nazwie ustawionej w konstruktorze. Wiersze nie mogą mieć więcej znaków niż 255

    void wyswietl_zawartosc_pliku(void)
    {
        string line;
        int nr = 1;
        while(getline(id_pliku,line))
        {
            cout<<line<<endl;
            nr++;
        }
    }
};

int main()
{
    PLIK p;
    p.zamknij();
    p.ustaw_tryb('R');
    p.wyswietl_stan_pliku();
    p.otworz();
    p.wyswietl_tryb();
    p.wyswietl_stan_pliku();
    p.wyswietl_zawartosc_pliku();
    p.zamknij();
    p.wyswietl_stan_pliku();
    return 0;
}
