#include <iostream>

using namespace std;

class Point
{
    int x;
    int y;

public:
    Point(int xx= 0, int yy = 0)
    {
        x = xx;
        y = yy;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    friend bool arePointsEqual(Point p1, Point p2);
};


bool arePointsEqual(Point p1, Point p2)
{
    if(p1.x == p2.x && p1.y == p2.y)
        return true;
    return false;
};

int main()
{
    Point p1(2,3);
    Point p2(2,3);
    cout<<"Are the given points the same? "<<arePointsEqual(p1,p2)<<endl;

    Point p3(-2,3);
    Point p4(2,3);
    cout<<"Are the given points the same? "<<arePointsEqual(p3,p4)<<endl;
    return 0;
}
