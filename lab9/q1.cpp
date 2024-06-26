#include <iostream>
using namespace std;

int startlab9()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Start of Lab 09" << endl;
    return 0;
}

class Shape
{
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override
    {
        return width * height;
    }
};

int l9q1()
{
    Circle c(5.0);
    Rectangle r(4.0, 6.0);

    cout << "Area of Circle: " << c.area() << endl;
    cout << "Area of Rectangle: " << r.area() << endl;
    return 0;
}

int main()
{
    startlab9();
    l9q1();
    return 0;
}