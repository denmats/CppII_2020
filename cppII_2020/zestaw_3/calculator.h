#include <iostream>

using namespace std;

class Calculator
{
    double first;
    double second;
    double result;

public:
    void read_first();
    void read_second();
    void display_result();
    void add(double a, double b);
    void subtract(double a, double b);
    void multiply(double a, double b);
    void divide(double a, double b);
    void make_calculation();

    Calculator() {}
};
