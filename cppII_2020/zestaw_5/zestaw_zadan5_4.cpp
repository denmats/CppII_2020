#include <iostream>

using namespace std;

class Circle
{
    float radius;
    int color;

public:
    Circle()
    {
        radius = 1;
    }

    Circle(float r, int c)
    {
        radius = r;
        color = c;
    }

    float getCircleSurfaceArea()
    {
        return 3.14159*radius*radius;
    }

    void setRadius()
    {
        cout<<"Set the radius: ";
        cin>>radius;
    }

    void setColor()
    {
        cout<<"Set circle color: ";
        cin>>color;
    }

    friend void compareTwoCircles(Circle c1, Circle c2);
};

void compareTwoCircles(Circle c1, Circle c2)
{
    if(c1.getCircleSurfaceArea() == c2.getCircleSurfaceArea() && c1.color == c2.color)
        cout<<"Both circles have the same surface area and the same color"<<endl;
    else
        cout<<"The circles are different"<<endl;
}

int main()
{
    Circle c1;
    Circle c2;
    compareTwoCircles(c1,c2);

    c1.setColor();
    c2.setColor();
    compareTwoCircles(c1,c2);

    c1.setColor();
    c2.setColor();
    compareTwoCircles(c1,c2);

    return 0;
}
