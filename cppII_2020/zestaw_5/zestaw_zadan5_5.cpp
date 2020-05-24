#include <iostream>
#include <cmath>

using namespace std;

class Circle;

class Point
{
    float x;
    float y;

public:
    Point(float xx = 0, float yy = 0)
    {
        x = xx;
        y = yy;
    }

    float getX()
    {
        return x;
    }

    float getY()
    {
        return y;
    }

    friend float getDistanceBetweenCenters(Circle c1, Circle c2);
    friend bool doCirclesIntersect(Circle c1, Circle c2);
};

class Circle :public Point
{
    float radius;

public:
    Circle(float xx, float yy, float r)
        :Point(xx,yy)
    {
        radius = r;
    }

    friend float getDistanceBetweenCenters(Circle c1, Circle c2);
    friend bool doCirclesIntersect(Circle c1, Circle c2);
};

float getDistanceBetweenCenters(Circle c1, Circle c2)
{
    return sqrt(pow((c1.getX()-c2.getX()),2)+pow((c2.getY()-c2.getY()),2));
}

bool doCirclesIntersect(Circle c1, Circle c2)
{
    if(abs(c1.radius-c2.radius)<abs(getDistanceBetweenCenters(c1,c2))&&(abs(getDistanceBetweenCenters(c1,c2)<(c1.radius+c2.radius))))
        return true;
    return false;
}

int main()
{
    Circle c1(1,2,3);
    Circle c2(2,2,3);
    cout<<"Do the circles intersect? "<<doCirclesIntersect(c1,c2)<<endl;

    Circle c3(1,2,3);
    Circle c4(2,2,-4);
    cout<<"Do the circles intersect? "<<doCirclesIntersect(c3,c4)<<endl;
    return 0;
}
