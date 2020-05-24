#include <iostream>


using namespace std;

class bazowa
{
public:
    virtual void typ_wskaznika()=0;
    virtual void typ_objektu()=0;
};

class pochodna1 :public bazowa
{
public:
    pochodna1(){}

public:
     virtual void typ_wskaznika()
     {
         cout<<"typ_wskaznkia belongs to class pochodna1"<<endl;
     };
     virtual void typ_objektu()
     {
         cout<<"typ_objektu is pochodna1"<<endl;
     };

};

class pochodna2 :public bazowa
{
public:
    pochodna2(){}

public:
    virtual void typ_wskaznika()
     {
         cout<<"typ_wskaznkia belongs to class pochodna2"<<endl;
     };
     virtual void typ_objektu()
     {
         cout<<"typ_objektu is pochodna2"<<endl;
     };

};


int main()
{
    pochodna1 p1;
    pochodna2 p2;

    bazowa *bz;
    bz = &p2;

    bz ->typ_objektu();
    bz->typ_wskaznika();
}
