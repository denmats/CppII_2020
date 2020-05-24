#include <iostream>

using namespace std;
class Punkt
{
protected:
    int x;
    int y;
public:
    Punkt(){}
    Punkt(int a, int b)
    {
        x = a;
        y = b;
    }

    int getPunktX()
    {
        return x;
    }

    int getPunktY()
    {
        return y;
    }

};

class Wektor :public Punkt
{
    Punkt start;
    Punkt finish;
    string name;
    static int counter;
public:
    Wektor()
    {
      counter++;
    }

    Wektor(string n, Punkt s, Punkt f)
    :Punkt()
    {
        name = n;
        start = s;
        finish = f;
        counter++;
    }

    ~Wektor()
    {
        name = "";
        delete &start;
        delete &finish;
    }

    static int getCounter()
    {
        return counter;
    }

    Punkt getPunktStart()
    {
        return start;
    }

    Punkt getPunktFinish()
    {
        return finish;
    }

    void display_wektor()
    {
        cout<<name<<"("<<start.getPunktX()<<","<<start.getPunktY()<<";"<<finish.getPunktX()<<","<<finish.getPunktY()<<")"<<endl;
    }

    Wektor static add(Wektor w1, Wektor w2)
    {
        int x1 = w1.getPunktStart().getPunktX()+w2.getPunktStart().getPunktX();
        int y1 = w1.getPunktStart().getPunktY()+w2.getPunktStart().getPunktY();
        Punkt a(x1,y1);

        int x2 = w1.getPunktFinish().getPunktX()+w2.getPunktFinish().getPunktX();
        int y2 = w1.getPunktFinish().getPunktY()+w2.getPunktFinish().getPunktY();
        Punkt b(x2,y2);
        Wektor result("addition",a,b);
        return result;
    }

    Wektor static substract(Wektor w1, Wektor w2)
    {
        int x1 = w1.getPunktStart().getPunktX()-w2.getPunktStart().getPunktX();
        int y1 = w1.getPunktStart().getPunktY()-w2.getPunktStart().getPunktY();
        Punkt a(x1,y1);

        int x2 = w1.getPunktFinish().getPunktX()-w2.getPunktFinish().getPunktX();
        int y2 = w1.getPunktFinish().getPunktY()-w2.getPunktFinish().getPunktY();
        Punkt b(x2,y2);
        Wektor result("subtraction",a,b);
        return result;
    }

    Wektor static multiply(Wektor w1, Wektor w2)
    {
        int x1 = w1.getPunktStart().getPunktX()*w2.getPunktStart().getPunktX();
        int y1 = w1.getPunktStart().getPunktY()*w2.getPunktStart().getPunktY();
        Punkt a(x1,y1);

        int x2 = w1.getPunktFinish().getPunktX()*w2.getPunktFinish().getPunktX();
        int y2 = w1.getPunktFinish().getPunktY()*w2.getPunktFinish().getPunktY();
        Punkt b(x2,y2);
        Wektor result("multiplication",a,b);
        return result;
    }


};
int Wektor::counter = 0;


int main()
{

    Wektor w1("w1",Punkt(2,3),Punkt(-5,3));
    Wektor w2("w2",Punkt(0,1),Punkt(-9,-2));
    Wektor::add(w1,w2).display_wektor();

    Wektor w3("w3",Punkt(2,23),Punkt(-5,13));
    Wektor w4("w4",Punkt(10,11),Punkt(-19,-2));
    Wektor::substract(w3,w4).display_wektor();

    Wektor w5("w5",Punkt(2,-23),Punkt(-5,-13));
    Wektor w6("w6",Punkt(-10,-11),Punkt(-19,-2));
    Wektor::substract(w5,w6).display_wektor();

    cout<<"Created "<<Wektor::getCounter()<<" vectors"<<endl;
    return 0;
}
