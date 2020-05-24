#include <iostream>


using namespace std;

class Lista
{
public:
    int *tab;
    int t_size = 0;

    Lista()
    {
        tab = new int(t_size);
    }


    Lista(Lista &l)
    {
        tab = new int(*l.tab);
    }


    Lista dodaj_przod(Lista &l, int first)
    {
        Lista l2;

        if(l.t_size == 0)
        {
            t_size++;
            int *t;
            t = new int(t_size);
            t[0] = first;

            for(int i=1; i<t_size; i++)
            {
                t[i] = *tab;
            }

            for(int i=0; i<l.t_size; i++)
            {
                l.tab[i] = t[i];
            }
            delete  []t;
            l2 = l;
        }
        else
        {
            t_size++;
            int *t;
            t = new int[t_size];
            t[0]= first;

            for(int i=1; i<l.t_size; i++)
            {
                t[i] = l.tab[i-1];
            }


            for(int i=0; i<t_size; i++)
            {
                l.tab[i] = t[i];
            }
            delete  []t;
            l2 = l;
        }

        return l2;
    }


    Lista dodaj_tyl(Lista &l, int to_back)
    {
        Lista l2;
        t_size++;
        int *t;
        t = new int(t_size);
        t[t_size-1] = to_back;

        for(int i=0; i<t_size-1; i++)
        {
            t[i] = tab[i];
        }

        for(int i=0; i<l.t_size; i++)
        {
            l.tab[i] = t[i];
        }
        delete  []t;
        l2 = l;

        return l2;
    }


    Lista usun_tyl(Lista &l)
    {
        Lista l2;
        if(t_size > 0)
        {
            t_size--;
            int *t;
            t = new int[t_size];

            for(int i=1; i<t_size; i++)
            {
                t[i] = tab[i];
            }

            for(int i=1; i<l.t_size; i++)
            {
                l.tab[i] = t[i];
            }

            delete[] t;
            l2 = l;
        }
        else
        {
            cout<<"The list is empty"<<endl;
        }
        return l2;
    }


    Lista usun_przod(Lista &l)
    {
        Lista l2;
        if(l.t_size > 0)
        {
            t_size--;
            int *t;
            t = new int[t_size];
            for(int i=0; i<t_size; i++)
            {
                t[i]=tab[i+1];
            }

            for(int i=0; i<l.t_size; i++)
            {
                l.tab[i] = t[i];
            }

            delete[] t;
        }
        else
        {
            cout<<"The list is empty"<<endl;
        }

        l2 = l;
        return l2;
    }

    int pierwszy_el(Lista &l)
    {
        if(l.t_size > 0)
        {
            return l.tab[0];
        }
    }


    int ostatni_el(Lista &l)
    {
        if(l.t_size > 0)
        {
            return l.tab[l.t_size-1];
        }
    }

    bool pusta_lista(Lista &l)
    {
        if(l.t_size > 0)return false;
        return true;
    }

    void display(Lista &l)
    {
        for(int i=0; i<l.t_size; i++)
        {
            cout<<l.tab[i]<<" ";
        }
        cout<<endl;
    }
};



int main()
{

    Lista l1;
    l1.display(l1);

    Lista copy_l1 = l1;
    copy_l1.display(copy_l1);

    copy_l1.dodaj_przod(copy_l1,3);
    copy_l1.dodaj_przod(copy_l1,15);
    copy_l1.display(copy_l1);

    l1.dodaj_przod(l1,4);
    l1.dodaj_przod(l1,6);
    l1.dodaj_przod(l1,7);
    l1.display(l1);

    l1.dodaj_tyl(l1,43);
    l1.dodaj_tyl(l1,-12);
    l1.dodaj_przod(l1,1);
    l1.display(l1);

    l1.usun_tyl(l1);
    l1.usun_tyl(l1);
    l1.usun_tyl(l1);

    l1.display(l1);

    l1.usun_przod(l1);
//    l1.usun_przod(l1);
//    l1.usun_przod(l1);
//    l1.usun_przod(l1);
    l1.display(l1);

    cout<<l1.pierwszy_el(l1)<<endl;
    //copy_l1.display(copy_l1);
    cout<<copy_l1.pierwszy_el(copy_l1)<<endl;
    cout<<l1.ostatni_el(l1)<<endl;
    l1.usun_przod(l1);
    cout<<l1.ostatni_el(l1)<<endl;
    l1.display(l1);
    l1.usun_przod(l1);
    l1.usun_przod(l1);
    l1.display(l1);
    cout<<l1.pusta_lista(l1)<<endl;
    cout<<copy_l1.pusta_lista(copy_l1)<<endl;

    return 0;
}
