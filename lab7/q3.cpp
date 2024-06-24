#include <iostream>
using namespace std;

int startlab7()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 07" << endl;
    return 0;
}

class Shape
{
public:
    virtual void draw() const
    {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() const override
    {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape
{
public:
    void draw() const override
    {
        cout << "Drawing Square" << endl;
    }
};

int l7q3()
{
    Shape s;
    Circle c;
    Square sq;

    s.draw();
    c.draw();
    sq.draw();

    return 0;
}

int main()
{
    startlab7();
    l7q3();
    return 0;
}