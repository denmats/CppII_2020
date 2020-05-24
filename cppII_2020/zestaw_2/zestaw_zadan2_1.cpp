#include <iostream>
#include <math.h>

using namespace std;

class Wektor
{
    int x;
    int y;
public:
    Wektor(int a, int b)
    {
        x = a;
        y = b;
    }

    int getWx()
    {
        return x;
    }

    int getWy()
    {
        return y;
    }

    void display_vector()
    {
        cout<<"Wektor ("<<x<<","<<y<<")"<<endl;
    }
};

class Odcinek
{
    int Line_startX;
    int Line_startY;
    int Line_endX;
    int Line_endY;
    string name;

public:
    Odcinek(){}

    Odcinek(string n,int x1,int y1,int x2,int y2)
    {
        name = n;
        Line_startX = x1;
        Line_startY = y1;
        Line_endX = x2;
        Line_endY = y2;
    }

    Odcinek(string n="_blank")
    {
        name = n;
        cout<<"Set the coordinates for the start of the line: "<<endl;
        Line_startX = setCoordinanteX();
        Line_startY = setCoordinanteY();
        cout<<"Set the coordinates for the end of the line: "<<endl;
        Line_endX = setCoordinanteX();
        Line_endY = setCoordinanteY();
    }

    int setCoordinanteX()
    {
        int x;
        cout<<"set x: ";
        cin>>x;
        return x;
    }

    int setCoordinanteY()
    {
        int y;
        cout<<"set y: ";
        cin>>y;
        return y;
    }

    int getLine_startX(Odcinek o)
    {
        return o.Line_startX;
    }

    int getLine_startY(Odcinek o)
    {
        return o.Line_startY;
    }

    int getLine_endX(Odcinek o)
    {
        return o.Line_endX;
    }

    int getLine_endY(Odcinek o)
    {
        return o.Line_endY;
    }

    double getLineLength()
    {
        return sqrt(pow((Line_startX-Line_endX),2)+pow((Line_startY-Line_endY),2));
    }

    Odcinek getReflectedLineByAxleX(Odcinek line)
    {
        int x1 = getLine_startX(line);
        int y1 = -1*getLine_startY(line);
        int x2 = getLine_endX(line);
        int y2 = -1*getLine_endY(line);

        Odcinek o("mirrorX",x1, y1, x2, y2);

        return o;
    }

    Odcinek getReflectedLineByAxleY(Odcinek line)
    {
        int x1 = -1*getLine_startX(line);
        int y1 = getLine_startY(line);
        int x2 = -1*getLine_endX(line);
        int y2 = getLine_endY(line);

        Odcinek o("mirrorY",x1, y1, x2, y2);

        return o;
    }

    Odcinek moveLine(Odcinek line, Wektor w)
    {
        int x1 = w.getWx() + getLine_startX(line);
        int y1 = w.getWy() + getLine_startY(line);
        int x2 = w.getWx() + getLine_endX(line);
        int y2 = w.getWy() + getLine_endY(line);

        Odcinek o("moveByVector",x1, y1, x2, y2);

        return o;
    }


    void display_Odcinek()
    {
        cout<<name<<"("<<Line_startX<<","<<Line_startY<<";"<<Line_endX<<","<<Line_endY<<")"<<endl;
    }
};

int main()
{
    //set coordinates for line
    Odcinek o("AB");
    o.display_Odcinek();

    //get the line length
    cout<<o.getLineLength()<<endl;

    //get the line reflected by axle X
    o.getReflectedLineByAxleX(o).display_Odcinek();

    //get the line reflected by axle Y
    o.getReflectedLineByAxleY(o).display_Odcinek();

    //get the line moved by certain vector
    Wektor w(2,4);
    w.display_vector();
    o.moveLine(o,w).display_Odcinek();

    return 0;
}

