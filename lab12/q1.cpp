#include <iostream>
using namespace std;

int startlab12()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 12" << endl;
    return 0;
}

class Circle
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    friend double calculateArea(const Circle &c);
};

double calculateArea(const Circle &c)
{
    return 3.14 * c.radius * c.radius;
}

int l12q1()
{
    Circle circle(5.0);
    cout << "Area of the circle: " << calculateArea(circle) << endl;
    return 0;
}

int main()
{
    startlab12();
    l12q1();
    return 0;
}
