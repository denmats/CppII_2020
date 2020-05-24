#include <iostream>

using namespace std;

class Line;

class Point
{
    string name;
    float x;
    float y;

public:
    Point(string n = "A",float xx= 0, float yy = 0)
    {
        name = n;
        x = xx;
        y = yy;
    }

    friend bool isInside(Point p, Line ln);
};

class Line
{
    string name;
    float x1;
    float y1;
    float x2;
    float y2;

public:
    Line(string n = "blank", float xx1 = 0, float yy1 = 0, float xx2 = 2, float yy2 = 2)
    {
        name = n;
        x1 = xx1;
        y1 = yy1;
        x2 = xx2;
        y2 = yy2;
    }

    friend bool isInside(Point p, Line ln);
};

bool isInside(Point p, Line ln)
{
    if(p.y*ln.x2-ln.y1*ln.x2-ln.y2*p.x+ln.y2*ln.x1 == 0)
        return true;
    else return false;
}

int main()
{
    Point p("A",2,2);
    Line ln("AB",1,1,4,4);

    cout<<isInside(p,ln)<<endl;

    Point p1("A",0,-2);
    Line ln1("AB",1,1,4,4);

    cout<<isInside(p1,ln1)<<endl;

    return 0;
}
