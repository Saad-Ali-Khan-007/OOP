#include <iostream>
using namespace std;

int startlab12()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 12" << endl;
    return 0;
}
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    friend double calculatePerimeter(const Rectangle &r);
};

double calculatePerimeter(const Rectangle &r)
{
    return 2 * (r.length + r.width);
}
int l12q2()
{
    Rectangle rectangle(10.0, 5.0);
    cout << "Perimeter of the rectangle: " << calculatePerimeter(rectangle) << endl;
    return 0;
}

int main()
{
    startlab12();
    l12q2();
    return 0;
}
