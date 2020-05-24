#include <iostream>
#include <map>

using namespace std;

class Osoba
{
public:
    string name;
    int age;
    map <string, int> persons;

public:
    Osoba() {}

    Osoba(string n, int a)
    {
        name = n;
        age = a;
    }

    void dopisz(string n, int a)
    {
        name = n;
        age = a;
        persons.insert(make_pair(name,age));
        cout<<"The data is added"<<endl;
    }

    int zmien(string n)
    {
        string nnew;
        int anew;

        auto entry = persons.find(n);
        if (entry != end(persons))
        {
            auto const value = move(entry->second);
            persons.erase(entry);

            cout<<"Enter a new name: ";
            cin>>nnew;
            cout<<"Enter a new age: ";
            cin>>anew;
            persons.insert({nnew, anew});
            cout<<"Name: "<<n<<" was replaced by "<<nnew<<endl;
            return 0;

        }
        else return 1;
    }

    int skasuj()
    {
        string n;
        cout<<"Give the name you want to remove: ";
        cin>>n;

        auto entry = persons.find(n);
        if (entry != end(persons))
        {
            auto const value = move(entry->second);
            persons.erase(entry);
            cout<<"Name: "<<n<<" is deleted"<<endl;
            return 0;
        }
        else return 1;
    }


    void drukuj()
    {
        map<string, int>::iterator it;

        for ( it = persons.begin(); it != persons.end(); it++ )
        {
            cout << it->first
                 << ':'
                 << it->second
                 << std::endl ;
        }
    }

};



int main()
{
    Osoba D;
    D.dopisz("Doe",30);
    D.dopisz("Do",35);
    D.dopisz("D",40);
    cout<<D.persons.size()<<endl;

    D.zmien("Do");
    D.drukuj();

    D.skasuj();
    D.drukuj();

    return 0;
}


