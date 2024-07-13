#include <iostream>
using namespace std;

// Static member functions in C++ are class-level functions that are associated with the class itself rather than with individual instances (objects) of the class. They are declared using the static keyword, and we can call such a function with a class name without the need to create an object.A typical use of static members is for recording data common to all objects of a class. For example, you can use a static data member as a counter to store the number of objects of a particular class type that are created.

class Shape
{
protected:
    float width;
    float height;

public:
    static int count;
    Shape()
    {
        width = 0;
        height = 0;
    }
    Shape(float w, float h) : width(w), height(h)
    {
        count++;
    }
    int getCount()
    {
        return count;
    }
    virtual double area()
    {
        return 0.0;
    }
};
int Shape::count = 0;

class Rectangle : public Shape
{
public:
    Rectangle(float w, float h) : Shape(w, h) {}
    double area() override
    {
        cout << "I am a rectangle and child of shape:" << endl;
        return width * height;
    }
};
class Triangle : public Shape
{
protected:
    float angle;

public:
    Triangle(float w, float h, float a) : Shape(w, h)
    {
        angle = a;
    }
    double area() override
    {
        cout << "I am a triangle and child of shape:" << endl;
        return 0.5 * width * height;
    }
};

class Student
{
private:
    float cgpa;
    float marks;

public:
    Student(float gp, float m) : cgpa(gp), marks(m)
    {
    }
    void showData()
    {
        cout << "Cgpa: " << cgpa << " marks: " << marks << endl;
    }
};

int main()
{
    Student s[2] = {s[3.7, 500], s[3.8, 520]};
    for (int i = 0; i < 2; i++)
    {
        s[i].showData();
    }
    Rectangle r1(22, 44);
    Rectangle r2(22, 44);
    Rectangle r3(22, 44);
    Rectangle r4(22, 44);
    Rectangle r5(22, 44);
    Triangle tr1(22, 44, 20);
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
    cout << r4.area() << endl;
    cout << r5.area() << endl;
    cout << tr1.area() << endl;

    Shape *sh;

    sh = &r1;

    cout << sh->area() << endl;
    cout << sh->getCount() << endl;
    sh = &tr1;

    cout << sh->area() << endl;
    cout << sh->getCount() << endl;

    return 0;
}