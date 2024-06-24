#include <iostream>
using namespace std;

int startlab6()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 06" << endl;
    return 0;
}
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const
    {
        return length * width;
    }

    double perimeter() const
    {
        return 2 * (length + width);
    }

    void display() const
    {
        cout << "Rectangle [Length: " << length << ", Width: " << width << "]" << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int l6q1()
{
    Rectangle rect(5.0, 3.0);
    rect.display();
    return 0;
}

int main()
{
    startlab6();
    l6q1();
    return 0;
}