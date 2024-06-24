#include <iostream>
#include <vector>
#include <memory>
using namespace std;

int startlab7()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 07" << endl;
    return 0;
}
class Shape
{
protected:
    string color;

public:
    Shape(const string &c) : color(c) {}

    virtual double area() const = 0;

    virtual void display() const
    {
        cout << "Color: " << color << endl;
    }

    virtual ~Shape() = default;
};

class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(const string &c, double w, double h)
        : Shape(c), width(w), height(h) {}

    double area() const override
    {
        return width * height;
    }

    void display() const override
    {
        Shape::display();
        cout << "Width: " << width << ", Height: " << height << ", Area: " << area() << endl;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(const string &c, double r)
        : Shape(c), radius(r) {}

    double area() const override
    {
        return 3.14159 * radius * radius;
    }

    void display() const override
    {
        Shape::display();
        cout << "Radius: " << radius << ", Area: " << area() << endl;
    }
};

int l7q5()
{
    vector<shared_ptr<Shape>> shapes;

    shapes.push_back(make_shared<Rectangle>("Red", 5.0, 3.0));
    shapes.push_back(make_shared<Circle>("Blue", 7.0));

    for (const auto &shape : shapes)
    {
        shape->display();
    }

    return 0;
}

int main()
{
    startlab7();
    l7q5();
    return 0;
}