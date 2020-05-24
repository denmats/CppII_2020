#include <iostream>

using namespace std;

class Cuboid
{
    float foot_a;
    float foot_b;
    float height;

public:
    Cuboid(float a, float b, float h)
    {
        foot_a = a;
        foot_b = b;
        height = h;
    }

    void getCuboidVolume()
    {
        cout<<"The cuboid volume is "<<foot_a * foot_b *height<<endl;
    }

    friend void getTotalCuboidField(Cuboid c);
};

void getTotalCuboidField(Cuboid c)
{
    cout<<"The total cuboid field is "<<2*c.foot_a*c.foot_b+2*c.foot_b*c.height+2*c.foot_a*c.height<<endl;
}

int main()
{
    Cuboid c(2,2,3);
    c.getCuboidVolume();
    getTotalCuboidField(c);

    return 0;
}
