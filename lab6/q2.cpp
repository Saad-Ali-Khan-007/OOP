#include <iostream>
using namespace std;

int startlab6()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 06" << endl;
    return 0;
}

class Circle
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const
    {
        return 3.14 * radius * radius;
    }

    double circumference() const
    {
        return 2 * 3.14 * radius;
    }

    void display() const
    {
        cout << "Circle [Radius: " << radius << "]" << endl;
        cout << "Area: " << area() << endl;
        cout << "Circumference: " << circumference() << endl;
    }
};

int l6q2()
{
    Circle circ(5.0);
    circ.display();
    return 0;
}

int main()
{
    startlab6();
    l6q2();
    return 0;
}